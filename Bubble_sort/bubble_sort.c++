//bubble sort algorithm works in every pass i.e you need to swap elements in every pass if arr[i]>arr[i+1];
//if there are 'n' elements then we need atmost n-1 pass;
//algorithm;
// ---->> " IN Each Pass Two Adjacent element Got swappped"

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //bubble sort
    // :: TC - O(n sqr);
    // :: sc - o(1);
    // bubble sort is a stable sort i.e it does not change the relative order of elements;
    
    for(int i=0;i<n-1;i++){ //n-1 passes

        for(int j=0;j<n-1-i;j++){ //swap
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }

        }

    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

//in line no : 21 if we do j<n-1-i instead of j<n-1 then code will run more smoothly we do this because we know after every pass the last time in the pass we dont have to check the last already sorted elements follows by n passes .