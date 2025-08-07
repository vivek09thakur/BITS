// BITS ID : 202419TW021
// @author : VIVEK KUMAR
#include <iostream>
#include <vector>
using namespace std;

class Stack {
    vector<int> v;
public:
    void push(int x) {
        v.push_back(x);
        cout << "Pushed: " << x << '\n';
    }

    void pop() {
        if (v.empty()) {
            cout << "Stack is empty. Cannot pop.\n";
            return;
        }
        cout << "Popped: " << v.back() << '\n';
        v.pop_back();
    }

    void display() {
        if (v.empty()) {
            cout << "Stack is empty.\n";
            return;
        }
        cout << "Stack Elements Are ";
        for (auto it = v.rbegin(); it != v.rend(); ++it)
            cout << *it << ' ';
        cout << '\n';
    }
};

int main() {
    Stack s;
    int n;
    cout << "Enter Size of stack (number of operations): ";
    cin >> n;
    if (cin.fail() || n <= 0) return 1;

    cout << "Enter The Elements (10 = pop, other = push):\n";
    while (n--) {
        int x;
        cin >> x;
        if (cin.fail()) {
            cin.clear(); cin.ignore(1000, '\n'); n++;
            continue;
        }
        x == 10 ? s.pop() : s.push(x);
    }

    cout << "--- Final Stack State ---\n";
    s.display();
}
