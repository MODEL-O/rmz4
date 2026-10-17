// undefined FUN_0810148c(void)
// entry 0x810148c


undefined4 FUN_0810148c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if ((*(char *)(param_1 + 0x10) == '\x01') || (*(char *)(param_1 + 0x10) == '\x03')) {
    FUN_0801cf00(param_1,DAT_081014d8);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined4 *)(param_1 + 0x30) = DAT_081014dc;
    *(short *)(param_1 + 0x26) = (short)DAT_081014e0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar2 = DAT_081014e4;
  }
  else {
    FUN_0801cf00(param_1,0xc000);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined4 *)(param_1 + 0x30) = DAT_08101598;
    *(short *)(param_1 + 0x26) = (short)DAT_0810159c;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar2 = DAT_081015a0;
  }
  FUN_08005760(param_1 + 0x74,uVar2,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_0801cff0(param_1);
  *(undefined4 *)(param_1 + 0x98) = DAT_081015a4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined1 *)(param_1 + 0x25) = 0x17;
  iVar1 = *(int *)(param_1 + 0x54) + *(int *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_081015a8);
  *(int *)(param_1 + 0x54) = iVar1;
  uVar2 = FUN_08008534(iVar1,*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_081015ac);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  FUN_081015b0(param_1);
  return in_lr;
}


