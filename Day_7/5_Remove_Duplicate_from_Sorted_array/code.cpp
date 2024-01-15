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

int removeDuplicates(vector<int> &nums)
{
      int n = nums.size();

      set<int> ans_set;
      for (int i = 0; i < n; i++)
            ans_set.insert(nums[i]);

      int m = ans_set.size();
      vector<int> ans;
      for (auto it = ans_set.begin(); it != ans_set.end(); ++it)
            ans.push_back(*it);

      nums = ans;
      return ans.size();
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      vector<int> nums = {1, 1, 2, 2, 3, 4, 5, 5, 5, 6};

      int newSize = removeDuplicates(nums);

      cout << "New size of array after removing duplicates: " << newSize << endl;

      cout << "Modified array without duplicates: ";
      for (int i = 0; i < newSize; ++i)
      {
            cout << nums[i];
            if (i < newSize - 1)
                  cout << ", ";
      }
      cout << endl;

      return 0;
}
