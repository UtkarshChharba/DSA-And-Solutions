#include<bits/stdc++.h>
using namespace std;
vector<int> subset, input;
int k;
void get(int i){
int tot = accumulate(subset.begin(), subset.end(), 0);
if(tot > k) return;
else if(tot == k){
for(auto p : subset) cout << p << ' ';
cout << endl;
return;
}
if(i == input.size()) return;
subset.push_back(input[i]);
get(i + 1);
subset.pop_back();
get(i + 1);
return;
}
int main(){
int n;
cin >> n;
cin >> k;
input = vector<int>(n);
for(auto &p : input) cin >> p;
get(0);
return 0;
}