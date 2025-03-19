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
int n;
int a[15][3];
int b[15];
bool update()
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(b[i]<=a[i][0])
        c++;
    }
    if(c==n) return true;

    for(int i=0;i<n;i++)
    {
        if(b[i]==a[i][0]+a[i][1] || (b[i]==a[i][0] && n<=c*2))
        b[i]=1;
        else
        b[i]++;
    }
    return false;
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc=1;
    while(1)
    {
        
        cin>>n;
        if(n==0)
        break;

        int l=1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i][0]>>a[i][1]>>a[i][2];
            b[i]=a[i][2];
            l=lcm(l,a[i][0]+a[i][1]);
        }

        bool found=0;
        for(int i=1;i<=l;i++)
        {
            found=update();
            if(found)
            {
                printf("Case %d: %d\n",tc++,i);
                break;
            }
        }
        if(!found)
        {
            printf("Case %d: -1\n",tc++);
        }
    }
    return 0;
}
