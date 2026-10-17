// undefined FUN_080a8d84(void)
// entry 0x80a8d84


undefined4 FUN_080a8d84(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x2c);
  iVar2 = *(int *)(iVar1 + 0x58) + DAT_080a8da4;
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar1 = *(int *)(iVar1 + 0x54) + DAT_080a8dec;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x54) + 0x3500;
  }
  *(int *)(param_1 + 0x54) = iVar1 + (*(int *)(iVar3 + 0x54) - iVar1 >> 1);
  *(int *)(param_1 + 0x58) = iVar2 + (*(int *)(iVar3 + 0x58) - iVar2 >> 1);
  if (iVar1 < *(int *)(iVar3 + 0x54)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined1 *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  }
  iVar2 = *(int *)(iVar3 + 0x54) - iVar1;
  if (iVar2 < 0) {
    iVar2 = iVar1 - *(int *)(iVar3 + 0x54);
  }
  if (iVar2 < 0x801) {
    FUN_0801cf00(param_1,DAT_080a8e4c);
  }
  else {
    FUN_0801cf00(param_1,DAT_080a8e34);
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


