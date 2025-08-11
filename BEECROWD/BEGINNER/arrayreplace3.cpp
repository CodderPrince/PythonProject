
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double lista[100];
    double k;
    for(int i = 0; i < 100; i++){
        cin >> k;
        lista[i] = k; 
    }
    for(int i = 0; i < 100; i++){
        if(lista[i] <= 10){
            cout << fixed << setprecision(1);
            cout << "A[" << i << "] = " << lista[i] << "\n";
        }
    }
}
