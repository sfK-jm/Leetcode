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
    ListNode* deleteDuplicates(ListNode* head) {
        // 주어진 연결리스트의 헤드가 nullptr인 경우 빈리스트이므로 nullptr을 반환
        if (head == nullptr)
            return nullptr;
        
        // 현재 노드를 가르키는 포인터 curr을 헤드로 초기화
        ListNode* curr = head;
        
        while (curr->next != nullptr){
            // 현재노드 curr와  다음 노드 curer->next의 값이 같은 경우 <중복 발생>
            if (curr->val == curr->next->val){
                // 다음노드를 삭제하고 현재 노드의 next포인터를 다음 다음 노드로 연결
                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
            } else {
                curr = curr -> next;
            }
        }
        return head;
    }
};