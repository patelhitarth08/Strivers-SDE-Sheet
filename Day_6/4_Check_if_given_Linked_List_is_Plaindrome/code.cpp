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
      ListNode *pre = NULL;
      ListNode *next = NULL;
      while (head != NULL)
      {
            next = head->next;
            head->next = pre;
            pre = head;
            head = next;
      }
      return pre;
}

bool isPalindrome(ListNode *head)
{
      if (head == NULL || head->next == NULL)
            return true;
      ListNode *slow = head;
      ListNode *fast = head;
      while (fast->next != NULL && fast->next->next != NULL)
      {
            slow = slow->next;
            fast = fast->next->next;
      }
      slow->next = reverseList(slow->next);
      slow = slow->next;
      while (slow != NULL)
      {
            if (head->val != slow->val)
                  return false;
            head = head->next;
            slow = slow->next;
      }
      return true;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      ListNode *head1 = new ListNode(1);
      head1->next = new ListNode(2);
      head1->next->next = new ListNode(3);
      head1->next->next->next = new ListNode(2);
      head1->next->next->next->next = new ListNode(1);

      cout << "Example 1: Linked List" << endl;
      ListNode *current = head1;
      while (current != NULL)
      {
            cout << current->val << " -> ";
            current = current->next;
      }
      cout << "NULL" << endl;
      cout << (isPalindrome(head1) ? "Palindrome" : "Not Palindrome") << endl;

      cout << endl;

      ListNode *head2 = new ListNode(1);
      head2->next = new ListNode(2);
      head2->next->next = new ListNode(3);
      head2->next->next->next = new ListNode(4);
      head2->next->next->next->next = new ListNode(5);

      cout << "Example 2: Linked List" << endl;
      current = head2;
      while (current != NULL)
      {
            cout << current->val << " -> ";
            current = current->next;
      }
      cout << "NULL" << endl;
      cout << (isPalindrome(head2) ? "Palindrome" : "Not Palindrome") << endl;

      return 0;
}
