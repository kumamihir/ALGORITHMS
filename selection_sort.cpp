#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n =5;
    int arr[n] = {5 ,2 ,3 ,4 , 1};
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    //selection sort ---> we just have to select min element and swap it with the first element and then reduce our search space by not taking the first already swaped elements;

    //selection sort is an unstable sort;
    
    for(int i=0;i<n-1;i++){
        int min = INT_MAX;
        int min_idx = -1;
        //minimum element and index calculated;
        for(int j=i;j<n;j++){
            if(arr[j]<min) {
                min=arr[j];
                min_idx = j;
            }

        }
        swap(arr[i],arr[min_idx]);
    }
    cout<<endl;
       for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }

   
}