#include <bits/stdc++.h>

using namespace std;

int partitionArray(int * A, int lb, int ub){
    int pivot=A[lb];
    int i=lb;
    int j=ub;
    while (i<j){
        while (A[i]<=pivot){
            i++;
        }
        while (A[j]>pivot){
            j--;
        }
        if (i<j){
            swap(A[i], A[j]);
        }
    }
    swap(A[lb], A[j]);
    return j;
}

void quickSort(int * A, int lb, int ub){
    if (lb<ub){
        int location=partitionArray(A, lb, ub);
        quickSort(A, lb, location-1);
        quickSort(A, location+1, ub);
    }
}

int main()
{
    int A[]={7, 6, 10, 5, 9, 2, 1, 15, 7};
    quickSort(A, 0, 8);
    for (int i=0;i<9;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
