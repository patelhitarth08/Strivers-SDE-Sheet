#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<pii>
#define ff first
#define ss second
#define forn(i, a, n) for (int i = a; i < n; i++)
#define pb push_back
#define endl "\n"
#define MOD 1000000007
#define MAX 100005
#define int ll

double solve(double x, int n)
{
      if (n == 0)
            return 1;
      double half = solve(x, n / 2);
      if (n % 2)
            return half * half * x;
      else
            return half * half;
}

double myPow(double x, int n)
{
      double ans = solve(x, abs(n));
      if (n < 0)
            return 1 / ans;
      return ans;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      cout << "2.1^10 = " << myPow(2.1, 10) << endl;
      cout << "5^-3 = " << myPow(5, -3) << endl;
      cout << "6^3 = " << myPow(6, 3) << endl;

      return 0;
}
