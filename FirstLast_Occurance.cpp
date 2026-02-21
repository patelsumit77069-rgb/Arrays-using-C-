#include<iostream>
using namespace std;
int first_Occurance(int arr[],int size,int key){
  int start=0;
  int end=size-1;
  int ans=-1;
  int mid=start+(end-start)/2;
  while(start<=end){
    if(arr[mid]==key){
       ans=mid;
       end=mid-1;
    }
    if(arr[mid]<key){
      
      start=mid+1;
       
    }
    else{
      end=mid-1;

    }
    mid=start+(end-start)/2;
  
  }
  return ans;
}
  int last_Occurance(int arr[],int size,int key){
  int start=0;
  int end=size-1;
  int ans=-1;
  
  int mid=start+(end-start)/2;
  while(start<=end){
    if(arr[mid]==key){
       ans=mid;
       start=mid+1;
    }
    if(arr[mid]<key){
      start=mid+1;
       
    }
    else{
      end=mid-1;

    }
    mid=start+(end-start)/2;
  }
  return ans;
} 

int main(){
  int arr1[5]={1,1,2,3,4};
  int firstocc=first_Occurance(arr1,5,1);
  cout<<"The first occurance of 1 is "<<firstocc<<endl;
  cout<<"The last occurance of 1 is "<<last_Occurance(arr1,5,1)<<endl;

}