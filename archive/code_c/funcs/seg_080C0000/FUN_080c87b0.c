// undefined FUN_080c87b0(void)
// entry 0x80c87b0


undefined4 FUN_080c87b0(undefined4 param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = *(char *)(DAT_080c87d0 + 0x26);
  if (cVar1 != '\0') {
    *(char *)(DAT_080c87d0 + 0x26) = cVar1 + -1;
  }
  FUN_080bd3f8(param_1);
  return in_lr;
}


