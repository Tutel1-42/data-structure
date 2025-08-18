#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    int n,k,out;
    int max = 0; int count = 0;
    string name;
    map<string,int> m;
    vector<int> v;
    cin >> n >> k;
    for(int i = 0; i<n; i++) {
        cin >> name;
        m[name] += 1;
    }

    for(auto it: m) {
        v.push_back(it.second);
    }
    sort(v.begin(),v.end(),greater<int>());
    for(int x: v) {
        if(count == k) {
            break;
        }
        else
            out = x;
            count++;
    }
    cout << out;
}
