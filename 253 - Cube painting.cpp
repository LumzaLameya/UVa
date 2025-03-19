#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi(v) for (auto &it : v) cin >> it;
#define vo(v) for (auto it : v) cout << it << " "; cout << endl;
#define yout cout << "YES" << endl;
#define nout cout << "NO" << endl;
#define org(v) sort(v.begin(), v.end());
#define rorg(v) sort(v.rbegin(), v.rend());
#define rvr(v) reverse(v.begin(), v.end());

int gcd(int x, int y)
{
    if(x%y==0) return y;
    else return gcd(y,x%y);
}

int lcm(int x,int y)
{
    return x*y/gcd(x,y);
}

const ll mod = 1e9;
const int N = 2e6+5;


string s1(string a)
{
    string x(a);
    x[1]=a[2];
    x[2]=a[4];
    x[3]=a[1];
    x[4]=a[3];
    return x;
}

string s2(string a)
{
    string x(a);
    x[0]=a[4];
    x[1]=a[0];
    x[5]=a[1];
    x[4]=a[5];
    return x;
}
bool f(string a, string b, int x)
{
    //cout<<a<<" "<<b<<endl;
    if(a==b) return true;
    if(x==5) return false;
    if(f(a,s1(b),x+1)) return true;
    if(f(a,s2(b),x+1)) return true;
    return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    while(cin>>s)
    {
        string a =  s.substr(0,6);
        string b = s.substr(6);
        if(f(a,b,0))
        cout<<"TRUE"<<endl;
        else
        cout<<"FALSE"<<endl;
    }
    return 0;
}
