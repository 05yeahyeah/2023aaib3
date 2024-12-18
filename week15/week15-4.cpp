// week15-4.cpp 學習計畫 Linked List 第四題
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //上上週的程式，可反過來
        l1 = myReverse(l1);
        l2 = myReverse(l2);

        ListNode * ans = new ListNode();
        ListNode * now = ans;
        int carry=0;
        while(l1 != nullptr || l2!=nullptr){
            if(l1==nullptr){
                int here = l2->val + carry;
                now->next = new ListNode( here%10 );
                carry = here / 10;// 只留進位的部分
                l2 = l2->next;
                now = now->next;
            }
            else if(l2==nullptr){
                int here = l1->val + carry;
                now->next = new ListNode( here%10 );
                carry = here / 10;// 只留進位的部分
                l1 = l1->next;
                now = now->next;
            }
            else{
                int here = l1->val + l2->val + carry;
                now->next = new ListNode( here%10 );
                carry = here / 10;// 只留進位的部分
                l1 = l1->next;
                l2 = l2->next;
                now = now->next;
            }
        }
        return myReverse(ans->next);
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
        return (ans->next);
    }
};