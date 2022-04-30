#include <iostream>
#include <algorithm>
using namespace std;

int capacity[3], milk[3];

void pour(int i, int j) {
    int changeamt=min(milk[i], capacity[j]-milk[j]);
    milk[j]+=changeamt; 
    milk[i]-=changeamt;
}

int main() {
    std::ios::sync_with_stdio(false);
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    for (int i = 0;i < 3; i++) {
        cin >> capacity[i] >> milk[i];
    }

    for (int i = 0;i < 100; i++) {
        pour(i%3, (i+1)%3);
    }

    cout << milk[0] << endl << milk[1] << endl << milk[2];
    return 0;
}