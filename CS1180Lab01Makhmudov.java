/*
CS 1180 Lab 01 Fall 2019
This lab is just a series of steps to learn how to enter and executre
a program in Netbeans
*/
package cs1180.lab01.makhmudov;

import java.util.Scanner;
import javax.swing.JOptionPane;

/*
* Makhmud Makhmudov
* Section 07
* CS-1180L
* Aaron Hammer
* Travis Doom
 */

public class CS1180Lab01Makhmudov {
    public static void main(String[] args) {
        System.out.println("LAB Part 03");
       
        // welcome the user to the program
        System.out.println("Welcome, Time to Compute the Volume & Surface Area of a Rectangular Prism!");
                Scanner input = new Scanner(System.in);
               
        // get rectangular prisms dimensions for further calculations        
        System.out.println("Please Enter The Prisms Length");
        double length = input.nextDouble();
        
        System.out.println("Please Enter The Prisms Width");
        double width = input.nextDouble();
        
        System.out.println("Please Enter The Prisms Height");
        double height = input.nextDouble();
        // display a thank you message and show results of the dimensions
        System.out.println("Thank You For Your Cooperation. \nHere Are Your Results\n");
        System.out.printf("Rectangular Prism: \nLenght: %.2f\nWidth: %.2f\nHeight: %.2f\n",length,width,height);
        System.out.printf("Area: %.2f\n", (length * width * height));
        // SA formula : 2wl + 2lh + 2hw
        // Show the Surface Area Answer
        System.out.printf("Surface Area : %.2f\n", 2 * (width * length) + 2 *(length * height) + 2 * (height * width ));
        System.out.println("Thank You!\n\n");
        
        
        // welcome user to part 1
        System.out.println("LAB Part 01");
        System.out.println("Hello World!");
        // create a string variable output
        String output;
        // create a int value and set to 1
        int integerNumber = 1;
        System.out.print("Integer: ");
        System.out.println(integerNumber);
        // print out the integer numbers
        output = "Integer; " + integerNumber;
        System.out.println(output);
        System.out.println("Integer: " + integerNumber);
        System.out.printf("Integer: %d", integerNumber);
        System.out.printf("\n\n");
        
        // Set doubleNumber to 3.14
        
        double doubleNumber = 3.14;
        // display the doubleNumber
        System.out.println("Double: " + doubleNumber);
        System.out.printf("Double: %f\n", doubleNumber);
        System.out.printf("Double: %.2f\n\n", doubleNumber);
        
        // Set doubleNumber to PI
        doubleNumber = Math.PI;
        
        System.out.println("Double: " + doubleNumber);
        System.out.printf("Double: %f5\n", doubleNumber);
        output = String.format("Double: %f\n\n", doubleNumber);
        System.out.printf(output);
        // Create a scanner variable called Keyboard 
        Scanner keyboard = new Scanner(System.in);
        System.out.print("Enter any integer (e.g. -14); ");
        // prompt for a integer entry by the user
        integerNumber = keyboard.nextInt();
        System.out.printf("You entered the floating point number %.2f \n", doubleNumber);
        // display the float #
        
        // Give the output of the integers product.
        output = "The product of the integer and the double numbers is ";
        output = output + (integerNumber * doubleNumber);
        JOptionPane.showMessageDialog(null, output, "Lab01 Output",JOptionPane.INFORMATION_MESSAGE);
        
                
        
        
              
        
    } // end method main
    
} // end class CS1180Lab01Doom
