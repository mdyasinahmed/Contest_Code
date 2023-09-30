#include <iostream>

using namespace std;

// Function to calculate the day of the week (0 = Sunday, 1 = Monday, ..., 6 = Saturday)
int dayOfWeek(int year, int month, int day) {
    if (month < 3) {
        month += 12;
        year--;
    }
    int K = year % 100;
    int J = year / 100;
    int result = (day + 13 * (month + 1) / 5 + K + K / 4 + J / 4 - 2 * J) % 7;
    return (result + 7) % 7;  // Ensure the result is positive
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int D, M;
        cin >> D >> M;

        int count = 0;
        int currentDay = 0;  // Start with Sunday (0)

        for (int i = 0; i < M; i++) {
            int daysInMonth;
            cin >> daysInMonth;

            if (i == 0 && D % 7 >= 6) {
                // If the first day of the year is Sunday or Monday, and January has 31 days, there will be at least one Friday the 13th.
                count++;
            }

            if (i == 0 && D % 7 - daysInMonth >= 5) {
                // If the first day of the year is Saturday and January has 30 days, there will be at least one Friday the 13th.
                count++;
            }

            currentDay = (currentDay + daysInMonth) % 7;
        }

        // Check if February has 29 days (leap year) and it starts on Friday.
        if (M >= 2 && D % 7 == 4 && currentDay == 4) {
            count++;
        }

        cout << count << endl;
    }

    return 0;
}
