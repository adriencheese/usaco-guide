//http://www.usaco.org/index.php?page=viewproblem2&cpid=917

#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    
    // freopen("traffic.in", "r", stdin);
    // freopen("traffic.out", "w", stdout);
    int n; cin >> n;
    vector<pair<int, int>> road;
    vector<string> seg;

    cout << "test" << endl;

    for (int i = 0; i < 4; i++) {
        string segment; cin >> segment;
        pair<int, int> range; cin >> range.first >> range.second;

        cout << "test3" << endl;
        
        seg.push_back(segment);

        cout << seg[i] << endl;

        road.push_back(range);

        cout << "test4" << endl;
    }

    for (int i = 0; i < road.size(); i++) {
        cout << road[i].first << ", " << road[i].second << endl;
    }
}