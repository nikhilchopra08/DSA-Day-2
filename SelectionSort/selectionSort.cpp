#include<iostream>
using namespace std;

void SelectionSort(int arr[] , int n){
    for (int i =0 ; i<=n-1 ; i++){
        int minIndex = i;
        for(int j = i+1; j < n;j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex] , arr[i]);
    }
    for(int i = 0; i <= n-1 ; i++){
        cout << arr[i] << " ";
    }
    
}

int main(){
    int arr[4] = {2,5,1,2};
    SelectionSort(arr , 4);
}