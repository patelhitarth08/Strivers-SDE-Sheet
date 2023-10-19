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

class ListNode
{
public:
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *middleNode(ListNode *head)
{
      int n = 0;
      ListNode *list = head;

      while (list != NULL)
      {
            list = list->next;
            n++;
      }

      n = n / 2;
      n++;
      cout << n << endl;
      int count = 0;
      list = head;
      while (count < n - 1)
      {
            list = list->next;
            count++;
      }

      return list;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      ListNode *head = new ListNode(1);
      head->next = new ListNode(2);
      head->next->next = new ListNode(3);
      head->next->next->next = new ListNode(4);
      head->next->next->next->next = new ListNode(5);

      ListNode *middle = middleNode(head);

      cout << "The middle node value is: " << middle->val << endl;

      return 0;
}
