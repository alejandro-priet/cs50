#include <stdio.h>
#include <stdlib.h>

int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//this code is for the linear search

int linear_search(int *array, int size, int key)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (array[i] == key)
            return i;
    }
    return -1;
}

//This function defines the length of the array
int main()
{
    int i;
    int size = sizeof(array) / sizeof(array[0]);
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    int key = 5;
    int index = linear_search(array, size, key);
    if (index == -1)
        printf("Key not found\n");
    else
        printf("Key found at index %d\n", index);

    return 0;
}

