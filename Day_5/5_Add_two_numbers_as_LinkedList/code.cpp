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

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{

      int carry = 0;
      ListNode *sum = new ListNode;
      ListNode *sumhead = sum;

      sum->next = NULL;

      while (l1 != NULL || l2 != NULL)
      {
            ListNode *temp = new ListNode;

            int num1 = 0, num2 = 0;

            if (l1 != NULL)
            {
                  num1 = l1->val;
                  l1 = l1->next;
            }

            if (l2 != NULL)
            {
                  num2 = l2->val;
                  l2 = l2->next;
            }

            int num = num1 + num2 + carry;
            carry = num / 10;
            num = num % 10;

            temp->val = num;
            sum->next = temp;
            sum = sum->next;
      }
      if (carry != 0)
      {
            ListNode *temp = new ListNode;
            temp->val = carry;
            sum->next = temp;
      }
      sumhead = sumhead->next;
      return sumhead;
}

signed main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);

      ListNode *l1 = new ListNode(2);
      l1->next = new ListNode(4);
      l1->next->next = new ListNode(3);

      // Create the second linked list representing a number (e.g., 465)
      ListNode *l2 = new ListNode(5);
      l2->next = new ListNode(6);
      l2->next->next = new ListNode(4);

      // Print the first number
      cout << "Number 1: ";
      ListNode *current1 = l1;
      while (current1 != nullptr)
      {
            cout << current1->val;
            if (current1->next != nullptr)
            {
                  cout << " -> ";
            }
            current1 = current1->next;
      }
      cout << endl;

      // Print the second number
      cout << "Number 2: ";
      ListNode *current2 = l2;
      while (current2 != nullptr)
      {
            cout << current2->val;
            if (current2->next != nullptr)
            {
                  cout << " -> ";
            }
            current2 = current2->next;
      }
      cout << endl;

      // Call the function to add the two numbers and get the result
      ListNode *sum = addTwoNumbers(l1, l2);

      // Print the result
      cout << "Sum of Numbers 1 and 2: ";
      ListNode *currentSum = sum;
      while (currentSum != nullptr)
      {
            cout << currentSum->val;
            if (currentSum->next != nullptr)
            {
                  cout << " -> ";
            }
            currentSum = currentSum->next;
      }
      cout << endl;

      return 0;
}
