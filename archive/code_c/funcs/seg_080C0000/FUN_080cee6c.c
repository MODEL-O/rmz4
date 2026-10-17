// undefined FUN_080cee6c(void)
// entry 0x80cee6c


undefined8 FUN_080cee6c(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x12);
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0x12) = cVar1 + -1;
  }
  return CONCAT44(in_lr,(uint)(cVar1 == '\0'));
}


