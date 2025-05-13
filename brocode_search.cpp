#include <iostream>

using std::cout;
using std::string;

int searchIndex(int array[], int size, int element)
{
    for (int counter = 0; counter < size; counter++)
    {
        if (array[counter] == element)
        {
            return counter;
        }
    }
       
    cout << "the number is not in the list\n";
    return 0;
}

int main()
{

    int myArray[] = {1, 2, 3, 4, 5};
    int myArraySize = sizeof(myArray) / sizeof(myArray[0]);
    // cout<<"myArraySize: "<<myArraySize<<"\n";
    int element = 5;
    int index = searchIndex(myArray, myArraySize, element);
    if (index != 0)
    {
        cout << "the index of " << element << " is " << index << '\n';
    }

    return 0;
}