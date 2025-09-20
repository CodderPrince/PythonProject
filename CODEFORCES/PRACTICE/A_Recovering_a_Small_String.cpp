#include <iostream>
using namespace std;

string find_word(int n) {
    string word = "aaa";
    int total = 3;
    
    while (total < n) {
        word[word.size() - 1]++;
        total++;
    }
    
    return word;
}

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        cout << find_word(n) << endl;
    }
    
    return 0;
}
