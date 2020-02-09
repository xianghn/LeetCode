
// Definition for singly-linked list.
#include <set>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode * cur;
        cur  = head;

        std::set<ListNode*> arr;

        while(cur)
        {
            std::set<ListNode*>::iterator it = arr.find(cur);  
            if(it != arr.end())
                return true;
            else
                arr.insert(cur);

            cur = cur->next;
        }
        return false;
    }
};