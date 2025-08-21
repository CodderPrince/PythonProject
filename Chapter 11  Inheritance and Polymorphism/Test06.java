/*
 * 11.21 a
 * 
 */

package application;

public class Test06 {
	public static void main(String[] args) {
		new Person().printPerson();
		new Student().printPerson();
	}
}

class Student extends Person {
	@Override
	public String getInfo() {
		return "Student";
	}
}

class Person {
	public String getInfo() {
		return "Person";
	}

	public void printPerson() {
		System.out.println(getInfo());
	}
}