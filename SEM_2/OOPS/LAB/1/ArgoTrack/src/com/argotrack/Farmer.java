// VIVEK KUMAR 202419TW021
package com.argotrack;

public class Farmer extends AgriUnit {
    private int farmerId;
    private String name;

    public Farmer(int farmerId, String name) {
        this.farmerId = farmerId;
        this.name = name;
    }

    public int getFarmerId() { return farmerId; }
    public String getName() { return name; }

    @Override
    public void displayDetails() {
        System.out.println("Farmer #" + farmerId + " — " + name);
    }
}
