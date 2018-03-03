/*
  Angel Odiel Treviño Villanueva
  A01336559
  Problema: 1J  Fecha: 29/Enero Materia: Reto Semestral 
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 1; // para saber el tamaño
        ListNode* here;
        here = head;
        while(here -> next != NULL){//para buscar el tamaño del linkedlist
            here = here -> next;
            size++;
        }

        int cont = size - n;//cuantos nodos me devo de mover
        here = head;

        if(cont == 0){// quieres borrar el primer nodo
            head = head -> next;
            delete here;
        }else{//por si el nodo que se desea borrar esta al final o en medio
            ListNode *erase;
            while(cont > 1){
                here = here -> next;
                cont--;
            }

            erase = here -> next;
            here -> next = erase -> next;
            delete erase;
        }
        return head;
    }
};
