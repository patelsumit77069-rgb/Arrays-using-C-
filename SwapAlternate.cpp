#include<iostream>
using namespace std;
void printArray(int arr[],int n){
for(int i=0;i<n;i++){
 cout<<arr[i]<<endl;
}}
void SwapAlternate(int arr[],int size){
for(int i=0;i<8;i+=2){
  if(i+1<8){
    swap(arr[i],arr[i+1]);
  }
 
}

}
int main(){
  int a[8];
  cout<<"Enter the elements of array"<<endl;
  for(int i=0;i<8;i++){
    cin>>a[i];
  
  }
 SwapAlternate(a,8);
 printArray(a,8);
}