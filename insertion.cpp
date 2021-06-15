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

    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = array[i];
        j = i - 1;

        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }

    for(int k=0; k<n; k++){
        cout<<array[k]<<" ";
    }

}
int main(){
    int array[]={45,23,7,21,89};
    int n = sizeof(array)/sizeof(array[0]);

    cout<<n<<endl;
    selectionSort(array,n);

}
