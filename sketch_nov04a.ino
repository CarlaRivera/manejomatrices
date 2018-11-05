#include "m.h"

int sw[3]={7,6,5}; //pines de entrada
float promcol1=0;
float promcol2=0;
float promcol3=0;
float promcol4=0;
float promf1=0;
float promf2=0;
float promf3=0;
float promf4=0;
float promf5=0;
float promf6=0;
float promf7=0;
float promf8=0;
float promf9=0;
float promf10=0;


int i=0; //fila
int j=0; //columna


void setup() {
   Serial.begin(9600);
}

void loop() {
  //para activar los métodos según las combinaciones
if(digitalRead(sw[0])==LOW && digitalRead(sw[1])==LOW && digitalRead(sw[2])==HIGH)
 PromF();
 if(digitalRead(sw[0])==LOW &&  digitalRead(sw[1])==HIGH && digitalRead(sw[2])==LOW)
 PromC();
 if(digitalRead(sw[0])==HIGH &&  digitalRead(sw[1])==LOW && digitalRead(sw[2])==HIGH)
 NAM();
 if(digitalRead(sw[0])==HIGH &&  digitalRead(sw[1])==HIGH && digitalRead(sw[2])==LOW)
 NBM();
}


//metodo para calcular promedio de columnas
void PromC(){
  
     for(;i<10;i++){  //inicia la fila en 0 y recorre una fila hasta llegar a la fila 10
      promcol1=promcol1+matriz[i][0]; // suma los valores de la columna 1 y sus 10 filas
      Serial.println(promcol1/10);
      promcol2=promcol2+matriz[i][1]; // suma los valores de la columna 2 y sus 10 filas
      Serial.println(promcol2/10);
       promcol3=promcol3+matriz[i][2]; // suma los valores de la columna 3 y sus 10 filas
      Serial.println(promcol3/10);
       promcol4=promcol4+matriz[i][3]; // suma los valores de la columna 4 y sus 10 filas
      Serial.println(promcol4/10);
      }
     }



void PromF(){

    for(;i<4;i++){
      promf1=promf1+matriz[0][i];
      Serial.println(promf1/4);
      promf2=promf2+matriz[1][i];
      Serial.println(promf2/4);
       promf3=promf3+matriz[2][i];
      Serial.println(promf3/4);
       promf4=promf4+matriz[3][i];
      Serial.println(promf4/4);
      promf5=promf5+matriz[4][i];
      Serial.println(promf5/4);
      promf6=promf6+matriz[5][i];
      Serial.println(promf6/4);
       promf7=promf7+matriz[6][i];
      Serial.println(promf7/4);
       promf8=promf8+matriz[7][i];
      Serial.println(promf8/4);
       promf9=promf9+matriz[8][i];
      Serial.println(promf9/4);
       promf10=promf10+matriz[9][i];
      Serial.println(promf10/4);
      }
  
  }
  
  
   
 //metodo para calcularel numero mas alto de la matriz 
 void NAM(){
  int maximo =0; //variable que guarda el valor mas alto de la matriz inicializado en 0
  for(int i=0; i<10; i++){  //evalua todas las filas 
    for(int j=0; j<4;j++){  //evalua las columnas
      if(matriz [i][j]>maximo){ //evalua si es mayor o no
        maximo=matriz[i][j]; //si es mayor almacena el valor 
        }
         }
      }
    Serial.print("El valor maximo de la matriz es: ");
       Serial.println(maximo);
       delay(10000);
}
                 
  
//metodo para calcularel numero mas bajo de la matriz
void NBM(){
  int minimo =0; //variable que guarda el valor mas alto de la matriz inicializado en 0
  for(int i=0; i<10; i++){  //evalua todas las filas 
    for(int j=0; j<4;j++){  //evalua las columnas
      if(matriz [i][j]<minimo){ //evalua si es menor o no
        minimo=matriz[i][j]; //si es menor almacena el valor 
        }
         }
         Serial.print("El valor minimo de la matriz es: ");
       Serial.println(minimo);
       delay(10000);
       }
}



  
