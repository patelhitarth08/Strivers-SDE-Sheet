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

int uniquePaths(int m, int n)
{
      int N = m + n - 2;
      int r = min(m - 1, n - 1);
      double ans = 1;
      for (int i = 1; i <= r; i++)
            ans = ans * (N - r + i) / i;
      return (int)ans;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      cout << "The total number of Unique Paths for m = 2 and n = 3 are " << uniquePaths(2, 3) << "." << endl;
      cout << "The total number of Unique Paths for m = 5 and n = 10 are " << uniquePaths(5, 10) << "." << endl;
      cout << "The total number of Unique Paths for m = 2 and n = 9 are " << uniquePaths(2, 9) << "." << endl;
      cout << "The total number of Unique Paths for m = 3 and n = 7 are " << uniquePaths(3, 7) << "." << endl;

      return 0;
}
