/*
 * 11.21 b
 * 
 */

package application;

public class Test07 {
	public static void main(String[] args) {
		new Person01().printPerson01();
		new Student01().printPerson01();
	}
}

class Student01 extends Person01 {
	private String getInfo() {
		return "Student";
	}
}

class Person01 {
	private String getInfo() {
		return "Person";
	}

	public void printPerson01() {
		System.out.println(getInfo());
	}
}