#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;

    if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }

    return true;
}

bool isPalindrome(int num) {
    int originalNum = num;
    int reverseNum = 0;

    while (num > 0) {
        reverseNum = reverseNum * 10 + num % 10;
        num /= 10;
    }

    return originalNum == reverseNum;
}

int countDivisors(int num) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    int maxNum = -1, minNum = 101;
    int primeCount = 0, palindromeCount = 0;
    int maxDivisors = 0, numberWithMaxDivisors = -1;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        // Update maximum and minimum numbers
        maxNum = max(maxNum, arr[i]);
        minNum = min(minNum, arr[i]);

        // Check for prime and palindrome numbers
        if (isPrime(arr[i])) {
            primeCount++;
        }
        if (isPalindrome(arr[i])) {
            palindromeCount++;
        }

        // Count divisors and update the number with max divisors
        int divisors = countDivisors(arr[i]);
        if (divisors > maxDivisors || (divisors == maxDivisors && arr[i] > numberWithMaxDivisors)) {
            maxDivisors = divisors;
            numberWithMaxDivisors = arr[i];
        }
    }

    cout << "The maximum number : " << maxNum << endl;
    cout << "The minimum number : " << minNum << endl;
    cout << "The number of prime numbers : " << primeCount << endl;
    cout << "The number of palindrome numbers : " << palindromeCount << endl;
    cout << "The number that has the maximum number of divisors : " << numberWithMaxDivisors << endl;

    return 0;
}
