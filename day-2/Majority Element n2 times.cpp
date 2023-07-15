int majorityElement(vector<int> v) {
	// Write your code here
	int el=0;
	int count=0;
	int n = v.size();
	for(int i=0;i<n;i++){
		if(count==0){
			count=1;
			el = v[i];
		}
		else if(v[i]==el) count++;
		else count--;
	}
	// cout<<el<<endl;;
	int c=0;
	for(auto i:v){
		if(i==el) c++;
	}
	// cout<<c;
	if(c>n/2) return el;
	return -1;
}