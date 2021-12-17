int red_1=13; 
int orange_1=12; 
int green_1=11; 
int red_2=10; 
int orange_2=9; 
int green_2=8; 
int red_3=7; 
int orange_3=6; 
int green_3=5; 
int red_4=4; 
int orange_4=3;
int green_4=2;
// **********case one  **************
void direction_west_east_green(void)//green LED of direction one will turn ON 
{ 
digitalWrite(red_1,LOW); 
digitalWrite(orange_1,LOW); 
digitalWrite(green_1,HIGH); 
digitalWrite(red_2,HIGH); 
digitalWrite(orange_2,LOW); 
digitalWrite(green_2,LOW); 
digitalWrite(red_3,LOW); 
digitalWrite(orange_3,LOW); 
digitalWrite(green_3,HIGH); 
digitalWrite(red_4,HIGH);
 digitalWrite(orange_4,LOW); 
digitalWrite(green_4,LOW); 
}
// *****************case 2 *************
void direction_west_east_orange(void)
{ 
digitalWrite(red_1,LOW);
 digitalWrite(orange_1,HIGH); 
digitalWrite(green_1,LOW);
 digitalWrite(red_2,HIGH);
 digitalWrite(orange_2,LOW); 
digitalWrite(green_2,LOW); 
digitalWrite(red_3,LOW); 
digitalWrite(orange_3,HIGH); 
digitalWrite(green_3,LOW);
 digitalWrite(red_4,HIGH); 
digitalWrite(orange_4,LOW);
 digitalWrite(green_4,LOW); }
// *****************case 3 *************
void direction_south_north_green(void) 
{ 
digitalWrite(red_1,HIGH);
 digitalWrite(orange_1,LOW); 
digitalWrite(green_1,LOW); 
digitalWrite(red_2,LOW); 
digitalWrite(orange_2,LOW);
 digitalWrite(green_2,HIGH); 
digitalWrite(red_3,HIGH); 
digitalWrite(orange_3,LOW); 
digitalWrite(green_3,LOW);
 digitalWrite(red_4,LOW);
 digitalWrite(orange_4,LOW);
 digitalWrite(green_4,HIGH);
 }
//****************Case 4********
void direction_south_north_orange(void)
 { digitalWrite(red_1,HIGH); 
digitalWrite(orange_1,LOW);
 digitalWrite(green_1,LOW); 
digitalWrite(red_2,LOW); 
digitalWrite(orange_2,HIGH); 
digitalWrite(green_2,LOW); 
digitalWrite(red_3,HIGH);
 digitalWrite(orange_3,LOW);
 digitalWrite(green_3,LOW); 
digitalWrite(red_4,LOW); 
digitalWrite(orange_4,HIGH); 
digitalWrite(green_4,LOW); 
}
void setup() { 
// Declaring all the LED's as output

for(int i=2;i<=13;i++) pinMode(i,OUTPUT);

} void loop() //In the loop function, we controlled the signal 
{ 
direction_west_east_green(); delay(18000); 
direction_west_east_orange(); delay(10000); 
direction_east_west_green(); delay(18000); 
direction_south_north_orange(); delay(10000); 

}
