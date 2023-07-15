
vector<int> majorityElement(vector<int> v) {
	// Write your code here
	int count1=0, count2=0;
	int el1=0,el2=0;
	int n = v.size();
	for(int i=0;i<n;i++){
		if(count1==0 and el2!=v[i]){
			count1=1;
			el1 = v[i];
		}
		else if(count2==0 and el1!=v[i]){
			count2=1;
			el2=v[i];
		}
		else if(el1==v[i]) count1++;
		else if(el2==v[i]) count2++;
		else{
			count1--;
			count2--;
		}
	}

	vector<int> ans;
	int a=0,b=0;
	for(int i=0;i<n;i++){
		if(v[i]==el1) a++;
		else if(v[i]==el2) b++;
	}
	if(a>n/3) ans.push_back(el1);
	if(b>n/3) ans.push_back(el2);

	return ans;
}