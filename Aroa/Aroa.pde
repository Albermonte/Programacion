PImage fondo;
PImage seta;
int ySeta;
int xInicial;

void setup() {
  size(800,600);
  fondo = loadImage("fondo mario.jpg");
  seta = loadImage("seta.png");
  xInicial=(int)random(width);
}

void draw() {
  background(fondo);
  image(seta, xInicial, ySeta, 50, 50);
  image(seta, xInicial, ySeta, 50, 50);
  image(seta, xInicial, ySeta, 50, 50);
  if(ySeta>=height){
  ySeta=0;
  xInicial=(int)random(width);
  }
  if (ySeta==600){ 
  ySeta=ySeta-1;
  }
  ySeta=ySeta+1;
}