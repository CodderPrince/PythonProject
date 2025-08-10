#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text = "IT IS SPRING, NO MATTER FLOWERS BLOOM OR NOT";

    // i. 'IT IS SPRING '
    string result_i = text.substr(0, 13);
    cout << "i. '" << result_i << "'" << endl;

    // ii. 'FLOWERS BLOOM IN SPRING'
    string result_ii = "FLOWERS BLOOM IN " + text.substr(6, 6);
    cout << "ii. '" << result_ii << "'" << endl;

    // iii. ' NO MATTER IS BLOOMING'
    string result_iii = text.substr(14, 11) + " IS " + text.substr(20, 8) + "ING";
    cout << "iii. '" << result_iii << "'" << endl;

    // iv. 'garbage'
    string result_iv = "garbage";
    cout << "iv. '" << result_iv << "'" << endl;

    return 0;
}