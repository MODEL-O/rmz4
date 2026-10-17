// undefined FUN_080d5960(void)
// entry 0x80d5960


undefined4 FUN_080d5960(int param_1,int *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 8);
  FUN_0801cc9c(iVar1);
  FUN_0801cf00(iVar1,*(undefined2 *)(iVar1 + 0x7e));
  *(byte *)(iVar1 + 0x49) = *(byte *)(iVar1 + 0x49) & 0xf3 | 4;
  FUN_0801cff0(iVar1);
  *(int *)(iVar1 + 0x54) = *param_2 + DAT_080d59e4;
  *(int *)(iVar1 + 0x58) = param_2[1] + DAT_080d59e8;
  *(int *)(iVar1 + 0x40) = iVar1 + 0x54;
  FUN_08128f84(param_1,param_2,*(undefined4 *)(param_1 + 4));
  FUN_08002c94(iVar1 + 0x34,DAT_080d59ec);
  *(int *)(iVar1 + 0x3c) = iVar1;
  *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xf7;
  if (*(byte *)(iVar1 + 0xc) < 2) {
    if (*(char *)(iVar1 + 0xd) == '\0') {
      FUN_0810da2c(*(undefined4 *)(iVar1 + 0x80),0,0);
    }
    else {
      FUN_0810da7c(*(undefined4 *)(iVar1 + 0x80),0,0,*(undefined1 *)(iVar1 + 0x7d));
    }
  }
  return in_lr;
}


