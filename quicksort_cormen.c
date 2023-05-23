// quickSort.c
#include <stdio.h>

void quickSort( int[], int, int);
int partition( int[], int, int);


void main()
{
	int A[] = { -6, 12, 1, -2, 0, 15, 4, 11, 9};

	int i;
	printf("\n\nUnsorted array is:  ");
	for(i = 0; i < 9; ++i)
		printf(" %d ", A[i]);

	quickSort( A, 0, 8);// function call

	printf("\n\nSorted array is:  ");
	for(i = 0; i < 9; ++i)
		printf(" %d ", A[i]);

}


void quickSort( int A[], int p, int r)
{
   int q;

   if( p < r )
   {
   	// divide and conquer
       q = partition( A, p, r);
       quickSort( A, p, q-1);
       quickSort( A, q+1, r);
   }

}



int partition( int A[], int p, int r) {
   int x, i,j,t, t1;

   x = A[r];
   i = p-1;
   for(j = p;j <= r-1;j=j+1) {
        if (A[j]<=x){
            i=i+1;
            t = A[i]; A[i] = A[j]; A[j] = t;
        }// end if
   }// end for
        t1 = A[i+1]; A[i+1] = A[r]; A[r] = t1;
        return i+1;
}
