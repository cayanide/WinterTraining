#include <stdio.h>
int main()
{
    int temp, i, j, arr[10];
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10 - i - 1; ++j)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    return 0;
}