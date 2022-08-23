#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool vowelCheck(char c)
{
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y');
}
int main()
{
    optimize();
    string s, rs;
    cin >> s;

    for(auto u : s)
    {
        char c = tolower(u);
        if(!vowelCheck(c))
        {
            rs+='.';
            rs+=c;
        }
    }
    cout << rs << endl;
    return 0;
}