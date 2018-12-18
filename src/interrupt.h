
void safeUP(){
  mariottide.step(0);
  delay(500);
  mariottide.step(SAFEGIU);
  delay(500);
}

void safeDOWN(){
  mariottide.step(0);
  delay(100);
  mariottide.step(SAFESU);
  delay(100);
}
