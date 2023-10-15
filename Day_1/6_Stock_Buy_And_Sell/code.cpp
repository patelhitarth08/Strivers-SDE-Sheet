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

int maxProfit(vector<int> &prices)
{
      int min = INT_MAX;
      int diff = 0;
      int n = prices.size();
      for (int i = 0; i < n; i++)
      {
            if (prices[i] < min)
                  min = prices[i];

            if (prices[i] - min > diff)
                  diff = prices[i] - min;
      }

      return diff;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      vector<int> arr = {7, 1, 5, 3, 6, 4};
      int maxPro = maxProfit(arr);
      cout << "Max profit is: " << maxPro << endl;

      return 0;
}
