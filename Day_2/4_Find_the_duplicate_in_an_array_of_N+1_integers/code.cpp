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

int findDuplicate(vector<int> &nums)
{
      int n = nums.size();
      vector<int> freq(n, 0);
      for (auto c : nums)
            freq[c]++;

      for (int i = 1; i < n; i++)
            if (freq[i] > 1)
                  return i;

      return n;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      vector<int> nums;
      nums = {1, 3, 4, 2, 2};
      cout << "The duplicate element is " << findDuplicate(nums) << endl;
      return 0;
}
