// undefined FUN_08080f5c(void)
// entry 0x8080f5c


undefined4 FUN_08080f5c(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,*DAT_08080f9c);
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801d1f4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xb4) = 1;
  }
  return in_lr;
}


