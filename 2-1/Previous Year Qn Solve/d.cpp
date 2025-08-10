#include <iostream>
using namespace std;

// Structure to represent a node in a two-way list.
struct node
{
    int data;
    node *prev;
    node *next;
};

// Structure to represent a two-way list.
struct two_way_list
{
    node *head;
    node *tail;
    int size;
};

// Function to create a new two-way list.
two_way_list *create_list()
{
    two_way_list *list = new two_way_list;
    list->head = nullptr;
    list->tail = nullptr;
    list->size = 0;
    return list;
}

// Function to add an element to the end of a two-way list.
void add_element(two_way_list *list, int data)
{
    node *new_node = new node;
    new_node->data = data;
    new_node->prev = list->tail;
    new_node->next = nullptr;

    if (list->head == nullptr)
    {
        list->head = new_node;
    }
    else
    {
        list->tail->next = new_node;
    }
    list->tail = new_node;
    list->size++;
}

// Function to delete the k-th element from a two-way list.
void delete_kth_element(two_way_list *list, int k)
{
    // Check if the list is empty or k is out of bounds.
    if (list == nullptr || k <= 0 || k > list->size)
    {
        return;
    }

    // Find the k-th element.
    node *current = list->head;
    for (int i = 1; i < k; ++i)
    {
        current = current->next;
    }

    // Remove the element from the list.
    if (current == list->head)
    {
        // Remove the head element.
        list->head = current->next;
        if (list->head != nullptr)
        {
            list->head->prev = nullptr;
        }
    }
    else if (current == list->tail)
    {
        // Remove the tail element.
        list->tail = current->prev;
        if (list->tail != nullptr)
        {
            list->tail->next = nullptr;
        }
    }
    else
    {
        // Remove an element in the middle of the list.
        current->prev->next = current->next;
        current->next->prev = current->prev;
    }

    // Decrement the list size.
    list->size--;

    // Free the memory of the deleted element.
    delete current;
}

// Function to print the elements of a two-way list.
void print_list(two_way_list *list)
{
    node *current = list->head;
    while (current != nullptr)
    {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main()
{
    // Create a two-way list with elements 1, 2, 3, 4, 5.
    two_way_list *list = create_list();
    add_element(list, 1);
    add_element(list, 2);
    add_element(list, 3);
    add_element(list, 4);
    add_element(list, 5);

    // Delete the 3rd element (which is 3).
    delete_kth_element(list, 3);

    // Print the remaining elements in the list.
    print_list(list); // Output: 1 2 4 5
}