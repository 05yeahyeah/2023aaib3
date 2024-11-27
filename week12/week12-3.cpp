// week12-3.cpp 學習計畫 Link list 第一題
 // Leetcode 21. Merge Two Sorted Lists
class Solution {
public: // *代表指標
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans =  new ListNode(); //空包彈
        ListNode* now = ans; // 答案放在now裡面
        while(list1 != nullptr || list2 != nullptr){
            if(list1==nullptr){
                now->next = list2;
                list2 = nullptr;
            }
            else if(list2==nullptr){
                now->next = list1;
                list1 = nullptr;
            }
            else if(list1->val < list2->val){ //list1是小的
                now->next = new ListNode(list1->val); //答案放在now的下一筆，放小的
                list1 = list1->next; // list1 換下一筆
                now = now->next; // 現在也換下一筆
            }
            else {
                now->next = new ListNode(list2->val); //答案放在now的下一筆，放小的
                list2 = list2->next; // list1 換下一筆
                now = now->next; // 現在也換下一筆
            }
        }
        return ans->next; //空包彈的下一筆，才是真正的答案
    }
};
