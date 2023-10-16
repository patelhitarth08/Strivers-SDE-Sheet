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

vector<int> majorityElement(vector<int> &nums)
{
      int n = nums.size();

      unordered_map<int, int> freq;
      for (auto c : nums)
            freq[c]++;

      vector<int> ans;
      for (auto c : freq)
      {
            if (c.second > (n / 3))
                  ans.push_back(c.first);
      }
      return ans;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      vector<int> arr = {11, 33, 33, 11, 33, 11};
      vector<int> ans = majorityElement(arr);
      cout << "The majority elements are: ";
      for (auto it : ans)
            cout << it << " ";
      cout << "\n";

      return 0;
}
