// undefined FUN_080b1700(void)
// entry 0x80b1700


undefined4 FUN_080b1700(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  bVar3 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar3 | 3;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b1738);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  if (*(byte *)(param_1 + 0x10) == 0) {
    bVar3 = bVar3 & 0xef | 3;
  }
  else {
    bVar3 = bVar3 | 0x13;
  }
  *(byte *)(param_1 + 10) = bVar3;
  bVar3 = *(byte *)(param_1 + 0x10) & 1;
  *(byte *)(param_1 + 0x4c) = bVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080b17a8,param_1 + 0x54,6);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080b17ac;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  uVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  FUN_080b17b0(param_1);
  return in_lr;
}


