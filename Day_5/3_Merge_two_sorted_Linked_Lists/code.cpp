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

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{

      if (!list1 && !list2)
            return NULL;

      if (!list1 || !list2)
      {
            if (!list1)
                  return list2;
            else
                  return list1;
      }

      ListNode *mergedList = list1->val < list2->val ? list1 : list2;
      if (list1->val < list2->val)
            list1 = list1->next;
      else
            list2 = list2->next;

      ListNode *head = mergedList;

      while (list2 != NULL && list1 != NULL)
      {
            ListNode *temp;

            if (list1->val < list2->val)
            {
                  temp = list1;
                  mergedList->next = temp;
                  mergedList = mergedList->next;
                  list1 = list1->next;
            }

            else
            {
                  temp = list2;
                  mergedList->next = temp;
                  mergedList = mergedList->next;
                  list2 = list2->next;
            }
      }

      while (list1 != NULL)
      {
            ListNode *temp;
            temp = list1;
            mergedList->next = temp;
            mergedList = mergedList->next;
            list1 = list1->next;
      }

      while (list2 != NULL)
      {
            ListNode *temp;
            temp = list2;
            mergedList->next = temp;
            mergedList = mergedList->next;
            list2 = list2->next;
      }

      return head;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      ListNode *list1 = new ListNode(1);
      list1->next = new ListNode(3);
      list1->next->next = new ListNode(5);

      ListNode *list2 = new ListNode(2);
      list2->next = new ListNode(4);
      list2->next->next = new ListNode(6);

      cout << "List 1: ";
      ListNode *current = list1;
      while (current != nullptr)
      {
            cout << current->val;
            if (current->next != nullptr)
            {
                  cout << " -> ";
            }
            current = current->next;
      }
      cout << endl;

      cout << "List 2: ";
      current = list2;
      while (current != nullptr)
      {
            cout << current->val;
            if (current->next != nullptr)
            {
                  cout << " -> ";
            }
            current = current->next;
      }
      cout << endl;

      ListNode *mergedList = mergeTwoLists(list1, list2);

      cout << "Merged Linked List: ";
      while (mergedList != nullptr)
      {
            cout << mergedList->val;
            if (mergedList->next != nullptr)
            {
                  cout << " -> ";
            }
            mergedList = mergedList->next;
      }
      cout << endl;

      return 0;
}
