#include <iostream>
#include <algorithm>

using namespace std;
#ifndef MOTOROLA_CHAT_H
#define MOTOROLA_CHAT_H


class Chat {
private:
    bool is_digits(string &str) {
        return all_of(str.begin(), str.end(), ::isdigit);
    }

public:
    int getFenceLength() {
        cout << "Type RUN to start program" << endl;
        string run;
        cin >> run;

        if (run == "RUN") {
            string input;
            cout << "How many meters of fence is available? \n"
                    "(Only integer values.)" << endl;
            cin >> input;
            while (!is_digits(input)) {
                cout << "Please enter positive integer value." << endl;
                cin.clear();
                cin >> input;
            }
            try {
                int fence_length = stoi(input);

                if (fence_length < 3) {
                    cout << "Not enough fence." << endl;
                    return -1;
                }
                return fence_length;
            } catch (out_of_range &e) {
                cout << "Too much fence.";
            }

        } else cout << "It's not a correct command to start the program" << endl;

        return -1;
    }

    void displayResults(int a, int b, long long area) {
        cout << "a: " << a << " m" << endl;
        cout << "b: " << b << " m" << endl;
        cout << "The optimal area of McDonald's farm: " << area << " m^2" << endl;
    }

};


#endif
