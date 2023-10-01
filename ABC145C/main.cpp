#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>
#include <math.h>
#include <iomanip>
using namespace std;

int main(int, char**) {
    int n;
    cin >> n;
    vector<int> A;
    for (int i = 0; i < n; i++) {
        A.push_back(i);
    }
    vector<pair<double, double>> XY(n);
    for (int i = 0; i < n; i++) {
        cin >> XY[i].first >> XY[i].second;
    }
    int count = 0;
    double ave = 0;
    do {
        count++;
        for (int i = 0; i < n - 1; i++) {
            double xx = (XY[A[i]].first - XY[A[i + 1]].first) * (XY[A[i]].first - XY[A[i + 1]].first);
            double yy = (XY[A[i]].second - XY[A[i + 1]].second) * (XY[A[i]].second - XY[A[i + 1]].second);
            ave += sqrt(xx + yy);
        }
    } while (next_permutation(A.begin(), A.end()));
    cout << fixed <<setprecision(15)<<(double)ave / count << endl;
    return 0;
}