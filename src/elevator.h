int s;

void ascensore(){
  switch(p) {
    case 0:
      switch(s) {
        case 0:
          mariottide.step(0);
          break;
        case 1:
          mariottide.step(GIU1);
          break;
        case 2:
          mariottide.step(GIU2);
          break;
      }
      break;
    case 1:
      switch(s) {
        case 0:
          mariottide.step(SU1);
          break;
        case 1:
          mariottide.step(0);
          break;
        case 2:
          mariottide.step(GIU1);
          break;
      }
      break;
    case 2:
      switch(s) {
        case 0:
          mariottide.step(SU2);
          break;
        case 1:
          mariottide.step(SU1);
          break;
        case 2:
          mariottide.step(0);
          break;
      }
      break;
  }
  s=p;
}
