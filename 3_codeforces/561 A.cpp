#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)2e5+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int main()
{
    IOS;
    int n, i, j;
    string s;
    cin>>n;
    int arr[26]={0};
    for(i=0; i<n; i++){
        cin>>s;
        arr[s[0]-97]++;
    }
    int cnt = 0;
    for(i=0; i<26; i++){
        int d = arr[i]/2;
        int k = arr[i] - d;
        cnt += (d*(d-1))/2 + (k*(k-1))/2;
    }
    cout<<cnt<<endl;
}
