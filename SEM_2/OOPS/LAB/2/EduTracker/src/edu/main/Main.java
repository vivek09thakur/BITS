// NAME : VIVEK KUMAR
// BITS ID : 202419TW021
package edu.main;
import edu.utils.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        System.out.print("        EduTracker      \n");
        System.out.print("=========================\n");

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Student ID: ");
        String id = sc.nextLine();
        sc.nextLine();

        System.out.print("Enter Student Name: ");
        String name = sc.nextLine();

        System.out.print("Enter Student Marks: ");
        float marks = sc.nextFloat();

        Student s = new Student(id, name, marks);
        s.showDetails();
        s.calculateGrade();
        sc.nextLine();
        System.out.print("Enter Mentor Name: ");
        String mentorName = sc.nextLine();

        System.out.print("Enter Mentor Department: ");
        String dept = sc.nextLine();

        Mentor m = new Mentor(mentorName, dept);
        m.assignMentor(s);
        StatusPrinter sp = new StatusPrinter();
        sp.printStatus(s);

        sc.close();
    }
}