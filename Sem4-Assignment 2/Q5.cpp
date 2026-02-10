#include <iostream>
#include <queue>
using namespace std;

struct Node {
    char ch;
    int freq;
    Node* left;
    Node* right;
};

Node* createNode(char c, int f) {
    Node* n = new Node();
    n->ch = c;
    n->freq = f;
    n->left = NULL;
    n->right = NULL;
    return n;
}

struct Compare {
    bool operator()(Node* a, Node* b) {
        return a->freq > b->freq;
    }
};

void printHuffman(Node* root, string s) {
    if (root == NULL)
        return;

    if (root->ch != '#')
        cout << root->ch << " " << s << endl;

    printHuffman(root->left, s + "0");
    printHuffman(root->right, s + "1");
}

int main() {

    char ch[] = {'a','b','c','d','e','f'};
    int freq[] = {5, 9, 12, 13, 16, 45};
    int n = 6;

    priority_queue<Node*, vector<Node*>, Compare> pq;

    for (int i = 0; i < n; i++) {
        pq.push(createNode(ch[i], freq[i]));
    }

    while (pq.size() > 1) {
        Node* left = pq.top(); pq.pop();
        Node* right = pq.top(); pq.pop();

        Node* parent = createNode('#', left->freq + right->freq);
        parent->left = left;
        parent->right = right;

        pq.push(parent);
    }

    cout << "Character Huffman Code\n";
    printHuffman(pq.top(), "");

    return 0;
}
