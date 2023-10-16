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

vector<int> findMissingRepeatingNumbers(vector<int> &nums)
{
      int n = nums.size();
      int originalSum = ((n) * (n + 1)) / 2;
      int currentSum = 0;
      for (auto c : nums)
            currentSum += c;
      int XMinusY = currentSum - originalSum;

      int originalSquareSum = ((n) * (n + 1) * (2 * n + 1)) / 6;
      int currentSquareSum = 0;
      for (auto c : nums)
            currentSquareSum += (c * c);

      int XsMinusYs = currentSquareSum - originalSquareSum;
      int XPlusY = XsMinusYs / XMinusY;
      int x = (XPlusY + XMinusY) / 2;
      int y = XPlusY - x;

      return {x, y};
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
      vector<int> ans = findMissingRepeatingNumbers(a);
      cout << "The repeating and missing numbers are: {"
           << ans[0] << ", " << ans[1] << "}\n";
      return 0;
}
