#include <iostream>
using namespace std;

void selection_sort(int a[], int n)
{
    int i, j, iMin;

    for(i=0; i<n-1; i++){
        iMin = i;
        for(j=i+1; j<n; j++){
            if(a[j] < a[iMin])
                iMin = j;
        }
        int temp = a[i];
        a[i] = a[iMin];
        a[iMin] = temp;
    }
}

int main()
{
    int A[] = {7,6,5,4,3,2,1,0};
    selection_sort(A,8);
    for(int i=0; i<8; i++) cout<<A[i]<<" ";
}
