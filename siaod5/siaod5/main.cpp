#include <iostream>
using namespace std;
struct Node {
    char data;
    Node* left;
    Node* right;
    int height;
    Node(char val) : data(val), left(nullptr), right(nullptr), height(1) {}
};
class AVLTree {
private:
    Node* root;
    int getHeight(Node* node) {
        return (node == nullptr) ? 0 : node->height;
    }
    int getBalanceFactor(Node* node) {
        return (node == nullptr) ? 0 : getHeight(node->left) - getHeight(node->right);
    }
    void updateHeight(Node* node) {
        int leftHeight = getHeight(node->left);
        int rightHeight = getHeight(node->right);
        node->height = max(leftHeight, rightHeight) + 1;
    }
    Node* rotateRight(Node* y) {
        Node* x = y->left;
        Node* T2 = x->right;
        x->right = y;
        y->left = T2;
        updateHeight(y);
        updateHeight(x);
        return x;
    }
    Node* rotateLeft(Node* x) {
        Node* y = x->right;
        Node* T2 = y->left;
        y->left = x;
        x->right = T2;
        updateHeight(x);
        updateHeight(y);
        return y;
    }
    Node* insert(Node* node, char val) {
        if (node == nullptr)
            return new Node(val);
        if (val < node->data)
            node->left = insert(node->left, val);
        else if (val > node->data)
            node->right = insert(node->right, val);
        else
            return node;
        updateHeight(node);
        int balance = getBalanceFactor(node);
        if (balance > 1 && val < node->left->data)
            return rotateRight(node);
        if (balance < -1 && val > node->right->data)
            return rotateLeft(node);
        if (balance > 1 && val > node->left->data) {
            node->left = rotateLeft(node->left);
            return rotateRight(node);
        }
        if (balance < -1 && val < node->right->data) {
            node->right = rotateRight(node->right);
            return rotateLeft(node);
        }
        return node;
    }
    void inorder(Node* node) {
        if (node == nullptr)
            return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }
    void postorder(Node* node) {
        if (node == nullptr)
            return;
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }
    int sumLeaves(Node* node) {
        if (node == nullptr)
            return 0;
        if (node->left == nullptr && node->right == nullptr)
            return node->data - '0';
        return sumLeaves(node->left) + sumLeaves(node->right);
    }
    int getHeight() {
        return getHeight(root);
    }
public:
    AVLTree() : root(nullptr) {}
    void insert(char val) {
        root = insert(root, val);
    }
    void printInorder() {
        inorder(root);
        cout << endl;
    }
    void printPostorder() {
        postorder(root);
        cout << endl;
    }
    int findSumLeaves() {
        return sumLeaves(root);
    }
    int findHeight() {
        return getHeight();
    }
};
int main() {
    AVLTree tree;
    char value;
    int n = 10;
    cout << "Введите " << n << " символов для создания дерева:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        tree.insert(value);
    }
    cout << "Симметричный обход дерева: ";
    tree.printInorder();
    cout << "Обратный обход дерева: ";
    tree.printPostorder();
    cout << "Сумма значений листьев: " << tree.findSumLeaves() << endl;
    cout << "Высота дерева: " << tree.findHeight() << endl;
    return 0;
}
