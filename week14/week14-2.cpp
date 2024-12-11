// week14-2.cpp 學習計畫 Linked List 第3題(差一點就完成了)
// Leetcode 2. Add Two Numbers 兩數相加
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* now = ans;
        int carry=0;
        while( l1 != nullptr || l2 != nullptr ){
            if(l1==nullptr){
                int here = l2->val + carry;
                now -> next = new ListNode( here%10 );//建新 node
                carry = here / 10;
                l2 = l2 -> next;
                now = now -> next;
            }
            else if(l2==nullptr){
                int here = l1->val + carry;
                now -> next = new ListNode( here%10 );//建新 node
                carry = here / 10;
                l1 = l1 -> next;
                now = now -> next;
            }
            else{
                int here = l1->val + l2->val + carry;
                now -> next = new ListNode( here%10 );//建新 node
                carry = here / 10; 
                l1 = l1 -> next; // 下一筆
                l2 = l2 -> next; // 下一筆
                now = now -> next;
            }
        }
        if(carry==1) now -> next = new ListNode( carry ); 
        return ans -> next;
    }
};