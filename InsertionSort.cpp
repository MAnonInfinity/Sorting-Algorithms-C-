#include <iostream>
#define size 6

using namespace std;

void insertionSort(int *A)
{
    int temp;
    for (int i=1;i<size;i++)
    {
        temp=A[i];
        int j=i-1;
        while (j>=0 && A[j]>temp)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=temp;
    }
}

int main()
{
    int A[6]={7,4,10,8,3,1};
    insertionSort(A);
    for (int i=0;i<size;i++)
    {
        cout<<A[i]<<endl;
    }
    return 0;
}
