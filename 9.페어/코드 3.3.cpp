#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(pair<char, int> x, pair<char, int> y){
    return x.second < y.second; // second의 큰 값이 뒤로 가도록 정렬 해라!
}

int main() {
    vector<pair<char, int>> vp;

    vp.push_back({'D', 50});
    vp.push_back({'E', 10});
    vp.push_back({'B', 40});
    vp.push_back({'A', 30});
    vp.push_back({'C', 20});

    sort(vp.begin(), vp.end(), cmp);

    for(int i=0; i<vp.size(); i++){
        cout << vp[i].first << " " << vp[i].second << "\n";
    }

    return 0;
}