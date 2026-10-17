// undefined FUN_080d1920(void)
// entry 0x80d1920


undefined4 FUN_080d1920(int param_1,int *param_2)

{
  int iVar1;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  iVar1 = *(int *)(param_1 + 8);
  local_18 = *param_2 + *(int *)(iVar1 + 0x54) + DAT_080d1998;
  local_14 = param_2[1] + *(int *)(iVar1 + 0x58) + DAT_080d199c;
  FUN_0801cc9c(iVar1);
  FUN_0801cf00(iVar1,*(undefined2 *)((uint)*(byte *)(iVar1 + 0x10) * 2 + DAT_080d19a0));
  *(byte *)(iVar1 + 0x49) = *(byte *)(iVar1 + 0x49) & 0xf3;
  FUN_0801cff0(iVar1);
  *(int **)(iVar1 + 0x40) = &local_18;
  FUN_08128f84(param_1,param_2,*(undefined4 *)(param_1 + 4));
  FUN_08002c94(iVar1 + 0x34,DAT_080d19a4);
  *(int *)(iVar1 + 0x3c) = iVar1;
  *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xf7;
  return in_lr;
}


