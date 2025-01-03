#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& a,vector<int>& b,vector<int>& res){
     int i=0;
    int j=0;
    int k=0;
    
        while(i<a.size() && j<b.size())
    {
        if(a[i]<=b[j]){
            res[k] = a[i];
            i++;
            k++;
        }   

        else{
            res[k] = b[j];
            k++;
            j++;
        }
    }
    if(i==a.size()){ //a is at the end

        while(j<b.size()){
            res[k++] = b[j++];
        }

    }
   if(j==b.size()){
    while(i<a.size()){
        res[k++] = a[i++];
    }
   }
}

void mergesort(vector<int>& V){
    int n = V.size();
    if(n==1) return;
    int n1 = n/2;
    int n2 = n-n/2;
    vector<int> a(n1);
    vector<int> b(n2);
    //copy pasting
    for(int i=0;i<n1;i++){
        a[i] = V[i];
    }
    for(int i=0;i<n2;i++){
        b[i] = V[i+n1];
    }
    //magic aka rec
    mergesort(a);
    mergesort(b);
    //but in this we have to give base case function i.e if size of arr is 1 so we cant break that arr 

    //merge

    merge(a,b,V);
}

int main(){

//     int arr[] = {1,4,5,8};
//     int n1=sizeof(arr)/sizeof(arr[0]);
//     vector<int> a(arr,arr+n1); // line 13 arr[] ke sare element iss vector me copy hojate hai ye krne se ;
//     int brr[] = {2,3,6,7,10,12};
//       int n2=sizeof(brr)/sizeof(brr[0]);
//       vector<int> b(brr,brr+n2);
//    vector<int> res(n1+n2);
//     merge(a,b,res);
//     for(int i=0;i<res.size();i++){
//         cout<<res[i]<<" ";
//     }


int arr[] = {5,1,4,2,6,9,3};
int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> V(arr,arr+n);
    for(int i=0;i<V.size();i++){
        cout<<V[i]<<" ";
    }
    cout<<endl;
    mergesort(V);
    for(int i=0;i<V.size();i++){
        cout<<V[i]<<" ";
    }


}