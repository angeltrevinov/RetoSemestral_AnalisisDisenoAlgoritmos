/*
  Angel Odiel Treviño Villanueva
  A01336559
  Problema:1A  Fecha:5/feb  Materia: Reto Semestral 
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        //sorted linled list
        if(head != NULL && head->next != NULL){//si la lista tiene mas de un solo nodo
            ListNode* original;
            original = head;
            bool cambiar = true; //si hubo una eliminacion en la lista
            while( original -> next != NULL ){//llega al ultimo
                cambiar = true;
                if(original->val == original->next->val){//compara el de alado
                    ListNode* borrar; //proceso de borrar
                    borrar = original ->next;
                    original ->next = borrar ->next;
                    borrar;
                    cambiar = false;
                }
                if(cambiar){
                  original = original -> next;
                }
            }
        }
        return head;
    }
};
