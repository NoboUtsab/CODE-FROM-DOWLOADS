//MD. Oli-ul Ali Khan
//ID - 13701070

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100000

double heap_sort(int arr[], int n);
void build_max_heap(int arr[], int n);
void max_heapify( int arr[], int i, int n);

int main()
{
    int a[MAX], temp[MAX];
    int i,n,j;
    time_t t;
    double total_time;

    printf("How Many Numbers?\n");
    scanf("%d", &n);

    srand( (unsigned) time(&t) );
    for (i=0;i<n;i++)
    {
        a[i] = rand() % 50;
    }

    printf("Random Numbers (Unsorted):\n");
    for(i=0; i<n; i++)
        printf("%d\t", a[i]);
    printf("\n");

    heap_sort(a, n-1);

    printf("After Sorting:\n");
    for(i=0; i<n; i++)
        printf("%d\t ", a[i]);
    printf("\n");

    return 0;
}

double heap_sort(int arr[], int n)
{
    int i, temp;
    int heap_size = n;
    //clock_t start_t, end_t;
    //double total_t;

    build_max_heap(arr, heap_size);

    //start_t = clock();
    for (i=n; i>0; i--)
    {
        temp = arr[i];
        arr[i] = arr[0];
        arr[0] = temp;

        heap_size = heap_size - 1;
        max_heapify(arr, 0, heap_size);
    }

}

void build_max_heap(int arr[], int n)
{
    int i;

    for(i=(n/2); i>=0; i--)
        max_heapify(arr, i, n);
}

void max_heapify( int arr[], int i, int n)
{
    int l, r, largest,temp;

    l = (2*i) + 1;
    r = (2*i) + 2;

    if ( l <= n && arr[l] > arr[i])
        largest = l;
    else largest = i;

    if ( r <= n && arr[r] > arr[largest])
        largest = r;

    if (largest != i)
    {
        temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        max_heapify(arr, largest, n);
    }
}
