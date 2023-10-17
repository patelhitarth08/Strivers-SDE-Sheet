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

      void merge(vector<int> &nums, int low, int mid, int high)
      {
            vector<int> temp;
            int i = low;
            int j = mid + 1;

            while (i <= mid && j <= high)
            {
                  if (nums[i] < nums[j])
                  {
                        temp.push_back(nums[i]);
                        i++;
                  }
                  else
                  {
                        temp.push_back(nums[j]);
                        j++;
                  }
            }

            while (i <= mid)
            {
                  temp.push_back(nums[i]);
                  i++;
            }

            while (j <= high)
            {
                  temp.push_back(nums[j]);
                  j++;
            }

            for (int k = low; k <= high; k++)
                  nums[k] = temp[k - low];
      }
      int countPairs(vector<int> &nums, int low, int mid, int high)
      {
            int j = mid + 1;
            int count = 0;
            for (int i = low; i <= mid; i++)
            {
                  while (j <= high && static_cast<long long>(nums[i]) > 2LL * nums[j])
                        j++;
                  count += (j - (mid + 1));
            }
            return count;
      }
      int mergeSort(vector<int> &nums, int low, int high)
      {
            int count = 0;
            if (low >= high)
                  return count;
            int mid = (low + high) / 2;
            count += mergeSort(nums, low, mid);
            count += mergeSort(nums, mid + 1, high);
            count += countPairs(nums, low, mid, high);
            merge(nums, low, mid, high);
            return count;
      }

      int reversePairs(vector<int> &nums)
      {
            int n = nums.size();
            return mergeSort(nums, 0, n - 1);
      }
      signed main()
      {
            ios_base::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            vector<int> nums = {4, 1, 2, 3, 1};
            int n = 5;
            int cnt = reversePairs(nums);
            cout << "The number of reverse pair is: "
            << cnt << endl;
            return 0;
      }
