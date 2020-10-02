#include <iostream>
#define siz 5

using namespace std;

int[] countingSort(int *A){
    int maxnum=0;
    for (int i=0;i<siz;i++){
        if (A[i]>maxnum){
            maxnum=A[i];
        }
    }
    int C[maxnum+1];
    for (int i=0;i<=maxnum;i++){
        C[i]=0;
    }
    static int B[siz]; 
    for (int i=0;i<siz;i++){
        C[A[i]]++;
    }
    for (int i=1;i<=maxnum;i++){
        C[i]=C[i]+C[i-1];
    }
    for (int i=siz-1;i>=0;i--){
        B[--C[A[i]]]=A[i];
    }
    return B;
}

int main()
{
    int A[]={4, 1, 3, 4, 3};
    int *p=countingSort(A);
    for (int i=0;i<siz;i++){
        cout<<p[i]<<" ";
    }
    return 0;

}
