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

int majorityElement(vector<int> &nums)
{
      int n = nums.size();

      int majorityElement;
      int count = 0;
      for (int i = 0; i < n; i++)
      {
            if (count == 0)
            {
                  count++;
                  majorityElement = nums[i];
            }
            else if (majorityElement == nums[i])
                  count++;
            else
                  count--;
      }
      count = 0;
      for (auto c : nums)
            if (c == majorityElement)
                  count++;
      if (count >= (n / 2))
            return majorityElement;
      return -1;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      vector<int> arr = {11, 33, 33, 33, 11};
      int ans = majorityElement(arr);
      cout << "The majority element is: " << ans << endl;

      return 0;
}
