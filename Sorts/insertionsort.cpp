#include <iostream>
using namespace std;

void insertion_sort(int a[], int n)
{
	int i, key, j;
	for(i=1; i<n; i++) {
        key = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > key) {
            a[j+1] = a[j];
            j = j - 1;
        }
        a[j+1] = key;
	}
}

int main()
{
    int A[] = {7,6,5,4,3,2,1,0};
    insertion_sort(A,8);
    for(int i=0; i<8; i++) cout<<A[i]<<" ";
}
