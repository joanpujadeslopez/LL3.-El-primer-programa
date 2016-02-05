/***************************************************************
**                                                            **
**  S'encén un LED durant un segon, després s'apaga durant un **
**  segon, en repetides ocasions. En aquest Arduino el LED    **
**  està unit al pin digital 13.                              **                             
**                                                            **
**                                                            **
***************************************************************/
//******  Includes  ********************************************


//******  Variables  *******************************************

int ledPin=13;

//s'executa una vegada quan el programa s'inicia
void setup() {           //obre bloc de codi
  pinMode(ledPin, OUTPUT);   //posa el pin 13 com a sortida
                         //tanca bloc de codi
} 
 
//es repeteix una i altra vegada
void loop() {               //obre bloc de codi
  digitalWrite(ledPin, HIGH);   // engega el LED (HIGH es el nivell de tensió)
  delay(1000);              // espera 1 segon
  digitalWrite(ledPin, LOW);    // apaga el LED disminuint la tensió
  delay(1000);              // espera 1 segon
}
  

