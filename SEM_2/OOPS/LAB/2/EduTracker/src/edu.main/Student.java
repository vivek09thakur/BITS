// NAME: VIVEK KUMAR
// BITS ID: 202419TW021
package edu.main;

public class Student {
	private String studentId;
	private String name;
	private float marks;

	static int totalStudents = 0;
	final String collegeName = "EduTracker";

	public Student(String studentId, String name, float marks) {
		this.studentId = studentId;
		this.name = name;
		this.marks = marks;
		totalStudents++;
	}

	public Student() {
		this("0", "Unknown", 0.0f);
	}

	public void showDetails() {
		System.out.println("ID: " + this.studentId + ", Name: " + this.name + ", Marks: " + this.marks);
	}

	public void calculateGrade() {
		int grade;
		if (marks >= 90) {
			grade = 'A';
			System.out.println("Grade A");
		} else {
			grade = 'B';
			System.out.println("Grade B");
		}
	}

	public void updateMarks(float newMarks) {
		this.marks = newMarks;
	}

	public void updateMarks(float[] subjectMarks) {
		float sum = 0;
		for (float m : subjectMarks)
			sum += m;
		this.marks = sum / subjectMarks.length;
	}

	public boolean isPassed() {
		return this.marks >= 40;
	}
	
	public String getName() {
		return name;
	}
}
