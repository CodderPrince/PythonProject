#include <iostream>
#include <unordered_map>
#include <vector>

int countUniqueElements(const std::vector<int> &arr)
{
    std::unordered_map<int, int> frequency;
    for (int num : arr)
    {
        frequency[num]++;
    }

    int uniqueCount = 0;
    for (const auto &pair : frequency)
    {
        if (pair.second == 1)
        {
            uniqueCount++;
        }
    }

    return uniqueCount;
}

int main()
{
    int n=5;
    // std::cout << "Enter the size of the array: ";
    //std::cin >> n;

    std::vector<int> arr{1,2,3,1,2};
    // std::cout << "Enter the elements of the array: ";
   // for (int i = 0; i < n; i++)
   // {
     //   std::cin >> arr[i];
    //}

    int uniqueCount = countUniqueElements(arr);
    std::cout << uniqueCount << std::endl;

    return 0;
}