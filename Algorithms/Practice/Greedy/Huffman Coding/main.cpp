#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

struct Node
{
    char character;
    int frequency;
    Node* left;
    Node* right;

    Node(char ch, int freq)
    {
        character = ch;
        frequency = freq;
        left = nullptr;
        right = nullptr;
    }
};

struct Compare
{
    bool operator()(Node* a, Node* b)
    {
        return a->frequency > b->frequency;
    }
};

Node* Huffman(vector<Node*>& nodes)
{
    int n = nodes.size();
    priority_queue<Node*, vector<Node*>, Compare> Q;

    // Initialize Q with the input set C
    for (Node* node : nodes)
    {
        Q.push(node);
    }

    // for i = 1 to n-1
    for (int i = 1; i <= n - 1; i++) {
        // Allocate a new node z
        Node* z = new Node('$', 0);

        // x = EXTRACT-MIN(Q)
        Node* x = Q.top();
        Q.pop();

        // y = EXTRACT-MIN(Q)
        Node* y = Q.top();
        Q.pop();

        // z.left = x
        z->left = x;

        // z.right = y
        z->right = y;

        // z.freq = x.freq + y.freq
        z->frequency = x->frequency + y->frequency;

        // INSERT(Q, z)
        Q.push(z);
    }

    // return EXTRACT-MIN(Q)
    return Q.top();
}

void printHuffmanTree(Node* root, string indent = "")
{
    if (root == nullptr) return;

    cout << indent;

    if (root->character != '$') cout << "Leaf (Character: '" << root->character << "', Frequency: " << root->frequency << ")\n";
    else cout << "Internal Node (Frequency: " << root->frequency << ")\n";

    printHuffmanTree(root->left, indent + "  ");
    printHuffmanTree(root->right, indent + "  ");
}

int calculateHuffmanSize(Node* root, int depth = 0)
{
    if (root == nullptr) return 0;
    
    if (root->character != '$') return root->frequency * depth;
    
    return calculateHuffmanSize(root->left, depth + 1) + calculateHuffmanSize(root->right, depth + 1);
}

int main()
{
    // Example input: list of characters and frequencies
    vector<Node*> characters = {
        new Node('a', 5),
        new Node('b', 9),
        new Node('c', 12),
        new Node('d', 13),
        new Node('e', 16),
        new Node('f', 45)
    };

    int totalChars = 0;
    for (const auto& node : characters) totalChars += node->frequency;
    int normalSize = totalChars * 8; // 8 bits per character
    
    // Build Huffman tree
    Node* root = Huffman(characters);
    
    // Print tree structure
    cout << "Huffman Tree Structure:\n";
    printHuffmanTree(root);
    
    int huffmanSize = calculateHuffmanSize(root);
    
    cout << "\nFile Size Comparison:\n";
    cout << "Normal encoding size: " << normalSize << " bits (" << normalSize / 8 << " bytes)\n";
    cout << "Huffman encoding size: " << huffmanSize << " bits (" << huffmanSize / 8.0 << " bytes)\n";

    return 0;
}