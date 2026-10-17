// undefined FUN_080abe80(void)
// entry 0x80abe80


undefined4 FUN_080abe80(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 8);
  pcVar2 = (char *)(iVar1 + 0xbe);
  *pcVar2 = *pcVar2 + '\x01';
  FUN_08128f84(param_1,param_2,*(undefined4 *)((uint)*(byte *)(iVar1 + 0xbc) * 4 + DAT_080abea4));
  return in_lr;
}


