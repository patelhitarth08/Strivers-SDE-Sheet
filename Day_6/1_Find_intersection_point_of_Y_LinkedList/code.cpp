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

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
      ListNode *temp = headA;
      long long lA = 0;
      while (temp)
      {
            lA++;
            temp = temp->next;
      }

      temp = headB;
      long long lB = 0;
      while (temp)
      {
            lB++;
            temp = temp->next;
      }

      if (lA < lB)
            swap(headA, headB);

      long long extra = abs(lA - lB);
      while (extra)
      {
            headA = headA->next;
            extra--;
      }

      while (headB && headA)
      {
            if (headA == headB)
                  return headA;
            headA = headA->next;
            headB = headB->next;
      }

      return NULL;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      ListNode *list1 = new ListNode(1);
      list1->next = new ListNode(2);
      list1->next->next = new ListNode(3);

      ListNode *list2 = new ListNode(4);
      list2->next = new ListNode(5);

      list2->next->next = list1->next;

      ListNode *intersectionNode = getIntersectionNode(list1, list2);

      if (intersectionNode != nullptr)
      {
            cout << "Intersection Node Value: " << intersectionNode->val << endl;
      }
      else
      {
            cout << "No intersection found." << endl;
      }

      return 0;
}
