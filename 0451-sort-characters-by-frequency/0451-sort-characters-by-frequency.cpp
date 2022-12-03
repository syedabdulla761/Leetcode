class Solution {
public:
    string frequencySort(string s) {
        // unordered_map<char,int> x;
        // for(int i=0;i<s.size();i++){
        //     x[s[i]]++;
        // }
        // s.clear();
        // map<int,string> y;
        // for(auto it:x){
        //     y[it.second]=it.first;
        // }
        // for(auto it:y){
        //     for(int i=0;i<it.first;i++){
        //         s=it.second+s;
        //     }
        // }
       vector<pair<int,char>>v;
    map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    for(auto i:mp){
        v.push_back({i.second,i.first});
    }

    sort(v.rbegin(),v.rend());
    string ans;
    for(auto i:v){
        for(int j=0;j<i.first;j++){
            ans+= i.second;
        }
    }
    return ans;
    }
};