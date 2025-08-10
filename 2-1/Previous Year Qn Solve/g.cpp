#include <iostream>
#include <vector>

using namespace std;

const int TABLE_SIZE = 11;

// Hash function
int hashFunction(char key) {
    return (int(key) - 'A') % TABLE_SIZE;
}

// Insert a record into the hash table
void insert(vector<char>& table, char record) {
    int index = hashFunction(record);
    while (table[index] != '\0') {
        index = (index + 1) % TABLE_SIZE;
    }
    table[index] = record;
}

// Search for a record in the hash table
bool search(vector<char>& table, char record) {
    int index = hashFunction(record);
    int originalIndex = index;
    int probes = 0;
    while (table[index] != '\0') {
        if (table[index] == record) {
            return true;
        }
        index = (index + 1) % TABLE_SIZE;
        probes++;
        if (index == originalIndex) {
            break;
        }
    }
    return false;
}

int main() {
    vector<char> hashTable(TABLE_SIZE, '\0');
    vector<char> records = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};

    // Insert the records into the hash table
    for (char record : records) {
        insert(hashTable, record);
    }

    // Print the hash table
    for (int i = 0; i < TABLE_SIZE; i++) {
        cout << i << ": " << hashTable[i] << endl;
    }

    // Test successful and unsuccessful searches
    char successfulSearch = 'A';
    char unsuccessfulSearch = 'Z';

    cout << "Successful search:" << endl;
    if (search(hashTable, successfulSearch)) {
        cout << "Found " << successfulSearch << " after " << search(hashTable, successfulSearch) << " probes." << endl;
    } else {
        cout << successfulSearch << " not found." << endl;
    }

    cout << "Unsuccessful search:" << endl;
    if (search(hashTable, unsuccessfulSearch)) {
        cout << "Found " << unsuccessfulSearch << " after " << search(hashTable, unsuccessfulSearch) << " probes." << endl;
    } else {
        cout << unsuccessfulSearch << " not found." << endl;
    }

    return 0;
}