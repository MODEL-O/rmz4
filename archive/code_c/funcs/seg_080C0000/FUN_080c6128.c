// undefined FUN_080c6128(void)
// entry 0x80c6128


undefined4 FUN_080c6128(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_080c615c);
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
  FUN_08005760(param_1 + 0x74,DAT_080c61b4,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar2 = DAT_080c61e0;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar2 = 0x300;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined1 *)(param_1 + 0x12) = 0xff;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c61e4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  FUN_080c61e8(param_1);
  return in_lr;
}


