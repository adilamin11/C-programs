#include <stdio.h>
void swap(int *a, int *b){
int t = *a;
*a = *b;
*b = t;
}
int partition (int arr[], int low, int high){
int pivot= arr[high];
int i = (low-1);
int j;
for( j = low; j<=high-1; j++){
if(arr[j] < pivot){
i++;
swap (&arr[i], &arr[j]);}}
swap (&arr[i+1], &arr[high]);
return (i+1);}
void quicksort (int arr[], int low, int high){
if(low<high){
int pi = partition (arr,low,high);
quicksort(arr,low,pi-1);
quicksort(arr,pi+1,high);}}
void printArray(int arr[], int size){
int i;
for (i=0;i<size;i++)
printf("%d\n", arr[i]);}
int main(){
int arr[] = {10,7,8,6,1,3};
int n = sizeof(arr)/sizeof(arr[0]);
quicksort(arr,0,n-1);
printf("Sorted Array :\n");
printArray(arr,n);
return 0; }
