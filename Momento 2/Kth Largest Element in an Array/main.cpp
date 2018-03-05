/*
  Angel Odiel Treviño Villanueva
  A01336559
  Tarea: 2G Fecha: 4/Marzo  Materia: Reto Semestral
*/
#include <vector>

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end()); // to sort the vector from smallest to biggest
        return nums[nums.size()-k]; //get the kths largest number0
    }
};
