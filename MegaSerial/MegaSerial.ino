String serialInput;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
Serial3.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:

 while (Serial.available() > 0) {
    
    serialInput += char(Serial.read());
    delay(2);
  }
  if (serialInput != ""){
    serialInput +='\r';
    serialInput +='\n';
    
  Serial3.print(serialInput);
  serialInput = "";
  }

  
  while(Serial3.available() > 0){
    serialInput += char(Serial3.read());
    delay(2);
  }
  if (serialInput != ""){
  Serial.print(serialInput);
  Serial.print(serialInput.substring(7,9));
  serialInput = "";
  }

}
