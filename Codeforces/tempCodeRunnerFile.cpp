#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int p[m];
    for(int i=0; i<m ; i++)
    {
        cin >> p[i];
    }
    sort(p,p+m);
    cout << p[n-1]-p[0] << endl;
    return 0;
}