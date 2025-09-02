//NAME : VIVEK KUMAR
//BITS ID: 202419TW021
package edu.utils;
import edu.main.Student;

public class StatusPrinter {
 public void printStatus(Student s) {
     System.out.println("Student Status: " + (s.isPassed() ? "Pass" : "Fail"));
 }

 @Override
 public String toString() {
     return "StatusPrinter Utility";
 }
}
