#include <iostream>
#include <vector>
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
        { // linear probing
            index = (originalIndex + i) % size;
            i++;
        }
        table[index] = key;
        probesForSuccessfulInsertions += i;
    }

    int search(int key, int hash)
    {
        int index = hash % size;
        int originalIndex = index;
        int i = 1;
        while (table[index] != key)
        {
            if (table[index] == -1)
                return i; // unsuccessful search
            index = (originalIndex + i) % size;
            i++;
        }
        return i; // successful search
    }

    void printTable()
    {
        for (int i = 0; i < size; ++i)
        {
            cout << "Cell " << i << ": " << (table[i] == -1 ? "empty" : to_string(table[i])) << "\n";
        }
    }

    float averageProbesForSuccessfulSearch()
    {
        return static_cast<float>(probesForSuccessfulInsertions) / totalInsertions;
    }

    float averageProbesForUnsuccessfulSearch()
    {
        float totalProbes = 0;
        for (int i = 0; i < size; ++i)
        {
            if (table[i] == -1)
            {
                int probes = 1;
                while (probes <= size && table[(i + probes) % size] != -1)
                {
                    probes++;
                }
                totalProbes += probes;
            }
        }
        return totalProbes / (size - totalInsertions);
    }

private:
    vector<int> table;
    int size;
    int totalInsertions = 7;
    int probesForSuccessfulInsertions = 0;
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

    cout << "\nAverage probes for successful search: " << hashTable.averageProbesForSuccessfulSearch() << "\n";
    cout << "Average probes for unsuccessful search: " << hashTable.averageProbesForUnsuccessfulSearch() << "\n";

    return 0;
}
