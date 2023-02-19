
#include <Servo.h>
Servo servo_Az, servo_El;  // Creamos un objeto de clase "Servo" llamado "myservo" para controlar nuestro servomotor
int potpin = 0;  // Pin analógico al cual conectamos la señal de nuestro potenciómetro
int val;    // variable que contendrá el valor leido en el pin del potenciómetro y posteriormente el valor que escribiremos al servomotor


float elevacion=60;
float azimut=180;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  servo_Az.attach(9);  // Adjuntamos el objeto que creamos al pin 9
  servo_El.attach(9);  // Adjuntamos el objeto que creamos al pin 9

}

void loop() {
  // put your main code here, to run repeatedly:
  print( "Obtención de Datos ...");

  //Sección Rx_Data from Cansat

  data_Cansat=Serial.read();

  //Sección GPS_CanSat  y obtención de Datos: Longitud, Latitud



  
  //Sección GPS_GCS y obtención de Datos: Longitud, Latitud
  
  
  

  //---------------------------Calculo de Azimuth y Elevación-------------------------------------



  //---------------------------------------------------------------------------------------------

  //Sección Motores

  


  servo_Az.write(azimut);
  servo_El.write(elevacion);
  
  //Sección Data_Rx to PC

  Serial.println(data_Cansat);

}
