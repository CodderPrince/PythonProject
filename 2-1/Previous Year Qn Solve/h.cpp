#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class HashTable
{
public:
    HashTable(int size) : table(size, -1), size(size) {}

    void insert(int key, int hash)
    {
        int index = hash % size;
        int originalIndex = index;
        int i = 1;
        while (table[index] != -1)
        { // quadratic probing
            index = (originalIndex + i * i) % size;
            i++;
        }
        table[index] = key;
    }

    int search(int key, int hash)
    {
        int index = hash % size;
        int originalIndex = index;
        int i = 1;
        while (table[index] != key)
        {
            if (table[index] == -1)
                return -1; // key not found
            index = (originalIndex + i * i) % size;
            i++;
        }
        return index; // key found
    }

    void printTable()
    {
        for (int i = 0; i < size; ++i)
        {
            cout << "Cell " << i << ": " << (table[i] == -1 ? "empty" : to_string(table[i])) << "\n";
        }
    }

private:
    vector<int> table;
    int size;
};

int main()
{
    vector<char> records = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    vector<int> hashes = {4, 9, 3, 4, 11, 5, 3}; // given H(K)
    int size = 11;
    HashTable hashTable(size);

    cout << "Inserting records:\n";
    for (size_t i = 0; i < records.size(); ++i)
    {
        hashTable.insert(records[i], hashes[i]);
    }

    cout << "\nHash Table:\n";
    hashTable.printTable();

    return 0;
}
