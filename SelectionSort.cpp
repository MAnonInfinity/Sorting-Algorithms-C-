#include <iostream>
#define size 6

using namespace std;

void selectionSort(int *A)
{
    int min_index;
    for (int i=0;i<size;i++)
    {
        min_index=i;
        for (int j=i+1;j<size;j++)
        {
            if (A[j]<A[min_index])
            {
                min_index=j;
            }
        }
        if (min_index!=i)
        {
            swap(A[i],A[min_index]);
        }
    }
}

int main()
{
    int A[size]={7,4,10,8,3,1};
    selectionSort(A);
    for (int i=0;i<size;i++)
    {
        cout<<A[i]<<endl;
    }
    return 0;
}
