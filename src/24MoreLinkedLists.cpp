#include <algorithm>
#include <cmath>
#include <cstddef>
#include <cstdio>
#include <iostream>
#include <vector>
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
    //Write your code here
    Node *removeDuplicates(Node *head) {
        if (!head)
            return NULL;
        Node* prevNode = NULL;
        Node* curNode = head;
        std::vector<int> prevNums;
        while(curNode) {
            auto index = std::find(prevNums.begin(), prevNums.end(), curNode->data);
            if (index != prevNums.end()) {
                prevNode->next = curNode->next;
                delete curNode;
                curNode = prevNode->next;
            } else {
                prevNums.push_back(curNode->data);
                prevNode = curNode;
                curNode = curNode->next;
            }
        }
        return head;
    }

    Node *insert(Node *head, int data) {
        Node *p = new Node(data);
        if (head == NULL) {
            head = p;

        } else if (head->next == NULL) {
            head->next = p;

        } else {
            Node *start = head;
            while (start->next != NULL) {
                start = start->next;
            }
            start->next = p;
        }
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
    head = mylist.removeDuplicates(head);

    mylist.display(head);
}