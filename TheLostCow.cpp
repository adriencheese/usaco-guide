//http://www.usaco.org/index.php?page=viewproblem2&cpid=735

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    // freopen("lostcow.in", "r", stdin);
    // freopen("lostcow.out", "w", stdout);

    // int x, y;
    // cin >> x >> y;

    // int DistanceTravelled=0;
    // int step = 1;

    vector<int> yes = {0,1,2,3,4,5,6,7,8,9};
    cout << "inital: " << yes.size() << endl;

    yes.push_back(10);

    cout << "after pushback: " << yes.size() << endl;

    for(int i = 0; i < 10; i++) {
        cout << yes[i] << endl;
    }

    cout << "after for loop: " << yes.size();
    // if (x == y) {
    //     cout << DistanceTravelled >> endl;
    //     return 0;
    // }

    // else if (x < y) {
    //     while (x < y) {
    //         yes.push_back(x+step);
    //         step*=-2;
    //     }
    // }
     
    // else {
    //     while (x > y) {
    //         yes.push_back(x+step);
    //         step*=-2;
    //     }
    // }

    // return 0;
}