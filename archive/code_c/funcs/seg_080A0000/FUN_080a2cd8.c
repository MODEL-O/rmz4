// undefined FUN_080a2cd8(void)
// entry 0x80a2cd8


undefined4 FUN_080a2cd8(undefined4 param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = *(char *)(DAT_080a2cf8 + 0x26);
  if (cVar1 != '\0') {
    *(char *)(DAT_080a2cf8 + 0x26) = cVar1 + -1;
  }
  FUN_0807f8ec(param_1);
  return in_lr;
}


