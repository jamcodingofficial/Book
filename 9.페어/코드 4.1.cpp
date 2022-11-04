#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<pair<int, int>> vp[4];

    int a, b;
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cin >> a >> b;
            vp[i].push_back({a, b});
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cout << vp[i][j].first << " " << vp[i][j].second << " ";
        }
        cout << "\n";
    }

    return 0;
    
}