// undefined FUN_0809a270(void)
// entry 0x809a270


undefined4 FUN_0809a270(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  FUN_0801ce54();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x6100);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_0809a2c0,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar1 = 0x20;
  }
  else {
    uVar1 = 0x60;
  }
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  iVar2 = DAT_0809a308;
  iVar3 = (int)*(short *)((*(byte *)(param_1 + 0x12) + 0xc0 & 0xff) * 2 + DAT_0809a308);
  *(int *)(param_1 + 0x5c) = iVar3 << 2;
  iVar2 = (int)*(short *)((*(byte *)(param_1 + 0x12) + 0x80 & 0xff) * 2 + iVar2);
  *(int *)(param_1 + 0x60) = iVar2 << 2;
  *(int *)(param_1 + 100) = iVar3 >> 3;
  *(int *)(param_1 + 0x68) = iVar2 >> 3;
  *(undefined1 *)(param_1 + 0x13) = 0x10;
  *(undefined2 *)(param_1 + 0xbe) = 0xe0;
  return in_lr;
}


