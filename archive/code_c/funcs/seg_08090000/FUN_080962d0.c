// undefined FUN_080962d0(void)
// entry 0x80962d0


undefined4 FUN_080962d0(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    pcVar1 = (char *)(*(int *)(param_1 + 0x28) + 0xb4);
    *pcVar1 = *pcVar1 + -1;
  }
  FUN_0807f8ec(param_1);
  return in_lr;
}


