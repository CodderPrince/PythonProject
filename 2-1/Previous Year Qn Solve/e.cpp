#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>
using namespace std;

// Node structure for Huffman Tree
struct Node
{
    char data;
    int freq;
    Node *left;
    Node *right;

    Node(char data, int freq)
    {
        left = right = nullptr;
        this->data = data;
        this->freq = freq;
    }
};

// Compare structure for the priority queue
struct compare
{
    bool operator()(Node *l, Node *r)
    {
        return (l->freq > r->freq);
    }
};

// Function to print Huffman codes from the root of Huffman Tree
void printCodes(struct Node *root, string str, unordered_map<char, string> &huffmanCode)
{
    if (!root)
        return;

    if (root->data != '#') // '#' is used for internal nodes
        huffmanCode[root->data] = str;

    printCodes(root->left, str + "0", huffmanCode);
    printCodes(root->right, str + "1", huffmanCode);
}

// Main function to build the Huffman Tree and generate codes
void HuffmanCodes(vector<char> &data, vector<int> &freq)
{
    struct Node *left, *right, *top;
    priority_queue<Node *, vector<Node *>, compare> minHeap;

    for (size_t i = 0; i < data.size(); ++i)
        minHeap.push(new Node(data[i], freq[i]));

    while (minHeap.size() != 1)
    {
        left = minHeap.top();
        minHeap.pop();

        right = minHeap.top();
        minHeap.pop();

        top = new Node('#', left->freq + right->freq);
        top->left = left;
        top->right = right;

        minHeap.push(top);
    }

    unordered_map<char, string> huffmanCode;
    printCodes(minHeap.top(), "", huffmanCode);

    cout << "Huffman Codes:\n";
    for (auto pair : huffmanCode)
        cout << pair.first << ": " << pair.second << "\n";

    // Calculate original and new storage sizes
    int originalSize = 0, newSize = 0;
    for (size_t i = 0; i < data.size(); ++i)
    {
        originalSize += freq[i] * 4; // 4 bits for fixed-length code (log2(9) = ~4)
        newSize += freq[i] * huffmanCode[data[i]].size();
    }

    cout << "\nOriginal size: " << originalSize << " bits\n";
    cout << "New size: " << newSize << " bits\n";
    cout << "\nStorage savings: " << (originalSize - newSize) * 100.0 / originalSize << "%\n\n\n";
}

int main()
{
    vector<char> data = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'};
    vector<int> freq = {22, 5, 5, 14, 18, 35, 16, 16, 20}; // in thousands

    HuffmanCodes(data, freq);

    return 0;
}
