/*
  Angel Odiel Treviño Villanueva
  A01336559
  Reto Semestral: M3I Fecha: 2/Abril  Materia: Analisis y Diseño de Algoritmos
*/
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int size = cost.size();
        vector <int> Store(size); //crear un nuevo vector para aplicar programacion dinamica

        //puedes empezar en el escalon 0 o 1
        Store[0] = cost[0];
        Store[1] = cost[1];

        for(int i = 2; i < size; i++){
            Store[i] = cost[i] + min(Store[i-1], Store[i-2]); //to see how many steps I should take
        }

        return min(Store[size-1], Store[size-2]); //result
    }
};
