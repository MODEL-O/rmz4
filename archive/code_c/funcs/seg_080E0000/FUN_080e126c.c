// undefined FUN_080e126c(void)
// entry 0x80e126c


undefined4 FUN_080e126c(undefined4 param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = *(char *)(DAT_080e128c + 0x26);
  if (cVar1 != '\0') {
    *(char *)(DAT_080e128c + 0x26) = cVar1 + -1;
  }
  FUN_080d0c30(param_1);
  return in_lr;
}


