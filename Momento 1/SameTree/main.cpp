/*
  Angel Odiel Treviño Villanueva
  A01336559
  Problema: 1I Fecha:3/feb  Materia: Reto Semestral
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL || q == NULL){//por si no existe un nodo
            return p==q;
        }else if(p->val != q->val){//si los dos valores del nodo son diferentes
            return false;
        }else{//ese nodo es verdadero, ahora checa los demas
            return true && isSameTree(p->left, q ->left) && isSameTree(p->right, q->right);
        }
    }
};
