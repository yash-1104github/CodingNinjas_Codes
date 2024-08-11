int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    int count=0;int n=arr.size();int presum=0;
   map<int,int>mpp;
   mpp[0]=1;
   for(int i=0;i<n;i++){
       presum+=arr[i];
       int remove = presum-k;
       count+=mpp[remove];
       mpp[presum]+=1;

   }
   return count;
}
