#include<bits/stdc++.h>
using namespace std;
int binarysearch (int arr[],int n, int target){
    int left = 0;
    int right = n-1;

    while(left<=right){
        int mid = (left+right)/2;

        if(arr[mid]==target)
            return mid;
        else if(arr[mid]<target)
            left = mid+1;
        else
            right = mid-1;
    }
    return -1;

}
int main(){
    int arr[] = {1,3,5,7,9};
    int n = 5;
    int target;
    cin>>target;
    int result = binarysearch(arr,n,target);
    if(result==-1){
        cout<< "Not found\n";
    }
    else{
        cout<< "Found at index " <<result<<endl;
    }


return 0;
}
