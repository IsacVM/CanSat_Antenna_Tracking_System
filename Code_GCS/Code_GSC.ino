
#include <Servo.h> // libreria para Servos
Servo servo_Az, servo_El;  // Creamos un objeto de clase "Servo" llamado "myservo" para controlar nuestro servomotor
int servoPin_Az =  ; // variable que almacena el numero del pin PWM del arduino donde esta conectado el servo_Az
int servoPin_El =  ; // variable que almacena el numero del pin PWM del arduino donde esta conectado el servo_El
float servoPos_Az ; // variable que almacena el valor del angulo de azimuth
float servoPos_El ; // variable que almacena el valor del angulo de elevation

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servo_Az.attach(servoPin_Az);  // Adjuntamos el objeto que creamos al pin -- 
  servo_El.attach(servoPin_El);  // Adjuntamos el objeto que creamos al pin --
}

void loop() {
  // put your main code here, to run repeatedly:
  // ----- formulas para calcular el angulo de azimuth y elevation
  servo_Az.write(servoPos_Az);
  servo_El.write(servoPos_El);

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
