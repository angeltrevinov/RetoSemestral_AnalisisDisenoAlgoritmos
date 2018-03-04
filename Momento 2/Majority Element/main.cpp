/*
  Angel Odiel Treviño Villanueva
  A01336559
  Tarea: 2C Fecha: 4/Marzo  Materia: Reto Semestral
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int repetition = nums[0]; // to store the one we are checking
        int cont = 1; // to count the times it repeats itself

        //to check the repetitions of each number
        for(int i = 1; i < nums.size(); i++){
            if(cont == 0 ){// not that one so lets change
                repetition = nums[i];
                cont++;
            }else if(repetition == nums[i]){// a repetition
                cont++;
            }else{// not a repetition
                cont--;
            }
        }
        return repetition;
    }
};
