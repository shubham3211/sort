//Bubble Sort
#include<iostream>
using namespace std;

void bubble(int a[10]){
for(int j=0;j<10;j++){
    for(int k=j+1;k<9;k++){
     if(a[k]<a[j]){
        a[k]=a[k]+a[j];
        a[j]=a[k]-a[j];
        a[k]=a[k]-a[j];
        }
        }
}
}


int main(){

int arr[10];
cout<<"Enter the array to be sorted"<<endl;
for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
bubble(arr);
cout << "the sorted array is" << endl;
for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<endl;
    }

return 0;
}
