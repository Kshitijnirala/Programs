#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x,y,t;
	cin>>n>>x>>y>>t;
	vector<int> arr1;
	vector<int> arr2;
	for(int i=1;i<n;i++){
	    if(i*x<=n){
	        cout<<i*x<<" ";
	        arr1.push_back(i*x);
	    }
	    else{
	        break;
	    }
	}
	cout<<"\n";
	for(int i=1;i<n;i++){
	    if(i*y<=n){
	        cout<<i*y<<" ";
	        arr2.push_back(i*y);
	    }
	    else{
	        break;
	    }
	}
	cout<<"\n";
	set<int> s;
	vector<int> arr3;
	for(int i=0;i<arr1.size();i++){
	    if(s.find(arr1[i])!=s.end()){
	        continue;
	    }
	    else{
	        arr3.push_back(arr1[i]);
	        s.insert(arr1[i]);
	    }
	}
	for(int i=0;i<arr2.size();i++){
	    if(s.find(arr2[i])!=s.end()){
	        continue;
	    }
	    else{
	        arr3.push_back(arr2[i]);
	        s.insert(arr2[i]);
	    }
	}
	set<int> s1;
	for(int i=0;i<arr3.size();i++){
	    if(arr3[i]>=t){
	        break;
	    }
	    else{
	        if(s1.find(t-arr3[i])!=s1.end()){
	            cout<<min(arr3[i],t-arr3[i])<<" "<<max(arr3[i],t-arr3[i])<<"\n";
	        }
	        else{
	            s1.insert(arr3[i]);
	        }
	    }
	}
	return 0;
}