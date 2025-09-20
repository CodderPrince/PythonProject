//anton_and_polyhedrons.c
#include <stdio.h>
#include <string.h>

int main() 
{
    int t, i;
    scanf("%d", &t);
    int sum = 0;
    getchar();
    for (i = 0; i < t; i++) 
    {
        char str[101];
        //fgets(str, sizeof(str), stdin);
        gets(str);
        if (strncmp(str, "Tetrahedron", 11) == 0) 
        {
            sum = sum + 4;
        }
        else if (strncmp(str, "Cube", 4) == 0) 
        {
            sum = sum + 6;
        }
        else if (strncmp(str, "Octahedron", 10) == 0) 
        {
            sum = sum + 8;
        }
        else if (strncmp(str, "Dodecahedron", 12) == 0) 
        {
            sum = sum + 12;
        }
        else if (strncmp(str, "Icosahedron", 11) == 0) 
        {
            sum = sum + 20;
        }
    }

    printf("%d\n", sum);

    return 0;
}
