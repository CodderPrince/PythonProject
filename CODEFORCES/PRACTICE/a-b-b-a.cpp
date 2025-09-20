//a^b - b^a
//prince

#include <iostream>
#include <cmath>

using namespace std;

long long int ab_minus_ba(long long int a, long long int b) {
  if (a == b) {
    return 0;
  } else if (a > b) {
    return ab_minus_ba(b, a);
  } else {
    long long int result = a * log(a) - b * log(b);
    // Round the result to the nearest integer.
    result = round(result);
    return result;
  }
}

int main() {
  long long int a, b, sum;
  cin >> a >> b;
  sum = ab_minus_ba(a, b);
  cout << sum << endl;
  return 0;
}
