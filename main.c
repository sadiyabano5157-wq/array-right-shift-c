#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 40, 30, 50};

    int temp = arr[3];   

    // shift elements
    for(int i = 3; i < 4; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[4] = temp;

  
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
