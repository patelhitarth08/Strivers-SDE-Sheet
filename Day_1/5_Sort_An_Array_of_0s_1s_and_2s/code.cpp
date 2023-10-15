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

void sortArray(vector<int> &nums)
{
      int n = nums.size();

      int low = 0;
      int mid = 0;
      int high = n - 1;

      while (mid <= high)
      {
            if (nums[mid] == 0)
            {
                  swap(nums[low], nums[mid]);
                  mid++;
                  low++;
            }
            else if (nums[mid] == 1)
                  mid++;
            else
            {
                  swap(nums[mid], nums[high]);
                  high--;
            }
      }
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      vector<int> nums = {0, 2, 1, 2, 0, 1, 1, 0, 2, 1};
      sortArray(nums);
      cout << "After sorting:" << endl;
      for (auto c : nums)
      {
            cout << c << " ";
      }
      cout << endl;
      return 0;
}
