#include<iostream>
using namespace std;
int pivot_element(int arr[],int size){
  int s=0; int e=size-1;
  int mid=s+(e-s)/2;
  if(arr[mid]<arr[mid-1]&&arr[mid]<arr[mid+1]){
    return mid;

    }
                                     }


int main(){
  int arr[5]={7,9,1,2,3};
  cout<<pivot_element(arr,5)<<endl;

}