#include <iostream>
using namespace std;


void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y=temp;
}
void bubbleSort(int array[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(array[j] > array[j+1]){
                swap(&array[j], &array[j+1]);
            }
        }
    }

    for(int k=0; k<n; k++){
        cout<<array[k]<<" ";
    }

}
/
int main(){
  int array[]={45,23,7,21,89};
    int n = sizeof(array)/sizeof(array[0]);

    cout<<n<<endl;
    bubbleSort(array,n);

}