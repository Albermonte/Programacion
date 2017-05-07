void setup(){
 size(800,800);
 background(0,0,0);
 ejes();
 x=-width/2;
 y=0;
}
 
float x;
float y;
float graficaX;
float graficay;

void draw(){
  strokeWeight(3);
  stroke(#F50AE6);
  y = 0.01*x*x - x - 200;
  graficaX=x+width/2;
  graficay=height/2-y;
  point(graficaX,graficay);
  if(abs(y)<0.1) solucion(x);
//  line(-height-100,-width,height/2-100,width/2);
  x=x+1;
}

void ejes(){
 strokeWeight(2);
 stroke(50,50,150);
 line(0,height/2,width,height/2);
 line(width/2,0,width/2,height);
}

 void solucion (float x){
     String s;
     s=new String( "x = " + x);
     text( s, graficaX, 20);
     
}