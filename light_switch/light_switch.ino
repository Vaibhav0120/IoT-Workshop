void setup() {
  // put your setup code here, to run once:
pinMode(0,INPUT);  //pin pushbutton D3
pinMode(2,OUTPUT);  //pin LED D4
}

void loop() {
  // put your main code here, to run repeatedly:
    int a=digitalRead(0); 
    if(a==0)
    {
      digitalWrite(2,HIGH);
    }
    else
    {
      digitalWrite(2,LOW);
    }
}