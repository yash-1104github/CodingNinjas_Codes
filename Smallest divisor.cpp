int sumofD(vector<int>&arr,int div){
	int sum =0;
	int n= arr.size();
	for(int i=0;i<n;i++){
		sum = sum + ceil((double)(arr[i])/(double)(div));
	}
	return sum;
}
int smallestDivisor(vector<int>& arr, int limit)
{
		int n= arr.size();
	if( n>limit) return -1;
	int low=0;int high = *max_element(arr.begin(),arr.end());
	while(low<=high){
		int mid = (low+high)/2;
		if(sumofD(arr,mid)<=limit){
			high= mid-1;
		}
		else
		low =mid+1;
		
	}
	return low;
}
