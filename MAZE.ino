int t,k,m,j;
int i,p;
int u=0;
int prev;
#define right_most A1
#define right A2
#define center A3
#define left A4
int s=0;
char A[1000];
char final_path[100];
#define left_most A5
void setup() {
  pinMode(right_most,INPUT);
  pinMode(right,INPUT);
  pinMode(center,INPUT);
  pinMode(left,INPUT);
  pinMode(left_most,INPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  Serial.begin(9600);
  int a,b,c;
}
void shortpath(){
  i=0;

  while(i<100){
      if(A[i]=="J"){
          
          for(j=i+1;i<100;j++){
              if(A[j]=="J"){
                  break;
              }
              m=0;
              if(A[j]=="B"){
                  
                  for(k=j;i<100;k++){
                      if(A[k]=="J"){
                          m=1;
                          break;
                      }
                          
              }      
         }
       }               
      }   
              if(m==1){
                int h;                  
                for(h=i;k;h++){
                    A[h]=0;
                }
                i=k;
                break;
              }    
             
      i=i+1;
  }
  int j=0;        
  for(i=0;i<100;i++){
    if(A[i]!=0){
      final_path[j]=A[i];
      j++; 
    }
  }
}
void loop() {
  j=0;
  
  Serial.println(i);
  
  int y=0;
  int  a=analogRead(A1);
  int b=analogRead(A2);
  int c=analogRead(A3);
  int d=analogRead(A4);
  int e=analogRead(A5);
  int LE=3;
  int L=9;
  int C=17;
  int R=45;  
  int RE=31;
  if(a<500){
    LE=3;
  }
  else if(a>500){
    LE=0; 
  }
  if(b<500){
    L=9;
  }
  else if(b>500){
    L=0; 
  }
  if(c<500){
    C=17;
  }
  else if(c>500){
    C=0; 
  }
  if(d<500){
    R=45;
  }
  else if(d>500){
    R=0; 
  }
  if(e<500){
    RE=31;
  }
  else if(e>500){
    RE=0; 
  }
 
  int k=LE+L+C+R+RE;
  if(k==3){
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    prev=1;
    if(A[i-1]!="L"){
      A[i]="L";
    }
    delay(300);
    Serial.println("left");
    
   
    


    
  }
  if(k==34){
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    prev=1;
    if(A[i-1]!="L"){
     A[i]="L";
    }
    Serial.println("left");
    delay(30);

  }
  if(k==12){
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    prev=1;
    if(A[i-1]!="L"){
      A[i]="L";
    }
    Serial.println("left");
    delay(30);

  }
  if(k==79){
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    prev=1;
    if(A[i-1]!="L"){
      A[i]="L";
    }
    Serial.println("left");
    delay(30);

  }
  if(k==57){
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    prev=1;
    if(A[i-1]!="L"){
      A[i]="L";
    }
    Serial.println("left");
    delay(30);

  }
  if(k==40){
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    prev=1;
    if(A[i-1]!="L"){
      A[i]="L";
    }
    Serial.println("left");
    delay(30);

  }
  if(k==29){
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    if(A[i-1]!="L"){
      A[i]="L";
    }
    delay(30);
    prev=1;
   

    Serial.println("left when forward detected");
  }
  if(k==31){
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    prev=2;
    if(A[i-1]!="R"){
      A[i]="R";
    }
    delay(300);

    Serial.println("right");
  }
  if(k==76){
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    prev=2;
    if(A[i-1]!="R"){
      A[i]="R";
    }
    delay(30);
    Serial.println("right");
  }
  if(k==93){
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    if(A[i-1]!="F"){
      A[i]="F";
    }
    delay(30);
    Serial.println("forward when right also detected");
  }
  if(k==17){    
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    if(A[i-1]!="F"){
      A[i]="F";
    }
    delay(30);
    Serial.println("forward");
  }
  if(k==26){
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    if(A[i-1]!="F"){
      A[i]="F";
    }
    delay(30);
    Serial.println("forward");
  }
  if(k==62){
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    if(A[i-1]!="F"){
      A[i]="F";
    }
    delay(30);
    Serial.println("forward");
  }
  if(k==71){
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    if(A[i-1]!="F"){
      A[i]="F";
    }
    delay(30);
    Serial.println("forward");
  }
  if(k==0){
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    if(A[i-1]!="F"){
      A[i]="F";
    }
    
    u++;
    if(u>15){
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,HIGH);
      if(A[i-1]!="B"){
         A[i]="B";
        }
      delay(30);
      u=0;
    }
    
    
  }
  if(k==105){
    y++;
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    Serial.println("turning left--all sensors detected");
    if(A[i-1]!="L"){
      A[i]="L";
    }
    delay(30);
    
    if(y>15){
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(11,HIGH);
      digitalWrite(12,LOW);
      if(A[i-1]!="F"){
         A[i]="F";
       }
      delay(30);
      
      s=1;
    }
  }
  if(k==9){
    digitalWrite(10,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    if(A[i-1]!="F"){
      A[i]="F";
    }
    delay(30);
    
    Serial.println("straight sLOW speed");
  }
  if(k==45){
    p++;
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    if(A[i-1]!="F"){
      A[i]="F";
    }
    
    if(p>10){
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(12,LOW);
      digitalWrite(11,HIGH);
      delay(30);
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(11,HIGH);
      digitalWrite(12,LOW);
      delayMicroseconds(500);
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,HIGH);
      delay(10);
    }
   
    Serial.println("turning straight sLOW speed");
  }
  if(k==43){
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(12,LOW);
    digitalWrite(11,HIGH);
    if(A[i-1]!="L"){
      A[i]="L";
    }
    delay(30);
    
  }
  if(k==88){
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(12,LOW);
    digitalWrite(11,HIGH);
    if(A[i-1]!="L"){
      A[i]="L";
    }
    delay(30);
    
  }
  if(k==54 or k==33){
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(12,LOW);
    digitalWrite(11,HIGH);
    if(A[i-1]!="L"){
      A[i]="L";
    }
    delay(30);
  } 
/*
  if(k==95){
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    if(A[i-1]!="L"){
      A[i]="L";
    }
    delay(30);
  }
  */   //check the shaded part
  if(k==79){
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    if(A[i-1]!="L"){
      A[i]="L";
    }
    delay(30);
  }
  if(k==54){
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    if(A[i-1]!="F"){
      A[i]="F";
    }
    delay(30);
  }
  if(k==20){
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    prev=1;
    if(A[i-1]!="L"){
      A[i]="L";
    }
    Serial.println("left");
    delay(30);

  }
  
   
 
 
} 
