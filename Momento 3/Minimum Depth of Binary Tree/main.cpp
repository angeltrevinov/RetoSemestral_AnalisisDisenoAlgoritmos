/*
  Angel Odiel Treviño Villanueva
  A01336559
  Reto Semestral: M3PI  Fecha: 11/Abril Materia: Analisis y Diseño de Algoritmos
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
    int minDepth(TreeNode* root) {
        if(!root){ //si esta vacio el arbol
            return 0;
        }

        //existe un nodo y solamente existe un caminog
        if(root -> left == NULL){ //si esta vacio a la izquierda
            return 1 + minDepth(root -> right); // vamos a ver que hay en la derecha
        }

        if(root -> right == NULL){ //si esta vacio en la derecha
            return 1 + minDepth(root -> left); //veremos que hay en la izquierda
        }

        //si hay dos caminos, checar cual es el minimo entre ellos
        return 1 + min(minDepth(root ->left), minDepth(root -> right));

    }
};
