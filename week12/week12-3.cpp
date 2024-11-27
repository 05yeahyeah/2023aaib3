// week12-3.cpp �ǲ߭p�e Link list �Ĥ@�D
 // Leetcode 21. Merge Two Sorted Lists
class Solution {
public: // *�N�����
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans =  new ListNode(); //�ť]�u
        ListNode* now = ans; // ���ש�bnow�̭�
        while(list1 != nullptr || list2 != nullptr){
            if(list1==nullptr){
                now->next = list2;
                list2 = nullptr;
            }
            else if(list2==nullptr){
                now->next = list1;
                list1 = nullptr;
            }
            else if(list1->val < list2->val){ //list1�O�p��
                now->next = new ListNode(list1->val); //���ש�bnow���U�@���A��p��
                list1 = list1->next; // list1 ���U�@��
                now = now->next; // �{�b�]���U�@��
            }
            else {
                now->next = new ListNode(list2->val); //���ש�bnow���U�@���A��p��
                list2 = list2->next; // list1 ���U�@��
                now = now->next; // �{�b�]���U�@��
            }
        }
        return ans->next; //�ť]�u���U�@���A�~�O�u��������
    }
};
