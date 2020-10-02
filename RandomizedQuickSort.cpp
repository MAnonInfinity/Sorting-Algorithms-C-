#include <bits/stdc++.h>

using namespace std;

void shuffleArray(int *A, int s, int e){
    srand(time(NULL));
    for (int i=s;i<e;i++){
        int j=rand()%(i+1);
        swap(A[i], A[j]);
    }
    cout<<"\nRandomized Array : "<<endl;
    for (int i=0;i<9;i++){
        cout<<A[i];
    }
}

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
    cout<<"Array : "<<endl;
    for (int i=0;i<9;i++){
        cout<<A[i];
    }
    cout<<"\n";
    shuffleArray(A, 0, 8);
    quickSort(A, 0, 8);
    for (int i=0;i<9;i++){
        cout<<A[i];
    }
    return 0;
}
