#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    pair<int, int> p[5];

    for(int i=0; i<5; i++){
        int a, b;
        cin >> a >> b;
        p[i] = make_pair(a, b); // p[i] = {a, b};
    }

    for(int i=0; i<5; i++){
        cout << "p[" << i<< "].first : " << p[i].first << ", p[" << i << "].second : " << p[i].second << "\n";
    }

    return 0;
}