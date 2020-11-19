//Pin para identificar que esta activado el USB2
const int mPin_LedUSB1= 24;
//Pin para identificar que esta activado el USB2
const int mPin_LedUSB2= 25;

// Guarda El Usb Activo actualemtne
// 1: USB1
// 2: USB2 
int mNumUsbActivo = 1;  

const int mPin_Rele1= 11;
const int mPin_Rele2= 10;
const int mPin_Rele3= 9;
const int mPin_Rele4= 8;



void setup() {
  // put your setup code here, to run once:

  // Coloca los pines de el led como emisor
  pinMode(mPin_LedUSB1, OUTPUT);
  pinMode(mPin_LedUSB1, OUTPUT);
  // Deja el pin de led 
  digitalWrite(mPin_LedUSB1, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:

}
