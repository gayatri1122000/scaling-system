int waittime1=3000;
int waittime2=1000;
//set1
  int ldp1=1;//signal 1 red led
  int ldp2=2;//signal 1 yellow
  int ldp3=3;//signal 1 green
//set2
  int ldp4=12;//signal 2red
  int ldp5=11;//signal 2 yellow
  int ldp6=10;//signal 2green
//set3
  int ldp7=4;//signal 3 red
  int ldp8=5;//signal 3 yellow
  int ldp9=6;//signal 3 green
//set4
  int ldp16=7;//signal 4 red
  int ldp18=8;//signal 4 yellow
  int ldp20=9;//signal 4 green
  
 int time_slot;
   
void setup()
{
  pinMode(ldp1, OUTPUT);
  pinMode(ldp2, OUTPUT);
  pinMode(ldp3, OUTPUT);
  pinMode(ldp4, OUTPUT);
  pinMode(ldp5, OUTPUT);
  pinMode(ldp6, OUTPUT);
  pinMode(ldp7, OUTPUT);
  pinMode(ldp8, OUTPUT);
  pinMode(ldp9, OUTPUT);
  pinMode(ldp16, OUTPUT);
  pinMode(ldp18, OUTPUT);
  pinMode(ldp20, OUTPUT);
  Serial.begin(9400);
  Serial.println("enter time slot");
  while(Serial.available()==0){
 }
  
  time_slot= Serial.parseInt();
}

void loop()
{ if( time_slot==2||time_slot==4)
{//set1
  digitalWrite(ldp3, HIGH);
    digitalWrite(ldp4, HIGH);
  digitalWrite(ldp7, HIGH);
  digitalWrite(ldp16, HIGH);

  delay(waittime1); // Wait for3000 millisecond(s)
  digitalWrite(ldp3, LOW);
    digitalWrite(ldp4, LOW);
  digitalWrite(ldp7, LOW);
  digitalWrite(ldp16, LOW);

  digitalWrite(ldp2, HIGH);
  digitalWrite(ldp4, HIGH);
  digitalWrite(ldp7, HIGH);
  digitalWrite(ldp16, HIGH);
  delay(waittime2); // Wait for 1000 millisecond(s)
   digitalWrite(ldp2, LOW);
  digitalWrite(ldp4, LOW);
  digitalWrite(ldp7, LOW);
  digitalWrite(ldp16, LOW);
  //set2
   digitalWrite(ldp1, HIGH);
    digitalWrite(ldp6, HIGH);
  digitalWrite(ldp7, HIGH);
  digitalWrite(ldp16, HIGH);
   delay(waittime1); // Wait for 3000 millisecond(s)
   digitalWrite(ldp1, LOW);
    digitalWrite(ldp6, LOW);
  digitalWrite(ldp7, LOW);
  digitalWrite(ldp16, LOW);
  
  digitalWrite(ldp1, HIGH);
    digitalWrite(ldp5, HIGH);
  digitalWrite(ldp7, HIGH);
  digitalWrite(ldp16, HIGH);
   delay(waittime2); // Wait for 1000 millisecond(s)
   digitalWrite(ldp1, LOW);
    digitalWrite(ldp5, LOW);
  digitalWrite(ldp7, LOW);
  digitalWrite(ldp16, LOW);
  
  //set3

  
   digitalWrite(ldp1, HIGH);
    digitalWrite(ldp4, HIGH);
  digitalWrite(ldp9, HIGH);
  digitalWrite(ldp16, HIGH);
    delay(waittime2); // Wait for 1000 millisecond(s)
  
   digitalWrite(ldp1, LOW);
    digitalWrite(ldp4, LOW);
  digitalWrite(ldp9, LOW);
  digitalWrite(ldp16, LOW);
  
 digitalWrite(ldp1, HIGH);
    digitalWrite(ldp4, HIGH);
  digitalWrite(ldp8, HIGH);
  digitalWrite(ldp16, HIGH); 
  delay(waittime1);
    digitalWrite(ldp1, LOW);
    digitalWrite(ldp4, LOW);
  digitalWrite(ldp8, LOW);
  digitalWrite(ldp16, LOW); 
  
              
  //set4
  digitalWrite(ldp1, HIGH);
    digitalWrite(ldp4, HIGH);
  digitalWrite(ldp7, HIGH);
  digitalWrite(ldp20, HIGH);
  delay(waittime1); // Wait for 3000 millisecond(s)
  digitalWrite(ldp1, LOW);
    digitalWrite(ldp4, LOW);
  digitalWrite(ldp7, LOW);
  digitalWrite(ldp20, LOW);
  
    digitalWrite(ldp1, HIGH);
    digitalWrite(ldp4, HIGH);
  digitalWrite(ldp7, HIGH);
  digitalWrite(ldp18, HIGH);
  delay(waittime2); // Wait for 1000 millisecond(s) 
    digitalWrite(ldp1, LOW);
    digitalWrite(ldp4, LOW);
  digitalWrite(ldp7, LOW);
  digitalWrite(ldp18, LOW);
}
  else if(time_slot==1)
  {
  if(time_slot==1)
{
digitalWrite(ldp2, HIGH);
digitalWrite(ldp5, HIGH);
digitalWrite(ldp8, HIGH);
digitalWrite(ldp18, HIGH);
  delay(1000);
 digitalWrite(ldp2, LOW);
 digitalWrite(ldp5, LOW);
 digitalWrite(ldp8, LOW);
 digitalWrite(ldp18, LOW);
delay(1000);
    
  

  }
  
} 
 else
 {//SET1
 digitalWrite( ldp1 ,HIGH);
 digitalWrite( ldp6 ,HIGH);
  digitalWrite(ldp7  ,HIGH);
    digitalWrite(  ldp20,HIGH);
   delay(waittime1);
  digitalWrite( ldp1 ,LOW);
 digitalWrite( ldp6 ,LOW);
  digitalWrite(ldp7  ,LOW);
    digitalWrite(  ldp20,LOW); 
     
 digitalWrite( ldp1 ,HIGH);
 digitalWrite( ldp5 ,HIGH);
  digitalWrite(ldp7  ,HIGH);
    digitalWrite(  ldp18,HIGH);
   delay(waittime2);
   digitalWrite( ldp1, LOW);
 digitalWrite( ldp5 ,LOW);
  digitalWrite(ldp7  ,LOW);
    digitalWrite(  ldp18,LOW);
 //SET2
   digitalWrite( ldp3 ,HIGH);
 digitalWrite( ldp4 ,HIGH);
  digitalWrite(ldp9  ,HIGH);
    digitalWrite(  ldp16,HIGH);
 delay(waittime1);
     digitalWrite( ldp3 ,LOW);
 digitalWrite( ldp4 ,LOW);
  digitalWrite(ldp9  ,LOW);
    digitalWrite(  ldp16,LOW);
   
     digitalWrite( ldp2 ,HIGH);
 digitalWrite( ldp4 ,HIGH);
  digitalWrite(ldp8  ,HIGH);
    digitalWrite(  ldp16,HIGH);
   delay(waittime2);
     digitalWrite( ldp2 ,LOW);
 digitalWrite( ldp4 ,LOW);
  digitalWrite(ldp8  ,LOW);
    digitalWrite(  ldp16,LOW);
 }
}