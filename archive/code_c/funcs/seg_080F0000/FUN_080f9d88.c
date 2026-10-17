// undefined FUN_080f9d88(void)
// entry 0x80f9d88


undefined4 FUN_080f9d88(undefined4 param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = *(char *)(DAT_080f9da8 + 0x26);
  if (cVar1 != '\0') {
    *(char *)(DAT_080f9da8 + 0x26) = cVar1 + -1;
  }
  FUN_080e954c(param_1);
  return in_lr;
}


