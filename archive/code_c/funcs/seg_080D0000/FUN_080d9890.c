// undefined FUN_080d9890(void)
// entry 0x80d9890


undefined4 FUN_080d9890(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  FUN_0801cff0();
  iVar3 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar3;
  iVar2 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar2;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d98dc);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080d9518(param_1);
  }
  return in_lr;
}


