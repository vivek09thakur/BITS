// VIVEK KUMAR 202419TW021
package com.argotrack;

public class OrganicFarmer extends Farmer {
    public OrganicFarmer(int farmerId, String name) {
        super(farmerId, name);
    }

    @Override
    public void displayDetails() {
        System.out.println("Organic Farmer #" + getFarmerId() + " — " + getName() + " (Uses organic methods)");
    }
}
