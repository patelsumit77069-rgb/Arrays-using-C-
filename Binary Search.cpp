#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
  int start=0;
  int end=size-1;
  int mid=start+(end-start)/2;
  while(start <= end){
       if(key==arr[mid]){
        return mid;
       }
       if(key<arr[mid]){
        end=mid-1;
       }
       else{
        start=mid+1;
       }
       mid=start+(end-start)/2;
  }
  return -1;
}
int main(){
  int arr1[5]={1,2,3,4,5};
  int arr2[6]={14,25,69,74,88,97};
  int index=binarySearch(arr1,5,5);
  int index2=binarySearch(arr2,6,69);
  cout<<"Index of 5 is "<<index<<endl;
  cout<<"Index of 69 is "<<index2<<endl;

}