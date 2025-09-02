// NAME : VIVEK KUMAR
// BITS ID: 202419TW021
package edu.main;

public class Mentor {
    private String name;
    private String dept;

    public Mentor(String name, String dept) {
        this.name = name;
        this.dept = dept;
    }

    public void assignMentor(Student s) {
        System.out.println("Mentor " + name + " assigned to student " + s.getName());
    }
}