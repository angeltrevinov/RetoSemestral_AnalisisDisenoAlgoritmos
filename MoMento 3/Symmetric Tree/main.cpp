/*
  Angel Odiel Treviño Villanueva
  A01336559
  Reto Semestral: M3J Fecha: 2/Abril Materia: Analisis y Diseño de Algoritmos
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
    bool isSymmetric(TreeNode* root) {
        if(root == NULL){  //si el arbol esta vacio
            return true;
        }

        //then check the sides
        return Checking(root -> left, root -> right);
    }

    bool Checking(TreeNode* First, TreeNode* Second){
        if(First == NULL && Second == NULL){ //estan vacio los dos
            return true;
        }else if(!First || !Second){  //uno esta vacio pero el otro no
            return false;
        }

        if(First -> val != Second -> val){ //si sus valores son diferentes
            return false;
        }
        //continue
        return Checking(First->left, Second -> right) && Checking(First -> right, Second -> left);

    }
};
