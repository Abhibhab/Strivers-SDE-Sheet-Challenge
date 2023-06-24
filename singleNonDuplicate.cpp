int singleNonDuplicate(vector<int>& arr)
{
	
	// Write your code here
	int n=arr.size();
	if(n==1)return arr[0];
	if(arr[0]!=arr[1])return arr[0];
	if(arr[n-1]!=arr[n-2])return arr[n-1];
	int high=n-2,low=1;
        while (low <=high) {
			int mid=(high+low)/2;
			if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1])return arr[mid];
        	else {
                  if (mid % 2 == 0) {
					  if(arr[mid]==arr[mid+1])low=mid+1;
					  else high=mid-1;

                  } else {
                    if (arr[mid] == arr[mid - 1]) {
						low=mid+1;
                    }else{
						high=mid-1;
					}
                  }


            }
        }
		return -1;
}
