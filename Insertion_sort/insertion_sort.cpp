#include<iostream>
using namespace std;
int main(){
    int n= 5;
    int arr[n] = {5,3,4,2,1};

    //insertion sort time complexity worst case --> o(nsqr) and best case - o(n) without giving any boolean checks ;
    //insertion sort is stable sort;
    for(int i=0;i<=n-1;i++){
            int j=i;
            while(j>=1 ){
                if(arr[j]>=arr[j-1])  break;
                if(arr[j]<arr[j-1]){
                    swap(arr[j],arr[j-1]);
                    j--;
                }

            }
    }
    for(int ele : arr){
        cout<<ele<<" ";
    }
}
