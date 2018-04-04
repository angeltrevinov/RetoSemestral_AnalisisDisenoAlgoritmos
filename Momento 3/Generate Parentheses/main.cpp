/*
  Angel Odiel Treviño Villanueva
  A01336559
  Reto Semestral: M3E Fecha: 4/Abril Materia: Analisis y dDiseño de Algoritmos
*/
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector <string> Respuesta; //guarda todas las soluciones posibles
        string Solucion; //guardar una solucion
        Auxiliar(Solucion, 0, 0, n, Respuesta);
        return Respuesta;
    }
private:
    void Auxiliar(string& Solucion, int OpenP, int CloseP, int n, vector<string>& Respuesta) {
        if (OpenP == n && CloseP == n) { //Cuando ya tenemos el numero de parentesis insertado
            Respuesta.push_back(Solucion);
            return;
        }
        if (OpenP < n) { //cuando faltan de poner parentesis abiertos
            Solucion += '(';
            Auxiliar(Solucion, OpenP + 1, CloseP, n, Respuesta); //llamar otra vez
            Solucion.resize(Solucion.length() - 1);
        }
        if (CloseP < OpenP){ //si se agrego un parentesis abierto, agregar uno cerrado
            Solucion += ')';
            Auxiliar(Solucion, OpenP, CloseP +1, n, Respuesta); //llamar otra vez
            Solucion.resize(Solucion.length() - 1);
        }
    }
};
