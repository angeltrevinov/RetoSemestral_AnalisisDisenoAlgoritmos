/*
  Angel Odiel Treviño Villanueva
  A01336559
  Problema: 2H  Fecha: 3/Marzo Materia: Reto Semestral
*/

#include <bits/stdc++.h>
#include <climits>

using namespace std;

vector <int> floyd(int n, vector < vector<int> > edges, vector < vector<int> > queries) {
    vector <int> results; // to store the results
    int Matrix[n][n]; //this one is the one where floyd is gonna be applied

    //fill the matrix with the data in edges
    for(int i = 0; i < n; i++){
     Matrix[i][i] = 0;
    for(int j = i + 1; j < n; j++){
       Matrix[j][i] = Matrix[i][j] = INT_MAX;
     }
    }

     for(int i = 0; i < edges.size(); i++){
        Matrix[ edges[i][0] -1][ edges[i][1] -1] = edges[i][2];
    }


    //floyd function seen in class
    for(int k = 0; k < n; k++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(Matrix[i][k] != INT_MAX && Matrix[k][j] != INT_MAX){
                    if(Matrix[i][k] + Matrix[k][j] < Matrix[i][j]){
                        Matrix[i][j] = Matrix[i][k]+Matrix[k][j];
                    }
                }
            }
        }
    }

    //now a for to store the results
    for(int i = 0; i < queries.size(); i++){
        if(Matrix[ queries[i][0] -1][queries[i][1]-1] == INT_MAX){
            results.push_back(-1);
        }else{
           results.push_back(Matrix[ queries[i][0]-1 ][ queries[i][1]-1 ]);
        }
    }
    return results;
}

int main() {
    int n; // the number of nodes
    int m; // the number of edges
    cin >> n >> m;
    vector< vector<int> > edges(m,vector<int>(3));// it only has the inputs of the edges
    for(int edges_i = 0;edges_i < m;edges_i++){
       for(int edges_j = 0;edges_j < 3;edges_j++){
          cin >> edges[edges_i][edges_j];
       }
    }

    int q; // number of queries
    cin >> q;
    vector< vector<int> > queries(q,vector<int>(2));
    for(int queries_i = 0;queries_i < q;queries_i++){
       for(int queries_j = 0;queries_j < 2;queries_j++){//fills the cases that the user wants
          cin >> queries[queries_i][queries_j];
       }
    }
    vector <int> result = floyd(n, edges, queries);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}
