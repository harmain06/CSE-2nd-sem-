#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);   
    for(int i = 0 ; i<n ; i++){
        scanf("%d\n", &arr[i]);
        }
        printf("The elements of the array are:\n");
        for(int i = n-1 ; i>=0 ; i--){
        printf("%d\n",arr[i]);
    }
return 0;
}