// #include<iostream>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int a,b;
//         cin>>a>>b;
//         if(a>0&&b>0)
//         {
//             cout<<"Solution"<<endl;
//         }
//         else if (a>=0&&b>0)
//         {
//             cout<<"Liquid"<<endl;
//         }
//        else
//        {
//         cout<<"Solid"<<endl;
//        }
        
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, d;
        cin >> n >> m >> d;
        vector<ll> a, b;
        for (ll i = 0;i < n;i++)
        {
            ll x;
            cin >> x;
            a.push_back(x);
        }
        for (ll i = 0;i < m;i++)
        {
            ll x;
            cin >> x;
            b.push_back(x);
        }
        map<ll, ll> indx;
        for (ll i = 0;i < n;i++)
        {
            indx[a[i]] = i + 1;
        }
        ll ans = INT_MAX;
        ll f = 0;
        for (ll i = 0;i < m - 1;i++)
        {
            if (indx[b[i]] >= indx[b[i + 1]])
            {
                cout << 0 << endl;
                f = 1;
                break;
            }
            if (indx[b[i + 1]] > indx[b[i]] + d)
            {
                cout << 0 << endl;
                f = 1;
                break;
            }
            ans = min(ans, indx[b[i + 1]] - indx[b[i]]);
            if ((d + 1 - (indx[b[i + 1]] - indx[b[i]])) <= (n - indx[b[i + 1]] + indx[b[i]] - 1))
            {
                ans = min(ans, d + 1 - (indx[b[i + 1]] - indx[b[i]]));
            }
        }
        if (f == 1)
        {
            continue;
        }
        cout << ans << endl;
    }
}