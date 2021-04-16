#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main(){
    int t;
    cin >> t;
    int N[t-1];
    for (int j = 0; j < t; j++){
        cin >> N[j];
    }
    int num = 0;    
    for (int i = 0; i < t; i++){
        num += (N[i]*N[i]);
        cout << num << endl;
    }
}
