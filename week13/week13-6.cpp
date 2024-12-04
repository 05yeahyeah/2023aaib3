// week13-6.cpp 學習計畫 Linked List 第2題
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int>a; // 用陣列存 Linked List 的 val值
        while(head != nullptr){
            a.push_back(head->val);
            head = head->next;
        }
        ListNode * ans = new ListNode();
        ListNode * now = ans;
        for(int i=a.size()-1;i>=0;i--){ // 反過來的陣列
            now->next = new ListNode( a[i] );
            now = now->next;
        }
        return ans->next;
    }
};
