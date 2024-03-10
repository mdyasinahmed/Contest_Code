#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x;
    int y;
};

bool comparePoints(const Point& a, const Point& b) {
    if (a.x == b.x) {
        return a.y < b.y;
    }
    return a.x < b.x;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<Point> points(n);
        for (int i = 0; i < n; i++) {
            cin >> points[i].x >> points[i].y;
        }

        // Sorting the points
        sort(points.begin(), points.end(), comparePoints);

        // Printing the sorted points
        for (const auto& point : points) {
            cout << point.x << " " << point.y << "\n";
        }
    }

    return 0;
}
