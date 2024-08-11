pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	pair<int,int>p;
	int start =0 ;int  end = a.size()-1;int floor= -1;int ceil = -1;
	while(start<=end){
		int mid = (start+end)/2;
		if(a[mid]==x){
			floor = a[mid];
			ceil = a[mid];
			break;
		}
		else if (a[mid]<=x){
			floor = a[mid];
			start = mid +1;
		}
		else if(a[mid]>=x){
			ceil = a[mid];
			end = mid-1;
		}
	}
	return{floor,ceil};
}
