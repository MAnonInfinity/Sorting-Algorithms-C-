#include <iostream>

using namespace std;

int A[1000], n;

void mergeIt(int, int, int);

void mergeSort(int lb, int ub){
    if (lb < ub){
        int mid=(lb+ub)/2;
        mergeSort(lb, mid);
        mergeSort(mid+1, ub);
        mergeIt(lb, mid, ub);
    }
}

void mergeIt(int lb, int mid, int ub){
    int B[n];
    int i=lb, j=mid+1, k=lb;
    while (i<=mid && j<=ub){
        if (A[i]<=A[j]){
            B[k]=A[i];
            i++;
            k++;
        }
        else{
            B[k]=A[j];
            j++;
            k++;
        }
    }
    if (i>mid){
        while (j<=ub){
            B[k]=A[j];
            j++;
            k++;
        }
    }
    else{
        while (i<=mid){
            B[k]=A[i];
            i++;
            k++;
        }
    }
    for (int a=lb;a<=ub;a++){
        A[a]=B[a];
    }
}

int main()
{
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements : ";
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    mergeSort(0, n-1);
    cout<<"\nSorted Array : \n";
    for (int i=0;i<n;i++){
        cout << A[i];
    }
    return 0;
}
