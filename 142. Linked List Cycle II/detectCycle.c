/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    int pos = 0;
    
    if(head == NULL){
            return NULL;
    }
    struct ListNode *temp = head->next;
    struct ListNode *start = head;
    
    
        
    for(int i = 0 ; i < pow(10,4) ; i++){
        if(-pow(10,5) > (head-> val) || (head -> val) > pow(10,5)){
            return NULL; //error check.
        }
        if(head->next == NULL || head == NULL ){
            return NULL;
        }
        else if( (head -> next) > (temp -> next)){ // gotcha.
            break;
        }
        
        else if( (head -> next) == (temp -> next)){
            return temp;
        }
        else if( (head->next) == head){
            return head;
        }
        
        
        head = head -> next;
        temp = temp -> next;
        pos++;
        
    }   
    for(int i = 0 ; i <= pos ; i++){
        if((temp->next) == start){
            return start;
        }
        else{
            start = start -> next;
        }
    }
    return NULL;
}
