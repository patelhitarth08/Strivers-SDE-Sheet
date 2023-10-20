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

bool hasCycle(ListNode *head)
{
      ListNode *slow = head;
      ListNode *fast = head;

      while (fast != NULL && fast->next != NULL)
      {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                  return true;
      }

      return false;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      ListNode *head = new ListNode(1);
      ListNode *second = new ListNode(2);
      ListNode *third = new ListNode(3);
      ListNode *fourth = new ListNode(4);

      head->next = second;
      second->next = third;
      third->next = fourth;
      fourth->next = second;

      if (hasCycle(head))
      {
            cout << "The linked list has a cycle." << endl;
      }
      else
      {
            cout << "The linked list does not have a cycle." << endl;
      }

      delete head;
      delete second;
      delete third;
      delete fourth;

      return 0;
}
