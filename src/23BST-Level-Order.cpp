#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <queue>
#include <string>

using namespace std;
class Node {
   public:
    int data;
    Node *left, *right;
    Node(int d) {
        data = d;
        left = right = NULL;
    }
};
class Solution {
   public:
    Node* insert(Node* root, int data) {
        if (root == NULL) {
            return new Node(data);
        } else {
            Node* cur;
            if (data <= root->data) {
                cur = insert(root->left, data);
                root->left = cur;
            } else {
                cur = insert(root->right, data);
                root->right = cur;
            }
            return root;
        }
    }
    //Write your code here
    void levelOrder(Node* root) {
        if (!root)
            return;
        std::queue<Node*> queue;
        queue.push(root);
        while (queue.size() > 0) {
            std::cout << queue.front()->data << " ";
            if (queue.front()->left)
                queue.push(queue.front()->left);
            if (queue.front()->right)
                queue.push(queue.front()->right);
            queue.pop();
        }
    }

};  //End of Solution
int main() {
    Solution myTree;
    Node* root = NULL;
    int T, data;
    cin >> T;
    while (T-- > 0) {
        cin >> data;
        root = myTree.insert(root, data);
    }
    myTree.levelOrder(root);
    return 0;
}