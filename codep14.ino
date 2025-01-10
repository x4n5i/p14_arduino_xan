/********************************************************************************************
* Práctica nº 14 de Entradas Dixitais.
* Realización de práctica anterior engadindo un pulsador que inhabilite o programa orixinal.
* O programa debe parar totalmente cando prememos o pulsador.
* Cando soltamos o pulsador, o programa deterase por completo.
*
*
********************************************************************************************
*
* Xan Pérez Iglesias
* 10/01/2025
*
********************************************************************************************/

#define L_AMARELO 13
#define L_VERDE   12
#define PULSADOR  10

int tempo = 4000;
bool pulsador = 0;

void setup(){
  pinMode(PULSADOR, INPUT);
  pinMode(L_VERDE, OUTPUT);
  pinMode(L_AMARELO, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop(){
  pulsador = digitalRead(PULSADOR);
  if(pulsador != true){
    leds();
  } else {
         digitalWrite(L_AMARELO, LOW);
         digitalWrite(L_VERDE, LOW);
         } 
}
    
void leds() {
  digitalWrite(L_AMARELO, HIGH);
  delay(tempo); //Tempo declarado en int, 4 segundos
  digitalWrite(L_VERDE, LOW);
  delay(tempo); //Tempo declarado en int, 4 segundos
  digitalWrite(L_AMARELO, LOW);
  delay(tempo/2); //Divide tempo entre 2
  digitalWrite(L_VERDE, HIGH);
  delay(tempo/2); //Divide tempo entre 2
} 
