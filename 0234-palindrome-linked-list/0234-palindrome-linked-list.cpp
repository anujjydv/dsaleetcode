/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        vector<int> v;
        while(temp != NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        temp = head;
        while(temp != NULL){
            if(temp->val != v.back()) return false;
            temp = temp->next;
            v.pop_back();
        }
        return true;
    }
};