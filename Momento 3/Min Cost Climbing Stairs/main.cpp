/*
  Angel Odiel Treviño Villanueva
  A01336559
  Reto Semestral: M3I Fecha: 2/Abril  Materia: Analisis y Diseño de Algoritmos
*/
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int size = cost.size();

        //puedes empezar en el escalon 0 o 1, entonces se mantiene
        for(int i = 2; i < size; i++){
            cost[i] = cost[i] + min(cost[i-1], cost[i-2]); //to see how many steps I should take to that step
        }

        return min(cost[size-1], cost[size-2]); //result
    }
};
