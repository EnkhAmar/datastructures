#include <iostream>
using namespace std;

void bubble_sort(int a[], int n)
{
    int i, j;

    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main()
{
    int A[] = {7,6,5,4,3,2,1,0};
    bubble_sort(A,8);
    for(int i=0; i<8; i++) cout<<A[i]<<" ";
}
