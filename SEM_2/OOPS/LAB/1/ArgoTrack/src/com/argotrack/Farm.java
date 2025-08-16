// VIVEK KUMAR 202419TW021
package com.argotrack;

public class Farm extends AgriUnit {
    private int farmId;
    private String farmName;
    private float rainfall;
    private int fertilizerUsed;

    public static int totalFarms;
    static { totalFarms = 0; }

    public Farm(int farmId, String farmName, float rainfall, int fertilizerUsed) {
        this.farmId = farmId;
        this.farmName = farmName;
        this.rainfall = rainfall;
        this.fertilizerUsed = fertilizerUsed;
        totalFarms++;
        System.out.println("Total farms created: " + totalFarms);
    }

    public int getFarmId() { return farmId; }
    public String getFarmName() { return farmName; }
    public float getRainfall() { return rainfall; }
    public int getFertilizerUsed() { return fertilizerUsed; }

    public int calculateCropIndex() {
        return (fertilizerUsed * AgroTrackApp.FERTILIZER_RATIO) + (int) rainfall;
    }

    @Override
    public void displayDetails() {
        System.out.println("Farm #" + farmId + " — " + farmName +
                " | Rainfall: " + rainfall +
                " | Fertilizer: " + fertilizerUsed +
                " | Index: " + calculateCropIndex());
    }
}
