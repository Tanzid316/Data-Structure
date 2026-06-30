#include<bits/stdc++.h>
using namespace std;
vector<int> vec;

void insertionSort()
{
    int i,j,key;
    for(i=1; i<vec.size(); i++)
    {
        key = vec[i];
        j=i-1;

        while(j>=0 && vec[j] > key)
        {
            vec[j+1] = vec[j];
            j--;
            
        }
        
        vec[j+1] = key;
    }
}


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
