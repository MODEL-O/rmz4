// undefined FUN_080cc1c4(void)
// entry 0x80cc1c4


undefined4 FUN_080cc1c4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_080cc1f8);
  FUN_0801cff0(param_1);
  if (*(byte *)(param_1 + 0x11) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar1 = *(byte *)(param_1 + 0x11) & 1;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080cc25c,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + DAT_080cc2a4;
    uVar2 = DAT_080cc2a8;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x600;
    uVar2 = 0x280;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined1 *)(param_1 + 0x12) = 0x10;
  *(undefined1 *)(param_1 + 0x13) = 7;
  iVar3 = *(int *)(param_1 + 0x58) + DAT_080cc2ac;
  *(int *)(param_1 + 0x58) = iVar3;
  *(int *)(param_1 + 0xb8) = iVar3;
  *(undefined4 *)(param_1 + 100) = 0;
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cc2b0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
  FUN_080cc0a4(param_1);
  return in_lr;
}


