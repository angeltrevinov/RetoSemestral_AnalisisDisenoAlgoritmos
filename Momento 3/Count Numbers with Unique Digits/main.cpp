/*
  Angel Odiel Treviño Villanueva
  A01336559
  Reto Semestral: M3B  Fecha: 3/Abril  Materia: Analisis y Diseño de Algoritmos
*/
class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n == 0){ //para cuando es 10^0
            return 1;
        }else if(n == 1){ //para cuando es 10^1
            return 10;
        }else{
            int Digitos = 10; //este es la cantidad de numeros posibles, siendo del 0 al 9 los primeros que puedes utilizar
            int Otros = 9;      //cantidad de numeros que puedes utilizar en decenas, siendo del 1 al 9

            for(int i = 9; i > 10-n && i > 0; i--){ // si ya encontramos el numero que nos pide o es mayor de 10 digitos
                Otros = Otros*i; //depende de cuantas posiciones te quedan

                Digitos = Digitos + Otros; //sumatoria
            }

            return Digitos;
        }
    }
};
