/**   In the name of Allah (SWT).
 *
 *    author:  Asif
 *
**/
#include <bits/stdc++.h>
using namespace std;
 
typedef    long long                       ll;
typedef    unsigned long long              ull;
typedef    vector<int>                     vi;
typedef    vector<vi>                      vvi;
typedef    vector<ll>                      vl;
typedef    vector<vl>                      vvl;
typedef    vector<char>                    vc;
typedef    vector<vc>                      vvc;
typedef    pair<int, int>                  pii;
typedef    pair<ll, ll>                    pll;
typedef    pair<string, string>            pss;
typedef    map<int, int>                   mii;
typedef    unordered_map<int, int>         umap_ii;
typedef    unordered_map<string, int>      umap_si;
 
#define    Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define    INF                             (int)1e9
#define    PI                              3.1415926535897932384626433832795
#define    MOD                             1000000007
#define    pb                              push_back
#define    imax                            INT_MAX
#define    imin                            INT_MIN
#define    VSORT                           sort(v.begin(), v.end())
#define    VRSORT                          sort(v.rbegin(), v.rend())
#define    V1SORT                          sort(v1.begin(), v1.end())
#define    V1RSORT                         sort(v1.rbegin(), v1.rend())
 
void busted(){
    int n; cin >> n;
    string str; cin >> str;
    string first_number = "1";
    string second_number = "1";
    int position = n + 1;
    for(int i = 1; i < n ; i++){
        if(str[i] == '0'){
            first_number.pb('0');
            second_number.pb('0');
        }
        else if(str[i] == '2'){
            first_number.pb('1');
            second_number.pb('1');
        }
        else{
            position = i + 1;
            first_number.pb('1');
            second_number.pb('0');
            break;
        }
    }
    for(int i = position; i < n; i++){
        first_number.pb('0');
        second_number.pb(str[i]);
    }
    cout << first_number << '\n' << second_number << '\n';
    return;
}
 
int32_t main(){
    Fast
    int tc; cin >> tc;
    while(tc--)
       busted();
    return 0;
}