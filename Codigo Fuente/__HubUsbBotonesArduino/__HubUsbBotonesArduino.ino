//Pin para identificar que esta activado el USB2
const byte mPin_LedUSB1= 16;
//Pin para identificar que esta activado el USB2
const byte mPin_LedUSB2= 15;

// Guarda El Usb Activo actualemtne
// 1: USB1
// 2: USB2 
byte mNumUsbActivo = 1;  

// Variable que determina se el boton esta pulado
boolean mBotonPulsado = false;

const byte mPin_Boton= 2;


void setup() {
  Serial.begin(9600);
  

  // Coloca los pines de el led como emisor
  
  pinMode(mPin_LedUSB1, OUTPUT);
  pinMode(mPin_LedUSB2, OUTPUT);

  // Coloca Pin de Boton como Receptor
  pinMode(mPin_Boton, INPUT);
  
  // Deja el pin de led 
  digitalWrite(mPin_LedUSB1, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  

 // El Pulsador que use es normamente Cerrado
  mBotonPulsado = digitalRead(mPin_Boton); // Lee el pien para determinar si se pulso el boton
  
  if(mBotonPulsado == LOW){   

    if (mNumUsbActivo == 1)
      mNumUsbActivo = 2;
    else
      mNumUsbActivo = 1;  
    
    encenderUSB(mNumUsbActivo);

    //Establese un tiempito para que soltar el boton
    delay(1000);
    delay(1000);
    delay(1000);
    delay(1000);

  }

}

// Metodo Utilizado para determinar que USB Enciendo 
// Este USB recibe por parametro 1 o 2 
// si en un futoro agrego USB Agrego usb que acepta
void encenderUSB (int pNumUSB){

  if (pNumUSB == 1){
    digitalWrite(mPin_LedUSB2, LOW); // Apaga el led 2
    digitalWrite(mPin_LedUSB1, HIGH); // Enciende el Led 1
  }else{
    digitalWrite(mPin_LedUSB2, HIGH); // Apaga el led 2
    digitalWrite(mPin_LedUSB1, LOW); // Enciende el Led 2
  }
}
