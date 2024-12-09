// waf to count the odd numbers in a array
#include<stdio.h>
void countodd(int arr[], int n);
int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    return 0;
}

void countodd(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] %2 != 0 ){
            count++;
        }
    }
}