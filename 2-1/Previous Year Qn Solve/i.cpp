#include <iostream>
#include <vector>
using namespace std;

class HashTable
{
public:
    HashTable(int size) : table(size, -1), size(size) {}

    void insert(char record, int hash)
    {
        int index = hash % size;
        int originalIndex = index;
        int i = 0;
        while (table[index] != -1)
        { // Linear probing
            index = (originalIndex + i) % size;
            i++;
        }
        table[index] = record;
        probesForSuccessfulInsertions += (i + 1); // Count probes for successful insertion
        totalInsertions++;
    }

    int search(char record, int hash)
    {
        int index = hash % size;
        int originalIndex = index;
        int i = 0;
        while (table[index] != record)
        {
            if (table[index] == -1)
            {
                probesForUnsuccessfulSearches += (i + 1); // Count probes for unsuccessful search
                totalUnsuccessfulSearches++;
                return -1; // Unsuccessful search
            }
            index = (originalIndex + i) % size;
            i++;
        }
        probesForSuccessfulSearches += (i + 1); // Count probes for successful search
        totalSuccessfulSearches++;
        return index; // Successful search
    }

    void printTable()
    {
        for (int i = 0; i < size; ++i)
        {
            cout << "Cell " << i << ": " << (table[i] == -1 ? "empty" : string(1, table[i])) << "\n";
        }
    }

    float averageProbesForSuccessfulSearch()
    {
        if (totalSuccessfulSearches == 0)
            return 0;
        return static_cast<float>(probesForSuccessfulSearches) / totalSuccessfulSearches;
    }

    float averageProbesForUnsuccessfulSearch()
    {
        if (totalUnsuccessfulSearches == 0)
            return 0;
        return static_cast<float>(probesForUnsuccessfulSearches) / totalUnsuccessfulSearches;
    }

private:
    vector<int> table;
    int size;
    int probesForSuccessfulInsertions = 0;
    int probesForSuccessfulSearches = 0;
    int probesForUnsuccessfulSearches = 0;
    int totalInsertions = 0;
    int totalSuccessfulSearches = 0;
    int totalUnsuccessfulSearches = 0;
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

    // Performing searches to demonstrate and gather statistics
    for (size_t i = 0; i < records.size(); ++i)
    {
        hashTable.search(records[i], hashes[i]);
    }

    // Performing some unsuccessful searches
    hashTable.search('X', 4);
    hashTable.search('Y', 2);

    cout << "\nAverage probes for successful search: " << hashTable.averageProbesForSuccessfulSearch() << "\n";
    cout << "Average probes for unsuccessful search: " << hashTable.averageProbesForUnsuccessfulSearch() << "\n";

    return 0;
}
