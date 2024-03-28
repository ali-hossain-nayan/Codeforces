#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

string ClockConversion(string t24) {
    stringstream second(t24);
    int hour, minute;
    char colon;
    second >> hour >> colon >> minute;

    string period = "AM";
    if (hour >= 12) {
        period = "PM";
        if (hour > 12) {
            hour -= 12;
        }
    }
    if (hour == 0) {
        hour = 12;
    }

    stringstream result;
    result << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << " " << period;
    return result.str();
}

int main() {
    int test;
    cin >> test;

    while (test--) {
        string t24;
        cin >> t24;

        string t12 = ClockConversion(t24);
        cout << t12 << endl;
    }

    return 0;
}
