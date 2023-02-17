void setup(){
  size(400,400,P3D);
}
void draw(){
  background(#E2C2DE);
  translate(width/2,height/2);
  rotateY(radians(frameCount));
  box(100);
}
