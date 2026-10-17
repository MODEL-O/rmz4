// undefined FUN_080915f4(void)
// entry 0x80915f4


undefined4 FUN_080915f4(int param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  pcVar2 = (char *)(*(int *)(param_1 + 0x28) + 0xd5);
  *pcVar2 = *pcVar2 + -1;
  local_14 = *(undefined4 *)(param_1 + 0x54);
  local_10 = *(int *)(param_1 + 0x58) + DAT_08091654;
  FUN_080d0c88(1,&local_14);
  FUN_08002b10(0x35);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08091658);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


