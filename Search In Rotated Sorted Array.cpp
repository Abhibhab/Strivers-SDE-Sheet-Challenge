int search(int* arr, int n, int target) {
    // Write your code here.
    int low=0;
    int high=n-1;
    while (low <= high) {
        int mid=low+(high-low)/2;
        if(target==arr[mid])return mid;
       if(arr[low]<=arr[mid]){
           if(arr[low]<=target && target<=arr[mid])
           high=mid-1;
           else low=mid+1;
       } else {
           if(arr[high]>=target && target>=arr[mid])
           low=mid+1;
           else high=mid-1;
       }
    }
    return -1;
}
