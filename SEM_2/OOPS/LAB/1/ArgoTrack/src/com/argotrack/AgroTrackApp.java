// @author : Vivek Kumar
// BITS ID : 202419tw021
package com.agrotrack;

import java.util.Scanner;

public class AgroTrackApp {
    public static final int FERTILIZER_RATIO = 2;

    private static String classifyCategory(int index) {
        if (index < 30) return "Low Productivity \u2193";
        else if (index <= 60) return "Moderate \u26A0";
        else return "High Yield \u2714";
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("=====================================");
        System.out.println("   AgroTrack - Smart Agriculture Management Tool");
        System.out.println("=====================================\n");

        System.out.print("Enter Farm Name: ");
        String farmName = sc.nextLine();

        System.out.print("Enter Rainfall (in mm): ");
        float rainfall = sc.nextFloat();

        System.out.print("Enter Fertilizer Used (kg): ");
        int fertilizer = sc.nextInt();

        int cropIndex = (fertilizer * FERTILIZER_RATIO) + (int) rainfall;
        String note = ((fertilizer & 1) == 0) ? "even fertilizer input" : "odd fertilizer input";

        System.out.println("\n----- Crop Report -----");
        System.out.println("Crop Index: " + cropIndex + " 🌱");
        System.out.println("Category: " + classifyCategory(cropIndex));
        System.out.println("Note: " + note);

        System.out.println("\n----- Farm Objects Demo -----");
        Farm f1 = new Farm(1, farmName, rainfall, fertilizer);
        Farm f2 = new Farm(2, "Demo Farm", 45.3f, 12);

        System.out.println("Farm 1 Index = " + f1.calculateCropIndex());
        System.out.println("Farm 2 Index = " + f2.calculateCropIndex());

        System.out.println("\n----- AgriUnit Display -----");
        AgriUnit[] units = { new Farmer(100, "Ramesh"), new OrganicFarmer(101, "Sita"), f1 };
        for (AgriUnit u : units) u.displayDetails();

        sc.close();
    }
}
