/*
  Angel Odiel Treviño Villanueva
  A01336559
  Tarea: 2E  Fecha: 3/Marzo  Materia: Reto Semestral
*/
#include <bits/stdc++.h>

using namespace std;

string angryProfessor(int k, vector <int> a) {
    int SumY = 0; // sum  of all the students that have arrive
    for(int i = 0; i < a.size(); i++){
        if(a[i] <= 0){ // checks if they are on time
            SumY++;
            if(SumY >= k){ //if its bigger than k then class is not cancel
                return "NO";
            }
        }
    }
    return "YES"; // is cancel
}

int main() {
    int t;// number of cases
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n; //number of students
        int k; // number of how many students needed to arrive
        cin >> n >> k;
        vector<int> a(n); // list of the students
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        string result = angryProfessor(k, a);
        cout << result << endl;
    }
    return 0;
}
