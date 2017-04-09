void setup(){ 
  size (500,550);
}

int i=150;
int incx=3;
int j=300;
int incy=2;
int a=0; // Todos bloques se muestran
int b=0; // Bloque 1
int c=0; // Bloque 2
int d=0; // Bloque 3
int e=0; // Bloque 4
int f=0; // Bloque 5

void draw(){
  background(0);
  fill(0,200,0);
  noStroke();
  noCursor();
  ellipse(i,j,30,30);
  i=incx+i ;
  j=incy+j;
  
  if(i>=485){
  incx=-incx;
  }
  if(j>=535){
  incy=-incy;
  }
  if(i<=15){
  incx=-incx;
  }
  if(j<=15){
  incy=-incy;
  }
 
 rect(mouseX,500,100,20);
 
 if((i>=mouseX)&&(i<=mouseX+100)&&(j>=485)){
 incy=-incy;
 }

 if(a==0){
    if(j<=80){
      if(i>=40&&i<=120){ // Bloque 1
       a=1;
       b=1;
      }
      if(i>=130&&i<=210){ // Bloque 2
       a=1;
       c=1;
      }
      if(i>=220&&i<=300){ // Bloque 3
       a=1;
       d=1;
      }
      if(i>=310&&i<=390){ // Bloque 4
       a=1;
       e=1;
      }
      if(i>=400&&i<=480){ // Bloque 5
       a=1;
       f=1;
      }
      incy=-incy;
   }
 }
 
 if(a==1){
   
   // Solo bloque 1 escondido
   if(b==1 && c==0 && d==0 && e==0 && f==0){ 
     if(j<=80){
      if(i>=130&&i<=210){ // Bloque 2
       c=1;
       incy=-incy;
      }
      if(i>=220&&i<=300){ // Bloque 3
       d=1;
       incy=-incy;
      }
      if(i>=310&&i<=390){ // Bloque 4
       e=1;
       incy=-incy;
      }
      if(i>=400&&i<=480){ // Bloque 5
       f=1;
       incy=-incy;
      }
     }
     
   }
   
   // Solo bloque 2 escondido
   if(b==0 && c==1 && d==0 && e==0 && f==0){ 
     if(j<=80){
       if(i>=40&&i<=120){ // Bloque 1
       b=1;
      }
      if(i>=220&&i<=300){ // Bloque 3
       d=1;
      }
      if(i>=310&&i<=390){ // Bloque 4
       e=1;
      }
      if(i>=400&&i<=480){ // Bloque 5
       f=1;
      }
      incy=-incy;
     }
     
   }
   
   // Solo bloque 3 escondido
   if(b==0 && c==0 && d==1 && e==0 && f==0){ 
     if(j<=80){
       if(i>=40&&i<=120){ // Bloque 1
       b=1;
      }
      if(i>=130&&i<=210){ // Bloque 2
       c=1;
      }
      if(i>=310&&i<=390){ // Bloque 4
       e=1;
      }
      if(i>=400&&i<=480){ // Bloque 5
       f=1;
      }
      incy=-incy;
     }
     
   }
   
   // Solo bloque 4 escondido
   if(b==0 && c==0 && d==0 && e==1 && f==0){
     if(j<=80){
       if(i>=40&&i<=120){ // Bloque 1
       b=1;
      }
      if(i>=130&&i<=210){ // Bloque 2
       c=1;
      }
      if(i>=220&&i<=300){ // Bloque 3
       d=1;
      }
      if(i>=400&&i<=480){ // Bloque 5
       f=1;
      }
      incy=-incy;
     }
     
   }
   
   // Solo bloque 5 escondido
  if(b==0 && c==0 && d==0 && e==0 && f==1){ 
   if(j<=80){
       if(i>=40&&i<=120){ // Bloque 1
       b=1;
      }
      if(i>=130&&i<=210){ // Bloque 2
       c=1;
      }
      if(i>=220&&i<=300){ // Bloque 3
       d=1;
      }
      if(i>=310&&i<=390){ // Bloque 4
       e=1;
      }
      incy=-incy;
     }
     
   }
  
  
  
  // Bloque 1, 2
  if(b==1 && c==1 && d==0 && e==0 && d==0){ 
     if(j<=80){
      if(i>=220&&i<=300){ // Bloque 3
       d=1;
       incy=-incy;
      }
      if(i>=310&&i<=390){ // Bloque 4
       e=1;
       incy=-incy;
      }
      if(i>=400&&i<=480){ // Bloque 5
       f=1;
       incy=-incy;
      }
     }
     
   }
   
   // Bloque 1, 3
   if(b==1 && c==0 && d==1 && e==0 && d==0){ 
     if(j<=80){
      if(i>=130&&i<=210){ // Bloque 2
       c=1;
       incy=-incy;
      }
      if(i>=310&&i<=390){ // Bloque 4
       e=1;
       incy=-incy;
      }
      if(i>=400&&i<=480){ // Bloque 5
       f=1;
       incy=-incy;
      }
     }
     
   }
   
   // Bloque 1, 4
   if(b==1 && c==0 && d==0 && e==1 && d==0){ 
     if(j<=80){
      if(i>=130&&i<=210){ // Bloque 2
       c=1;
       incy=-incy;
      }
      if(i>=220&&i<=300){ // Bloque 3
       d=1;
       incy=-incy;
      }
      if(i>=400&&i<=480){ // Bloque 5
       f=1;
       incy=-incy;
      }
     }
     
   }
   
   // Bloque 1, 5
   if(b==1 && c==0 && d==0 && e==0 && f==1){
     if(j<=80){
       if(i>=130&&i<=210){ // Bloque 2
       c=1;
       incy=-incy;
      }
      if(i>=220&&i<=300){ // Bloque 3
       d=1;
       incy=-incy;
      }
       if(i>=310&&i<=390){ // Bloque 4
       e=1;
       incy=-incy;
      }
     }
   }
      
   // Bloque 1, 2, 3
   if(b==1 && c==1 && d==1 && e==0 && f==0){ 
     if(j<=80){
      if(i>=310&&i<=390){ // Bloque 4
       e=1;
       incy=-incy;
      }
      if(i>=400&&i<=480){ // Bloque 5
       f=1;
       incy=-incy;
      }
     }
     
   }
   
   // Bloque 1, 2, 4
   if(b==1 && c==1 && d==0 && e==1 && d==0){ 
     if(j<=80){
      if(i>=220&&i<=300){ // Bloque 3
       d=1;
       incy=-incy;
      }
      if(i>=400&&i<=480){ // Bloque 5
       f=1;
       incy=-incy;
      }
     }
     
   }
   
   // Bloque 1, 2, 5
   if(b==1 && c==1 && d==0 && e==0 && f==1){
     if(j<=80){
      if(i>=220&&i<=300){ // Bloque 3
       d=1;
       incy=-incy;
      }
       if(i>=310&&i<=390){ // Bloque 4
       e=1;
       incy=-incy;
      } 
     }  
   }
   
   // Bloque 1, 3, 4
   if(b==1 && c==0 && d==1 && e==1 && f==0){
     if(j<=80){
     if(i>=130&&i<=210){ // Bloque 2
       c=1;
       incy=-incy;
      }
     if(i>=400&&i<=480){ // Bloque 5
       f=1;
       incy=-incy;
      }
    }
  }  
  
   // Bloque 1, 4, 5
   if(b==1 && c==0 && d==0 && e==1 && f==1){
     if(i<=80){
      if(i>=130&&i<=210){ // Bloque 2
      c=1;
      incy=-incy;
      }
      if(i>=220&&i<=300){ // Bloque 3
       d=1;
       incy=-incy;
      }
    }
  }
      
   // Bloque 2, 3
    if(b==0 && c==1 && d==1 && e==0 && f==0){
      if(j<=80){
       if(i>=40&&i<=120){ // Bloque 1
       b=1;
      }
       if(i>=310&&i<=390){ // Bloque 4
       e=1;
       incy=-incy;
      } 
      if(i>=400&&i<=480){ // Bloque 5
       f=1;
       incy=-incy;
      }
    }
  } 
   
   // Bloque 2, 4
     if(b==0 && c==1 && d==0 && e==1 && f==0){
       if(j<=80){
       if(i>=40&&i<=120){ // Bloque 1
       b=1;
      }
        if(i>=220&&i<=300){ // Bloque 3
        d=1;
        incy=-incy;
       }
        if(i>=400&&i<=480){ // Bloque 5
        f=1;
        incy=-incy;
       }
      }
     }
   
   // Bloque 2, 5
    if(b==0 && c==1 && d==0 && e==0 && f==1){
      if(j<=80){
      if(i>=40&&i<=120){ // Bloque 1
      b=1;
     }
      if(i>=220&&i<=300){ // Bloque 3
      d=1;
      incy=-incy;
     }
      if(i>=310&&i<=390){ // Bloque 4
      e=1;
      incy=-incy;
     }
      }
     }
   
   // Bloque 2, 3, 4
    if(b==0 && c==1 && d==1 && e==1 && f==0){
     if(j<=80){
      if(i>=40&&i<=120){ // Bloque 1
      b=1;
     }
      if(i>=400&&i<=480){ // Bloque 5
      f=1;
      incy=-incy;
     }
      }
     }
   
   // Bloque 2, 3, 5
    if(b==0 && c==1 && d==1 && e==0 && f==1){
      if(j<=80){
       if(i>=40&&i<=120){ // Bloque 1
       b=1;
     }
       if(i>=310&&i<=390){ // Bloque 4
       e=1;
       incy=-incy;
     } 
      }
     }
     
   
   // Bloque 2, 4 ,5
    if(b==0 && c==1 && d==0 && e==1 && f==1){
     if(j<=80){
      if(i>=40&&i<=120){ // Bloque 1
      b=1;
     }
      if(i>=220&&i<=300){ // Bloque 3
      d=1;
      incy=-incy;
     }
      }
     }
   
   
   // Bloque 3, 4
    if(b==0 && c==0 && d==1 && e==1 && f==0){
     if(j<=80){
      if(i>=40&&i<=120){ // Bloque 1
      b=1;
     }
      if(i>=130&&i<=210){ // Bloque 2
      c=1;
      incy=-incy;
     }
      if(i>=400&&i<=480){ // Bloque 5
      f=1;
      incy=-incy;
     }
      }
     }
     
   
   // Bloque 3,5
    if(b==0 && c==0 && d==1 && e==0 && f==1){
      if(j<=80){
      if(i>=40&&i<=120){ // Bloque 1
      b=1;
     }
      if(i>=130&&i<=210){ // Bloque 2
      c=1;
      incy=-incy;
     }
      if(i>=310&&i<=390){ // Bloque 4
      e=1;
      incy=-incy;
     } 
      }
     }
   
   
   // Bloque 3, 4 ,5
    if(b==0 && c==0 && d==1 && e==1 && f==1){
      if(j<=80){
       if(i>=40&&i<=120){ // Bloque 1
       b=1;
     }
       if(i>=130&&i<=210){ // Bloque 2
       c=1;
       incy=-incy;
     } 
      }
     }
   
   
   // Bloque 4, 5
    if(b==0 && c==0 && d==0 && e==1 && f==1){
      if(j<=80){
       if(i>=40&&i<=120){ // Bloque 1
       b=1;
     }
       if(i>=130&&i<=210){ // Bloque 2
       c=1;
       incy=-incy;
     } 
      if(i>=220&&i<=300){ // Bloque 3
      d=1;
      incy=-incy;
     }
      }
     }
   
   
   // Bloque 1, 2, 3, 4
    if(b==1 && c==1 && d==1 && e==1 && f==0){
      if(j<=80){
       if(i>=400&&i<=480){ // Bloque 5
       f=1;
       incy=-incy;
     }
      }
     }
   
   
   // Bloque 1, 2, 3, 5
     if(b==1 && c==1 && d==1 && e==0 && f==1){
      if(j<=80){
       if(i>=310&&i<=390){ // Bloque 4
       e=1;
       incy=-incy;
     } 
      }
     }
   
   
   // Bloque 1, 3, 4, 5
    if(b==1 && c==0 && d==1 && e==1 && f==1){
      if(j<=80){
       if(i>=130&&i<=210){ // Bloque 2
       c=1;
       incy=-incy;
     } 
      }
     }
   
   
   // Bloque 1, 2, 4, 5
    if(b==1 && c==1 && d==0 && e==1 && f==1){
      if(j<=80){
       if(i>=220&&i<=300){ // Bloque 3
       d=1;
       incy=-incy;
     }
      }
     }
          
   // Bloque 1, 2, 3, 4, 5
    if(b==1 && c==1 && d==1 && e==1 && f==1){
   }
 }
 noStroke();
 fill(200,0,100);
 if(b==0){
 rect(40,40,80,30);  // Bloque 1
 }
 if(c==0){
 rect(130,40,80,30); // Bloque 2
 }
 if(d==0){
 rect(220,40,80,30); // Bloque 3
 }
 if(e==0){
 rect(310,40,80,30); // Bloque 4
 }
 if(f==0){
 rect(400,40,80,30); // Bloque 5
 }
 }
