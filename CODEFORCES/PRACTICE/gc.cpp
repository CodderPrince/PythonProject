#include <iostream>

// Function to calculate the GCD using the Euclidean algorithm
long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    long long A, B;
    std::cin >> A >> B;

    // Calculate the GCD of A and B
    long long G = gcd(A, B);

    // Calculate the LCM of A and B using the GCD formula: LCM = (A * B) / G
    long long L = (A * B) / G;

    std::cout << G << " " << L << std::endl;

    return 0;
}
