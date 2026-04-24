// C program to take user input of array and print them
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
        printf("The elements of the array are: \n");
        for(int i = 0 ; i<n ; i++){
        printf("%d\n",arr[i]);
    }
return 0;
}