
long long multi(int a,int b){
  long long ans=1;
  for(int i=0;i<b;i++){
    ans*=a;
  }
  return ans;
}
int NthRoot(int n, int m) {
  // Write your code here.
  long long low=1,high=m;
  while(low<=high){
    long long mid=low+(high-low)/2;
    if(pow(mid,n)==m)return mid;
    else if(pow(mid,n)<m)low=mid+1;
    else high=mid-1;
  }
  return -1;

}
