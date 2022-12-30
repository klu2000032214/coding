#include<bits/stdc++.h>
using namespace std;

void maxHeapifyShiftDown(int arr[], int n, int idx){
    // TODO: Your Code Here
    int curr = idx;
    while(curr<n){
        int mxi = curr;
        int lci = (2*curr)+1;
        int rci = (2*curr)+2;
        if(lci<n && arr[lci] > arr[mxi]) mxi = lci;
        if(rci<n && arr[rci] > arr[mxi])
            mxi = rci;
        if(mxi == curr)
            break;
        swap(arr[mxi],arr[curr]);
        curr = mxi;
    
    }
}

void buildMaxHeap(int arr[], int n){
    // TODO: Your Code Here
    for(int i=(n/2)-1;i>=0;i--){
        maxHeapifyShiftDown(arr,n,i);
    }
}
