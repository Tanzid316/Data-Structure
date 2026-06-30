#include<bits/stdc++.h>
using namespace std;
vector<int> vec;

void insertionSort()
{
    int i, key, j;
    for(i = 1; i < vec.size(); i++)
    {
        key = vec[i];      // Store the current element to insert
        j = i - 1;         // Start comparing with the last element of sorted portion

        // Shift elements of sorted portion that are greater than key
        // to one position ahead of their current position
        while(j >= 0 && vec[j] > key)
        {
            vec[j + 1] = vec[j];  // Move element right
            j--;                  // Move left to check next element
        }

        vec[j + 1] = key;  // Place key in its correct position
    }
}

// Helper function to print the vector
void printVector()
{
    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main()
{
    vec = {10, 30, 50, 15, 20};

    cout << "Before sorting: ";
    printVector();

    insertionSort();

    cout << "After sorting:  ";
    printVector();

    return 0;
}
