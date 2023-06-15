int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);
    sort(dt,dt+n);
    int curr=1;
    int maxi=1;
    int i=1,j=0;
    while(i<n && j<n){
      if (at[i] <= dt[j]) {
          curr++;
          i++;
      } else if (dt[j] < at[i]) {
          curr--;
          j++;
      }
      maxi=max(maxi,curr);
    }
    return maxi;
}
