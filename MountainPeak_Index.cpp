#include<iostream>
using namespace std;
int Peak_index(int arr[],int size){
  int s=0;
  int e=size-1;
  int mid=s+(e-s)/2;
  while(s<e){
    if(arr[mid]<arr[mid+1]){
      s=mid+1;
    }
    else{
      e=mid-1;
    }
    mid=s+(e-s)/2;
  }
  return s;
}
int main(){
 int arr[4]={1,2,3,0};
 int peakIndex=Peak_index(arr,4);
 cout<<"The mountain Peak index in array is "<<peakIndex<<endl;
}  
