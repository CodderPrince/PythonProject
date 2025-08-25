//9.25 d

package application;

public class Test7 {
	public static void main(String[] args) {
		T1 t1 = new T1();// instance
		T1 t2 = new T1();// instance
		System.out.println("t1's i = " + t1.i + " and j = " + t1.j);
		System.out.println("t2's i = " + t2.i + " and j = " + t2.j);
	}
}

class T1 {// constructor
	static int i = 0;
	int j = 0;

	T1() {
		i++;
		j = 1;
	}
}

/*
*First t1 called:
*1. i = 0	j = 0
*inner T1 method
*2. i = 1	j = 1
*
*Again call this T1
*1. i = 1	j = 0
*inner T1 method
*2. i = 2	j = 1
*/