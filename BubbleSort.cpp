#include <iostream>
#define size 5

using namespace std;

void bubbleSort(int *A)
{
    for (int i=0;i<size-1;i++)
    {
        for (int j=0;j<size-1-i;j++)
        {
            if (A[j+1]<A[j])
            {
                swap(A[j+1],A[j]);
            }
        }
    }
}

int main()
{
    int A[size]={15,16,6,8,5};
    bubbleSort(A);
    for (int i=0;i<size;i++)
    {
        cout<<A[i]<<endl;
    }
    return 0;
}
