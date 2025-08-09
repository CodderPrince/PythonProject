/*
 * 11.3
 */

import java.util.Date;  // Importing the Date class for creating date objects

// Base Account class, which models a general bank account
class Account {
    private int accountNumber;           // Account number
    private double balance;              // Account balance
    private double annualInterestRate;   // Annual interest rate for the account
    private Date dateCreated;            // Date when the account was created

    // Constructor to initialize account details
    public Account(int accountNumber, double balance, double annualInterestRate) {
        this.accountNumber = accountNumber;
        this.balance = balance;
        this.annualInterestRate = annualInterestRate;
        this.dateCreated = new Date();   // Sets the creation date to the current date
    }

    // Getter methods to access private properties
    public int getAccountNumber() {
        return accountNumber;
    }

    public double getBalance() {
        return balance;
    }

    public double getAnnualInterestRate() {
        return annualInterestRate;
    }

    public Date getDateCreated() {
        return dateCreated;
    }

    // Method to deposit an amount into the account
    public void deposit(double amount) {
        if (amount > 0) {              // Only deposit if amount is positive
            balance += amount;
        }
    }

    // Method to withdraw an amount from the account
    public void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {  // Only allow withdrawal if there is enough balance
            balance -= amount;
        }
    }

    // toString method to display account information
    @Override
    public String toString() {
        return "Account Number: " + accountNumber + "\nBalance: $" + balance +
                "\nAnnual Interest Rate: " + annualInterestRate + "%\nDate Created: " + dateCreated;
    }
}

// CheckingAccount class, subclass of Account, with an overdraft limit
class CheckingAccount extends Account {
    private double overdraftLimit;  // Overdraft limit for the checking account

    // Constructor to initialize checking account details
    public CheckingAccount(int accountNumber, double balance, double annualInterestRate, double overdraftLimit) {
        super(accountNumber, balance, annualInterestRate);
        this.overdraftLimit = overdraftLimit;
    }

    // Overriding withdraw method to allow overdrafts within the overdraft limit
    @Override
    public void withdraw(double amount) {
        if (amount > 0 && (getBalance() - amount) >= -overdraftLimit) {  // Allows overdraft up to the specified limit
            super.withdraw(amount);  // Calls the withdraw method of the superclass Account
        }
    }

    // toString method to display checking account information, including overdraft limit
    @Override
    public String toString() {
        return super.toString() + "\nOverdraft Limit: $" + overdraftLimit;
    }
}

// SavingsAccount class, subclass of Account, with no overdraft allowed
class SavingsAccount extends Account {

    // Constructor to initialize savings account details
    public SavingsAccount(int accountNumber, double balance, double annualInterestRate) {
        super(accountNumber, balance, annualInterestRate);
    }

    // Overriding withdraw method to prevent overdrafts; only allows withdrawal if enough balance is available
    @Override
    public void withdraw(double amount) {
        if (amount > 0 && amount <= getBalance()) {  // Ensures balance does not go below zero
            super.withdraw(amount);  // Calls the withdraw method of the superclass Account
        }
    }

    // toString method to display savings account information, indicating that no overdraft is allowed
    @Override
    public String toString() {
        return super.toString() + "\nSavings Account - No Overdraft Allowed";
    }
}

// Main class to test Account, CheckingAccount, and SavingsAccount classes
public class TestAccount11_3 {
    public static void main(String[] args) {
        // Create a regular Account object with account number 1, balance 1000, and interest rate 1.5%
        Account account = new Account(1, 1000, 1.5);

        // Create a CheckingAccount object with overdraft limit 100
        CheckingAccount checkingAccount = new CheckingAccount(2, 500, 1.5, 100);

        // Create a SavingsAccount object with no overdraft allowed
        SavingsAccount savingsAccount = new SavingsAccount(3, 1000, 1.5);

        // Display details of the regular account
        System.out.println("Account Details:");
        System.out.println(account.toString());

        // Perform a withdrawal within overdraft limit for the checking account and display details
        System.out.println("\nChecking Account Details:");
        checkingAccount.withdraw(600);  // Attempts to withdraw 600 from a balance of 500
        System.out.println(checkingAccount.toString());

        // Attempt a withdrawal that exceeds balance for the savings account and display details
        System.out.println("\nSavings Account Details:");
        savingsAccount.withdraw(1100);  // Attempt to withdraw 1100, which should fail due to insufficient funds
        System.out.println(savingsAccount.toString());
    }
}
