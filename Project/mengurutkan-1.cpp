#include <iostream>

void sort(int array[], int ukuran);

int main()
{
    int array[] = {8, 6, 4, 3, 5, 9, 7, 1, 10, 2};
    int ukuran = sizeof(array) / sizeof(array[0]);

    sort(array, ukuran);

    for (int element : array)
    {
        std::cout << element << " ";
    }

    return 0;
}
void sort(int array[], int ukuran)
{

    int temp;
    for (int i = 0; i < ukuran - 1; i++)
    {
        for (int j = 0; j < ukuran - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
