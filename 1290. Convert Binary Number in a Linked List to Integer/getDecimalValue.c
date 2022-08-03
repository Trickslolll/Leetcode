/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


int getDecimalValue(struct ListNode* head){
    if(head == NULL){
        return 0;
    }
    struct ListNode *start = head;
    int count = -1 , result = 0;
    while(count <= 30){ 
        if((head->val == 0 || head->val == 1)){
            count++;
        }
        if(head->next == NULL){
            break;
        }
        head = head->next;
    }
    while(count >= 0){
        result += (start->val)*pow(2,count);
        count-=1;
        start = start->next;
    }
    return result;
    
}
