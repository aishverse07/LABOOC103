#include <iostream>
#include <iomanip> // For formatting output with leading zeros (setw, setfill)

using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

    // Helper method to fix second/minute overflows (e.g., 65 seconds -> 1 min 5 secs)
    void normalize() {
        minutes += seconds / 60;
        seconds %= 60;

        hours += minutes / 60;
        minutes %= 60;
    }

public:
    // Constructor
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {
        normalize();
    }

    // Method to accept inputs
    void accept() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
        normalize();
    }

    // Method to add two times
    Time add(const Time &t) {
        int totalH = hours + t.hours;
        int totalM = minutes + t.minutes;
        int totalS = seconds + t.seconds;
        return Time(totalH, totalM, totalS);
    }

    // Method to display time in HH:MM:SS format
    void display() const {
        // setfill('0') and setw(2) ensure numbers under 10 show up as '05' instead of '5'
        cout << setfill('0') << setw(2) << hours << ":"
             << setfill('0') << setw(2) << minutes << ":"
             << setfill('0') << setw(2) << seconds << endl;
    }
};

int main() {
    Time t1, t2;

    cout << "--- Enter First Time Value ---\n";
    t1.accept();

    cout << "\n--- Enter Second Time Value ---\n";
    t2.accept();

    Time resultTime = t1.add(t2);

    cout << "\n--- Results ---\n";
    cout << "Time 1: "; t1.display();
    cout << "Time 2: "; t2.display();
    cout << "Total Summed Time: "; resultTime.display();

    return 0;
}
