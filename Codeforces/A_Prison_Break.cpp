/**
 *    author:  Asif
 *    created: 23.02.2021 07:14:25
**/
#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define imax INT_MAX
#define imin INT_MIN
using namespace std;
int main()
{
    int tc; cin >> tc;
    while(tc--)
    {
        int n, m, r, c; cin >> n >> m >> r >> c;
        cout << max(r-1, n-r) + max(c-1, m-c) << endl;
    }
    return 0;
}