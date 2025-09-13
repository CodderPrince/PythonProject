/*
Author: PRINCE
VARSITY: BRUR
DEPARTMENT: CSE
*/

#include <iostream>
#include <string>

int Cells(char s[], int n, int k) 
{
  int operations = 0;

  for (int i = 0; i < n;) 
  {
    int j = i;

    while (j < n && s[j] != 'B') 
    {
      j++;
    }

    if (j == n) 
    {
      break;
    }

    for (int x = j; x < j + k && x < n; x++) 
    {
      s[x] = 'W';
    }

    operations++;
  }

  return operations;
}

int main() 
{
  int t;
  std::cin >> t;

  while (t--) 
  {
    int n, k;
    std::cin >> n >> k;

    char s[n + 1];
    std::cin >> s;

    int operations = Cells(s, n, k);
    std::cout << operations << std::endl;
  }

  return 0;
}
