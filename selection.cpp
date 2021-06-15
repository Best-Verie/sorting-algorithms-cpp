//
// Created by DELL on 6/15/2021.
//

#include <iostream>
using namespace std;


void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y=temp;
}
void selectionSort(int array[], int n){

    int minIndex;
    for(int i=0; i<n-1; i++){
        minIndex = i;
        for(int j = i+1; j<n; j++){
            if(array[j]<array[minIndex]){
                minIndex=j;
            }
        }
        swap(&array[minIndex], &array[i]);
    }

    for(int k=0; k<n; k++){
        cout<<array[k]<<" ";
    }

}
int main(){
    int array[]={45,23,7,21,89};
    int n = sizeof(array)/sizeof(array[0]);
    selectionSort(array,n);

}