#include<iostream>
using namespace std;

void Sort(int arr[] , int n){
    for(int i = 1; i < n ; i++){
    //for first round
    int temp = arr[i];
    int j = i -1;
    for ( ;j >= 0; j--){
        if(arr[j] > temp){
            //shift
            arr[j+1] = arr[j]; // ith element ko j element bna do
        } else {
            break;
        }
    }
    arr[j + 1] = temp;
        }
     for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[4] = {4,3,2,1};
    Sort(arr , 4);
}