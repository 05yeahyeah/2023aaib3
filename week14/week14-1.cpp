// week14-1.cpp 學習計畫 Linked List 第3題(寫一半)
// Leetcode 2. Add Two Numbers
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* now = ans;
        while( l1 != nullptr ){
            now -> next = new ListNode( l1 -> val ); //建新 node
            l1 = l1 -> next;
            now = now -> next;
        }
        return ans -> next;
    }
};