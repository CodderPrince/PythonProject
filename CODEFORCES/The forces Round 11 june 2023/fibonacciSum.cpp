#include <iostream>
#include <unordered_set>

int main() {
    int x;
    std::cin >> x;

    std::unordered_set<int> fib_set;
    int a = 0, b = 1;

    while (a <= x) {
        fib_set.insert(a);
        int temp = a + b;
        a = b;
        b = temp;
    }

    for (int i : fib_set) {
        int complement = x - i;
        if (fib_set.count(complement)) {
            std::cout << "yes" << std::endl;
            return 0;
        }
    }

    std::cout << "no" << std::endl;

    return 0;
}
