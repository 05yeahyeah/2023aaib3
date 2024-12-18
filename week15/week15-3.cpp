// week15-3.cpp 學習計畫 Linked List 第四題
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //上上週的程式，可反過來
        return myReverse(l1);
    }
    ListNode* myReverse(ListNode*l1){ //發明，自訂函式
        vector<int> a;
        while(l1 != nullptr){
            a.push_back( l1->val);
            l1 = l1->next; //下一筆
        }
        ListNode * ans = new ListNode();
        ListNode * now = ans;
        int N = a.size();
        for(int i=N-1;i>=0;i--){
            now->next = new ListNode( a[i] );
            now = now->next;
        }
        return ans->next;
    }
};