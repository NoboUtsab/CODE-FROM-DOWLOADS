//algorithm is from coremen

#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>

void merge_sort(int[], int, int);
void merge(int[], int, int, int);

void main()
{
	int A[] = { -6, -12, 1, -2, 0, 15, 4, 11, 9};

	int i;
	printf("\n\nUnsorted array is:  ");
	for(i = 0; i < 9; ++i)
		printf(" %d ", A[i]);

	merge_sort( A, 0, 8);// function call

	printf("\n\nSorted array is:  ");
	for(i = 0; i < 9; ++i)
		printf(" %d ", A[i]);

}

void merge_sort(int A[],int p,int r)
{
    int q;
    if(p<r){
        q=(p+r)/2;
        merge_sort(A,p,q);
        merge_sort(A,q+1,r);
        merge(A,p,q,r);
    } // end if
}


void merge(int A[],int p,int q,int r){
    int i,j,k, n1,n2;

    n1=q-p+1;
    n2=r-q;
    int L[n1+1],R[n2+1];
    for(i=1;i<=n1;i++)
        L[i]=A[p+i-1];
    for(j=1;j<=n2;j++)
        R[j]=A[q+j];
    L[n1+1]=9999;
    R[n2+1]=9999;
    i=1;
    j=1;
    for(k=p;k<=r;k++){
        if(L[i]<=R[j]){
            A[k]=L[i];
            i=i+1;
        }
        else{
            A[k]=R[j];
            j=j+1;
        }
    } // end for
}

