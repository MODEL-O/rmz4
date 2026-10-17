// undefined FUN_080aa03c(void)
// entry 0x80aa03c


undefined4 FUN_080aa03c(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = FUN_080a9a70();
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  }
  else {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x50;
  }
  return in_lr;
}


