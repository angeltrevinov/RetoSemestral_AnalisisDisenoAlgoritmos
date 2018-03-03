/*
  Angel Odiel Treviño Villanueva
  A01336559
  Problema: 1E Fecha: 4/feb  Materia: RetoSemestrak
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k == 0){//por si la lista esta vacia, si solo hay un nodo o k = 0
            return head;
        }else{//por si hay mas de un nodo en la lista y si hay rotaciones
            ListNode* ultimo;
            int size=1;
            ultimo = head;
            while(ultimo -> next != NULL){//encuentra al ultimo y el tamaño
                ultimo = ultimo->next;
                size++;
            }
            ultimo -> next = head;//crea una lista circular
            k = k%size;//por si las rotaciones se pasan del tamaño de la lista
            while(size > k){ //busca cuantos se movieron
                ultimo = ultimo -> next;
                size--;
            }
            head = ultimo->next; //reasigna el head
            ultimo ->next = NULL; // corta la lista
        }
        return head;
    }
};
