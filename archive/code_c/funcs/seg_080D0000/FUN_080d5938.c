// undefined FUN_080d5938(void)
// entry 0x80d5938


undefined8 FUN_080d5938(char *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  cVar1 = *param_1;
  uVar2 = 0;
  while ((uVar3 = uVar2, cVar1 != '\0' && (uVar2 = uVar2 + 1 & 0xff, uVar3 = 0, uVar2 < 0x10))) {
    cVar1 = param_1[uVar2];
  }
  return CONCAT44(in_lr,uVar3);
}


