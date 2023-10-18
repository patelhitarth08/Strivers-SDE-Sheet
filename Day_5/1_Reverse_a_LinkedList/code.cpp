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

ListNode *reverseList(ListNode *head)
{
      ListNode *current = head;
      ListNode *prev = NULL, *next = NULL;

      while (current != NULL)
      {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
      }
      ListNode *reverse = prev;
      return prev;
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

      cout << "Original Linked List: ";
      ListNode *current = head;
      while (current != NULL)
      {
            cout << current->val << " -> ";
            current = current->next;
      }
      cout << "NULL" << endl;

      ListNode *reversedHead = reverseList(head);

      cout << "Reversed Linked List: ";
      current = reversedHead;
      while (current != NULL)
      {
            cout << current->val << " -> ";
            current = current->next;
      }
      cout << "NULL" << endl;

      return 0;
}
