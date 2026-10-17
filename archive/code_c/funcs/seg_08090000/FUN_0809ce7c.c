// undefined FUN_0809ce7c(void)
// entry 0x809ce7c


undefined4 FUN_0809ce7c(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801ceec(param_1);
  FUN_0801cf00(param_1,DAT_0809cee0 + (uint)*(byte *)(param_1 + 0x11) & 0xffff);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_0809cee4,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0x300;
    uVar1 = 0x1c00;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = DAT_0809cee8;
    uVar1 = DAT_0809ceec;
  }
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = 0x300;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x54) - *(int *)(iVar3 + 0x54);
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0x58) - *(int *)(iVar3 + 0x58);
  *(undefined1 *)(param_1 + 0x12) = 0x50;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809cf4c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_0809ce1c(param_1);
  return in_lr;
}


