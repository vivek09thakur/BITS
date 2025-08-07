// BITS ID : 202419TW021
// @author : VIVEK KUMAR
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};

class List {
public:
    Node* head = nullptr, *tail = nullptr;

    void add(int val) {
        Node* n = new Node(val);
        if (!head) head = tail = n;
        else tail = tail->next = n;
    }

    void concat(List& other) {
        if (!other.head) return;
        if (!head) head = other.head;
        else tail->next = other.head;
        tail = other.tail;
    }

    void showSum() {
        if (!head) {
            cout << "The list is empty.\nTotal Score of both teams: 0\n";
            return;
        }
        int sum = 0;
        cout << "The scores of team -A & team-B\n";
        for (Node* cur = head; cur; cur = cur->next) {
            cout << cur->data;
            sum += cur->data;
            cout << (cur->next ? "-" : "-NULL\n");
        }
        cout << "Total Score of both teams " << sum << '\n';
    }
};

int input(string msg) {
    int x;
    while (cout << msg, !(cin >> x) || x < 0) {
        cin.clear(); cin.ignore(1000, '\n');
        cout << "Invalid input.\n";
    }
    return x;
}

int main() {
    List a, b;
    int n = input("Enter Hockey Team-A Size: ");
    cout << "Enter Scores Of Team-A\n";
    while (n--) a.add(input("Score: "));
    

    n = input("Enter Hockey Team-B Size: ");
    cout << "Enter Scores Of Team-B\n";
    while (n--) b.add(input("Score: "));

    a.concat(b);
    a.showSum();
    return 0;
}
