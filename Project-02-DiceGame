package project02.makhmudov;

import java.util.*;
import java.io.*;

/** AUTHOR: 
 * Makhmud Makhmudov
* Section 07
* CS-1180L
* Aaron Hammer
* Travis Doom
 *
 * PROGRAM SUMMARY : 
 * The Point of this program is to show the average win or loss amount when
 * playing a game where you roll a 6 sided die and with set parameters you
 * either win or lose your money This program will give the user the total
 * amounts and average amounts for the win or loss values. It Also reports my
 * findings of the "fairness" of this game in a document called GameData.txt
 * which this program creates.
 */
public class Project02Makhmudov {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws Exception {
        // Explain The Game Rules and Start
        System.out.println("Game Rules:\nroll die 1, 2 =\t\tLOSE\nroll die 3, 4, 5 =\tADD TO POT\nroll die 6 =\t\tYOU WIN * 2");

        // Send That Die Number to our RollResult To find the 
        RollResult();

    }

    public static int rollDie() {
        /*
        Grab a number 1-6 using the Math.Random and return it
        to the Main method
         */
        // Initialize Die
        int die;
        // Initialize Side count
        int SIDES = 6;
        // Grab Random #
        die = (int) (Math.random() * SIDES) + 1;
        // Return to Main
        return die;
    }

    public static void RollResult() throws Exception {
        // Ask user how many games they want to play, try 1000
        System.out.printf("How many games do you want to play? '1000'?");
        // import scanner for input
        Scanner input = new Scanner(System.in);
        int gameRounds = input.nextInt();
        // inititalize my variables for total money won and lost
        // inititalize variables for total wins and losses by users
        int moneyLost = 0;
        int moneyWon = 0;
        int houseWins = 0;
        int userWins = 0;
        // Initialize numGames and start it with 1 to indicate the first game
        int numGames = 1;

        // Num of Games Loop
        for (int i = 0; i < gameRounds; i++) {
            int userPot = 5;
            int roll = rollDie();
            System.out.println("\nPlayer 1 Rolled : " + roll + "\n");

            if (userPot > 0) {

                if (roll == 1 || roll == 2) {
                    //   System.out.printf("GAME OVER! YOU LOST YOUR $%d POT\n", userPot);
                    moneyLost += userPot;

                    houseWins += 1;
                    numGames += 1;

                } else if (2 < roll && roll < 6) {
                    userPot -= roll;
                    houseWins += 1;
                    moneyLost += roll;
                    //    System.out.printf("YOU LOSE! $%d - > Pot\n", roll);
                    numGames += 1;

                } else if (roll == 6) {
                    //    System.out.printf("YOU WIN! $%d Goes To You, Plus $%d From The House.\n", userPot, userPot);
                    moneyWon = roll * 2;
                    userWins += 1;
                    numGames += 1;
                }
            } else {
            }

        }
        // Calculations for the total average wins is money won divided by userwins
        double TotalAverWin = (double) moneyWon / (double) userWins;
        // Calculations for the total averages lost is money lost by games lost
        double TotalAverLoss = (double) moneyLost / (double) houseWins;
        // To take care of negative values I use the if statement to break up the wins and losses
        if (TotalAverWin > TotalAverLoss) {
            // Average winning amount equaled the total money won divided by the total wins
            System.out.printf("Average Amount Won : T$%d\t", moneyWon / userWins);
            System.out.printf("Average Amount Lost : $%.2f", (double) moneyLost / (double) numGames);
            // Print out total money average lost and won
            System.out.printf("\nTOTAL MONEY LOST AVERAGE:\t $%.2f\t", TotalAverLoss);
        System.out.printf("\nTOTAL MONEY WON AVERAGE:\t $%.2f\t", TotalAverWin);
        } else {
            // Same as last time only if the Total ave losses are greaters than wins
            System.out.printf("Average Amount Won : $%.2f\t", (double) moneyWon / (double) numGames);
            System.out.printf("Average Amount Lost : $%.2f", (double) moneyLost / (double) numGames);
            System.out.printf("\nTOTAL MONEY LOST AVERAGE:\t $%.2f\t", TotalAverLoss);
            System.out.printf("\nTOTAL MONEY WON AVERAGE:\t $%.2f\t", TotalAverWin);
        }
        // output the total wins for the user & and total losses
        System.out.printf("\nTotal Amount Won $%d\t", moneyWon);
        System.out.printf("Total Amount Lost : $%d\t", moneyLost);
        System.out.printf("\nTOTAL WINS %d\t", userWins);
        System.out.printf("TOTAL LOSSES %d\t\n", houseWins);
// Send our findings to our report which will dipslay our win loss percentage and my input
        reportFinding((double) houseWins, (double) userWins, numGames);
    }

    public static void reportFinding(double totalLosses, double totalWins, int totalGames) throws Exception {
        // Create the reporting file
        File userData = new File("GameData.txt");
        userData.createNewFile();
        // Create a PW object
        PrintWriter pw = new PrintWriter(userData);
        // Writing into data first checking if the file exists
        if (userData.exists()) {
            // Output the odds of winning and losing
            pw.printf("The Odds of Winning Are %%%.2f\t", totalWins / totalGames * 100);
            pw.printf("The Odds of Losing Are %%%.2f\n", totalLosses / totalGames * 100);
            // My own thoughts on this game
            pw.print("\n\nWhat I have found out was that this game is not fair, though it may seem\nlike you have fairly good chances at winning\nthe truth is you don't and looking at the win percentage vs loss percentage\nyou can clearly see why I say this.");

        } else {
            // tell user that file doesnt exist if it doesn't
            System.out.println("File Doesnt Exist");
        }
        // close our printwriter
        pw.close();

    }
}
