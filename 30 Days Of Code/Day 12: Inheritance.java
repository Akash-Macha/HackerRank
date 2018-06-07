// https://www.hackerrank.com/challenges/30-inheritance
import java.util.*;

class Person {
	protected String firstName;
	protected String lastName;
	protected int idNumber;
	
	// Constructor
	Person(String firstName, String lastName, int identification){
		this.firstName = firstName;
		this.lastName = lastName;
		this.idNumber = identification;
	}
	
	// Print person data
	public void printPerson(){
		 System.out.println(
				"Name: " + lastName + ", " + firstName 
			+ 	"\nID: " + idNumber); 
	}
}
// ------------Code----------------------------------
class Student extends Person{
	private int[] testScores;
    public Student(String fName, String lName , int s_id, int[] score)
    {
        super(fName,lName,s_id);
        this.testScores = score;
    }
    public char calculate()
        {
            int sum = 0;
            for(int i = 0 ; i<testScores.length ; i++)
            {
                sum += testScores[i];
            }
            int a = sum/testScores.length;
            if(90 <= a && a <= 100)
            	return 'O';
            else if(80 <= a && a < 90)
            	return 'E';
            else if(70 <= a && a < 80)
            	return 'A';
            else if(55 <= a && a < 70)
            	return 'P';
            else if(40 <= a && a < 55 )
            	return 'D';
            else
            	return 'T';
        }
}
// ------------------------------------------------------
class Solution {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		String firstName = scan.next();
		String lastName = scan.next();
		int id = scan.nextInt();
		int numScores = scan.nextInt();
		int[] testScores = new int[numScores];
		for(int i = 0; i < numScores; i++){
			testScores[i] = scan.nextInt();
		}
		scan.close();
		
		Student s = new Student(firstName, lastName, id, testScores);
		s.printPerson();
		System.out.println("Grade: " + s.calculate() );
	}
}
