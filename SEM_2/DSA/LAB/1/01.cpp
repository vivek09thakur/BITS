// BITS ID : 202419TW021
// @author : VIVEK KUMAR
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int numSlots;
    cout << "Enter No of Slots: ";
    cin >> numSlots;

    if (cin.fail() || numSlots <= 0) return 1;

    vector<int> slots(numSlots, -1);
    vector<pair<int, int>> ballToSlotMap;

    for (int i = 0; i < numSlots; i++) {
        string input;
        cout << "Enter 6-digit color code of ball to be inserted (or type STOP to end): ";
        cin >> input;

        if (input == "STOP") break;
        if (input.length() != 6 || input.find_first_not_of("0123456789") != string::npos) {
            i--;
            continue;
        }

        int colorCode = stoi(input);
        int index = colorCode % numSlots;
        bool placed = false;

        for (int j = 0; j < numSlots; j++) {
            if (slots[index] == -1) {
                slots[index] = colorCode;
                ballToSlotMap.emplace_back(colorCode, index);
                placed = true;
                break;
            }
            index = (index + 1) % numSlots;
        }

        if (!placed) break;
    }

    cout << "\n--- Ball Placement Results ---" << endl;
    if (ballToSlotMap.empty()) {
        cout << "No balls were inserted." << endl;
    } else {
        for (auto& item : ballToSlotMap) {
            cout << "Ball " << item.first << " colour code is at " << item.second << " slot" << endl;
        }
    }

    cout << "Final Slot Configuration: [";
    for (size_t i = 0; i < slots.size(); i++) {
        if (i > 0) cout << ", ";
        if (slots[i] == -1)
            cout << "null";
        else
            cout << slots[i];
    }
    cout << "]" << endl;

    return 0;
}
