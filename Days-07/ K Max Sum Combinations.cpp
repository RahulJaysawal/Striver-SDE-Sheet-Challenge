#include<bits/stdc++.h>
// using namespace std;
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
	// Write your code here.
    priority_queue<int>pq;
    vector<int> ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            pq.push(a[i]+b[j]);
        }}
    for(int i=0;i<k;i++){
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}