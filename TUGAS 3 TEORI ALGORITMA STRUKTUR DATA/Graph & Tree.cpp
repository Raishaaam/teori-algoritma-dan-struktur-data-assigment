#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <queue>

using namespace std;

struct Node {
    string data;
    Node* left;
    Node* right;
};

class Tree {
private:
    Node* root;

    void preOrderTraversal(Node* node) {
        if (node == nullptr) return;
        cout << node->data << " ";
        preOrderTraversal(node->left);
        preOrderTraversal(node->right);
    }

    void inOrderTraversal(Node* node) {
        if (node == nullptr) return;
        inOrderTraversal(node->left);
        cout << node->data << " ";
        inOrderTraversal(node->right);
    }

    void postOrderTraversal(Node* node) {
        if (node == nullptr) return;
        postOrderTraversal(node->left);
        postOrderTraversal(node->right);
        cout << node->data << " ";
    }

    Node* findNode(Node* node, const string& value) {
        if (node == nullptr) return nullptr;
        if (node->data == value) return node;
        Node* foundNode = findNode(node->left, value);
        if (foundNode == nullptr) {
            foundNode = findNode(node->right, value);
        }
        return foundNode;
    }

    void printChildren(Node* node) {
        if (node->left) {
            cout << "Left child: " << node->left->data << endl;
        } else {
            cout << "Left child: None" << endl;
        }
        if (node->right) {
            cout << "Right child: " << node->right->data << endl;
        } else {
            cout << "Right child: None" << endl;
        }
    }

    void printDescendants(Node* node) {
        if (node == nullptr) return;
        queue<Node*> q;
        q.push(node);
        bool hasDescendants = false;
        cout << "Descendants of " << node->data << ": ";
        while (!q.empty()) {
            Node* current = q.front();
            q.pop();
            if (current != node) {
                cout << current->data << " ";
                hasDescendants = true;
            }
            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }
        if (!hasDescendants) {
            cout << "None";
        }
        cout << endl;
    }

    void deleteSubtree(Node* node) {
        if (node == nullptr) return;
        deleteSubtree(node->left);
        deleteSubtree(node->right);
        delete node;
    }

public:
    int Raisha_2311110002;
    Tree() : root(nullptr) {}

    void insertRoot(const string& value) {
        if (root == nullptr) {
            root = new Node{value, nullptr, nullptr};
            cout << "Root node " << value << " berhasil ditambahkan." << endl;
        } else {
            cout << "Root Tersedia." << endl;
        }
    }

    void insertChild(const string& parent, const string& leftChild, const string& rightChild) {
        Node* parentNode = findNode(root, parent);
        if (parentNode == nullptr) {
            cout << "Parent node tidak tersedia." << endl;
            return;
        }
        if (leftChild != "None") {
            if (parentNode->left == nullptr) {
                parentNode->left = new Node{leftChild, nullptr, nullptr};
            } else {
                cout << "Left child tersedia untuk " << parent << endl;
            }
        }
        if (rightChild != "None") {
            if (parentNode->right == nullptr) {
                parentNode->right = new Node{rightChild, nullptr, nullptr};
            } else {
                cout << "Right child tersedia untuk " << parent << endl;
            }
        }
    }

    void updateNode(const string& oldValue, const string& newValue) {
        Node* node = findNode(root, oldValue);
        if (node != nullptr) {
            node->data = newValue;
            cout << "Node " << oldValue << " ditambahkan ke " << newValue << "." << endl;
        } else {
            cout << "Node tidak tersedia." << endl;
        }
    }

    void findAndPrintNode(const string& value) {
        Node* node = findNode(root, value);
        if (node != nullptr) {
            cout << "Node ditemukan: " << node->data << endl;
            printChildren(node);
        } else {
            cout << "Node tidak ditemukan." << endl;
        }
    }

    void preOrderTraversal() {
        cout << "PreOrder Traversal: ";
        preOrderTraversal(root);
        cout << endl;
    }

    void inOrderTraversal() {
        cout << "InOrder Traversal: ";
        inOrderTraversal(root);
        cout << endl;
    }

    void postOrderTraversal() {
        cout << "PostOrder Traversal: ";
        postOrderTraversal(root);
        cout << endl;
    }

    void printChildren(const string& value) {
        Node* node = findNode(root, value);
        if (node != nullptr) {
            printChildren(node);
        } else {
            cout << "Node tidak tersedia." << endl;
        }
    }

    void printDescendants(const string& value) {
        Node* node = findNode(root, value);
        if (node != nullptr) {
            printDescendants(node);
        } else {
            cout << "Node tidak tersedia." << endl;
        }
    }

    void deleteTree() {
        deleteSubtree(root);
        root = nullptr;
        cout << "Tree dihapus." << endl;
    }

    void deleteSubtree(const string& value) {
        Node* node = findNode(root, value);
        if (node != nullptr) {
            deleteSubtree(node);
            cout << "Subtree mulai dari node " << value << " dihapus." << endl;
        } else {
            cout << "Node tidak tersedia." << endl;
        }
    }
};

int main() {
    Tree tree;
    int pilihan;

    do {
        cout << "\nMenu:\n";
        cout << "1. Data untuk root node\n";
        cout << "2. Tambah child kanan dan child kiri\n";
        cout << "3. Update node\n";
        cout << "4. Find node\n";
        cout << "5. PreOrder Traversal\n";
        cout << "6. InOrder Traversal\n";
        cout << "7. PostOrder Traversal\n";
        cout << "8. Print Child\n";
        cout << "9. Print Descendants\n";
        cout << "10. Hapus Tree\n";
        cout << "11. Hapus Subtree\n";
        cout << "12. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        string value, leftChild, rightChild;
        switch (pilihan) {
            case 1:
                cout << "Masukkan data untuk root node: ";
                cin >> value;
                tree.insertRoot(value);
                break;
            case 2:
                cout << "Masukkan nama parent node: ";
                cin >> value;
                cout << "Masukkan nama left child: ";
                cin >> leftChild;
                cout << "Masukkan nama right child: ";
                cin >> rightChild;
                tree.insertChild(value, leftChild, rightChild);
                break;
            case 3:
                cout << "Masukkan nama node yang akan diupdate: ";
                cin >> value;
                cout << "Masukkan nama baru untuk node: ";
                cin >> leftChild; // reuse variable for new value
                tree.updateNode(value, leftChild);
                break;
            case 4:
                cout << "Masukkan nama node yang dicari: ";
                cin >> value;
                tree.findAndPrintNode(value);
                break;
            case 5:
                tree.preOrderTraversal();
                break;
            case 6:
                tree.inOrderTraversal();
                break;
            case 7:
                tree.postOrderTraversal();
                break;
            case 8:
                cout << "Masukkan node yang ingin dicetak child-nya: ";
                cin >> value;
                tree.printChildren(value);
                break;
            case 9:
                cout << "Masukkan nama node yang ingin dicetak descendants-nya: ";
                cin >> value;
                tree.printDescendants(value);
                break;
            case 10:
                tree.deleteTree();
                break;
            case 11:
                cout << "Masukkan nama node yang ingin dihapus subtree-nya: ";
                cin >> value;
                tree.deleteSubtree(value);
                break;
            case 12:
                cout << "Keluar" << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                break;
        }
    } while (pilihan != 12);

    return 0;
}