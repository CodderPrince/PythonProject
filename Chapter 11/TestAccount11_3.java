/*
 * 11.3
 */

import java.util.Date;
import java.util.Scanner;

// Base Account class
class Account {
    private int id;
    private double balance;
    private double annualInterestRate;
    private Date dateCreated;

    // Default constructor
    public Account() {
        this.id = 0;
        this.balance = 0.0;
        this.annualInterestRate = 0.0;
        this.dateCreated = new Date();
    }

    // Constructor with parameters
    public Account(int id, double balance) {
        this.id = id;
        this.balance = balance;
        this.annualInterestRate = 0.0;
        this.dateCreated = new Date();
    }

    // Getter and Setter methods for id, balance, and annualInterestRate
    public int getId() { return id; }
    public void setId(int id) { this.id = id; }

    public double getBalance() { return balance; }
    public void setBalance(double balance) { this.balance = balance; }

    public double getAnnualInterestRate() { return annualInterestRate; }
    public void setAnnualInterestRate(double annualInterestRate) { this.annualInterestRate = annualInterestRate; }

    public Date getDateCreated() { return dateCreated; }

    // Method to calculate monthly interest rate
    public double getMonthlyInterestRate() {
        return annualInterestRate / 12;
    }

    // Method to calculate monthly interest
    public double getMonthlyInterest() {
        return balance * (getMonthlyInterestRate() / 100);
    }

    // Method to withdraw an amount from balance
    public void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            System.out.println("Insufficient balance.");
        }
    }

    // Method to deposit an amount into balance
    public void deposit(double amount) {
        balance += amount;
    }

    // toString method to display account details
    @Override
    public String toString() {
        return "Account ID: " + id + "\nBalance: $" + balance + "\nAnnual Interest Rate: " + annualInterestRate + "%\nDate Created: " + dateCreated;
    }
}

// SavingsAccount class extending Account
class SavingsAccount extends Account {
    // Constructor for SavingsAccount
    public SavingsAccount(int id, double balance) {
        super(id, balance);
    }

    // Override toString to include account type
    @Override
    public String toString() {
        return "Savings " + super.toString();
    }
}

// CheckingAccount class extending Account
class CheckingAccount extends Account {
    private double overdraftLimit;

    // Constructor for CheckingAccount
    public CheckingAccount(int id, double balance, double overdraftLimit) {
        super(id, balance);
        this.overdraftLimit = overdraftLimit;
    }

    // Method to withdraw considering overdraft limit
    @Override
    public void withdraw(double amount) {
        if (getBalance() + overdraftLimit >= amount) {
            setBalance(getBalance() - amount);
        } else {
            System.out.println("Overdraft limit exceeded.");
        }
    }

    // Override toString to include account type and overdraft limit
    @Override
    public String toString() {
        return "Checking " + super.toString() + "\nOverdraft Limit: $" + overdraftLimit;
    }
}

// Test class with user input
public class TestAccount11_3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Create Account object with user input
        System.out.print("\nEnter Account ID: ");
        int accountId = scanner.nextInt();
        System.out.print("Enter Account Balance: $ ");
        double accountBalance = scanner.nextDouble();
        System.out.print("Enter Annual Interest Rate (in %): ");
        double accountInterestRate = scanner.nextDouble();

        Account account = new Account(accountId, accountBalance);
        account.setAnnualInterestRate(accountInterestRate);

        // Create SavingsAccount object with user input
        System.out.print("\nEnter Savings Account ID: ");
        int savingsId = scanner.nextInt();
        System.out.print("Enter Savings Account Balance: $ ");
        double savingsBalance = scanner.nextDouble();
        System.out.print("Enter Savings Account Annual Interest Rate (in %): ");
        double savingsInterestRate = scanner.nextDouble();

        SavingsAccount savingsAccount = new SavingsAccount(savingsId, savingsBalance);
        savingsAccount.setAnnualInterestRate(savingsInterestRate);

        // Create CheckingAccount object with user input
        System.out.print("\nEnter Checking Account ID: ");
        int checkingId = scanner.nextInt();
        System.out.print("Enter Checking Account Balance: $ ");
        double checkingBalance = scanner.nextDouble();
        System.out.print("Enter Checking Account Annual Interest Rate (in %): ");
        double checkingInterestRate = scanner.nextDouble();
        System.out.print("Enter Checking Account Overdraft Limit: $ ");
        double overdraftLimit = scanner.nextDouble();

        CheckingAccount checkingAccount = new CheckingAccount(checkingId, checkingBalance, overdraftLimit);
        checkingAccount.setAnnualInterestRate(checkingInterestRate);

        // Withdraw and deposit actions based on user input
        System.out.print("\nEnter amount to withdraw from Account: $ ");
        double withdrawAmount = scanner.nextDouble();
        account.withdraw(withdrawAmount);

        System.out.print("Enter amount to deposit into Account: $ ");
        double depositAmount = scanner.nextDouble();
        account.deposit(depositAmount);

        System.out.print("\nEnter amount to withdraw from Savings Account: $ ");
        double savingsWithdrawAmount = scanner.nextDouble();
        savingsAccount.withdraw(savingsWithdrawAmount);

        System.out.print("Enter amount to deposit into Savings Account: $ ");
        double savingsDepositAmount = scanner.nextDouble();
        savingsAccount.deposit(savingsDepositAmount);

        System.out.print("\nEnter amount to withdraw from Checking Account: $ ");
        double checkingWithdrawAmount = scanner.nextDouble();
        checkingAccount.withdraw(checkingWithdrawAmount);

        System.out.print("Enter amount to deposit into Checking Account: $ ");
        double checkingDepositAmount = scanner.nextDouble();
        checkingAccount.deposit(checkingDepositAmount);

        // Display account details
        System.out.println("\n" + account.toString());
        System.out.println("\n" + savingsAccount.toString());
        System.out.println("\n" + checkingAccount.toString() + "\n");

        scanner.close();
    }
}
