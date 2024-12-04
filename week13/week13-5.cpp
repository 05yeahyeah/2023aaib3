// week13-5.cpp 學習計畫 Linked List 第一題
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * ans = new ListNode(); //準備好新的 ListNode()
        ListNode * now = ans; //現在要處理的 ListNode 是 ans 往下走
        while(list1 != nullptr || list2 != nullptr){ // 只要一個還有值
            if(list1==nullptr){
                now->next = list2;
                list2 = nullptr;
            }
            else if(list2==nullptr){
                now->next = list1;
                list1 = nullptr;
            }
            else{
                if(list1->val < list2->val){
                    now->next = new ListNode(list1->val);
                    list1 = list1->next;
                }
                else{
                    now->next = new ListNode(list2->val);
                    list2 = list2->next;
                }
                now = now->next;
            }
        }
        return ans->next;
    }
};
