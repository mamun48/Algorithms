#include<bits/stdc++.h>
using namespace std;
int arr[] = {90, 30, 35, 45,555};//size is 5
int Count[10];
void radixSort(int pos){
    for(int i=0;i<10;i++)Count[i]=0;
    int output[5];
    for (int i = 0; i < 5; i++) {
        Count[(arr[i]/pos)%10]++; // Count array generating
    }
    for (int i = 1; i < 10; i++) {
        Count[i] += Count[i - 1]; // end position of each element
    }
    for (int i = 4; i >= 0; i--) {
        Count[(arr[i]/pos)%10]--;
        output[Count[(arr[i]/pos)%10]] = arr[i];
    }
    for(int i=0;i<5;i++){
        arr[i] = output[i];
    }
}
int main(){
    int max_num = INT32_MIN;
    for (int i = 0; i < 5; i++) {
        max_num = max(max_num, arr[i]); // for getting max num
    }
    for(int pos = 1;max_num/pos>0;pos*=10){
        radixSort(pos);
    }
    for(int i=0;i<5;i++)cout<<arr[i]<<" ";
}