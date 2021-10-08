#include <cstddef>
#include <iostream>
using namespace std;
class Node {
   public:
    int data;
    Node *next;
    Node(int d) {
        data = d;
        next = NULL;
    }
};

class Solution {
   public:
    // Method for user to complete (aka me)
    Node *insert(Node *head, int data) {
        Node *n = new Node(data);
        Node *t = head;
        if (!head) 
            return n;
        while(true) {
            if (!t->next)
                break;
            t = t->next;
        }
        t->next = n;
        return head;
    }

    void display(Node *head) {
        Node *start = head;
        while (start) {
            cout << start->data << " ";
            start = start->next;
        }
    }
};

int main() {
    Node *head = NULL;
    Solution mylist;
    int T, data;
    cin >> T;
    while (T-- > 0) {
        cin >> data;
        head = mylist.insert(head, data);
    }
    mylist.display(head);
}