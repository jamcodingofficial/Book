#include <iostream>
#include <algorithm>
//
using namespace std;

bool check[101];

int main() {
    fill(check, check+101, true);
    
    for(int i=2; i<=100; i++){
        if(check[i] == true){
            for(int j=i*2; j<=100; j+=i){
                check[j] = false;
            }
        }
    }
    
    for(int i=2; i<=100; i++){
        if(check[i] == true){
            cout << i << ", ";
        }
    }
    
    return 0;
}
