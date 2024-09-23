#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        int max_val = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            max_val = max(max_val, a[i]);
        }
        int cnt = 1;
        for(int i = 1; i <= max_val; i++)
        {
            if(a[i] % i)
        }
    }
}