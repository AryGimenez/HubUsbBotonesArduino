//Pin para identificar que esta activado el USB2
const byte mPin_LedUSB1= 24;
//Pin para identificar que esta activado el USB2
const byte mPin_LedUSB2= 25;

// Guarda El Usb Activo actualemtne
// 1: USB1
// 2: USB2 
byte mNumUsbActivo = 1;  

// Variable que determina se el boton esta pulado
boolean mBotonPulsado = false;

// Pines De Rele
const byte mPin_Rele1= 11;
const byte mPin_Rele2= 10;
const byte mPin_Rele3= 9;
const byte mPin_Rele4= 8;
const byte mPin_Boton=32;


void setup() {
  // put your setup code here, to run once:

  // Coloca los pines de el led como emisor
  pinMode(mPin_LedUSB1, OUTPUT);
  pinMode(mPin_LedUSB1, OUTPUT);

  // Coloca Pin de Boton como Receptor
  pinMode(mPin_Boton, IMPUT);
  
  // Deja el pin de led 
  digitalWrite(mPin_LedUSB1, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:

  mBotonPulsado = digitalRead(mPin_Boton); // Lee si el boton esta precionado

  if(mBotonPulsado == HIGH){
    digitalWrite(mPin_LedUSB2, low);

  }

}

// Metodo Utilizado para determinar que USB Enciendo 
// Este USB recibe por parametro 1 o 2 
// si en un futoro agrego USB Agrego usb que acepta
void encenderUSB (int pNumUSB){

  if (pNumUSB == 1){
    
  }
}