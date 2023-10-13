#include<bits/stdc++.h>
using namespace std;


int main() {
    int B;
    cin >> B;

    int overs = B/6;
    int RB = B%6;

    double OverFormat = overs + static_cast<double>(RB)/10;

    printf("%.1f", OverFormat);

}