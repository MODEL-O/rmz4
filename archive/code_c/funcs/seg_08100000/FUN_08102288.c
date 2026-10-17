// undefined FUN_08102288(void)
// entry 0x8102288


undefined4 FUN_08102288(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  bVar3 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar3 | 3;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_081022c0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  if (*(byte *)(param_1 + 0x11) == 0) {
    bVar3 = bVar3 & 0xef | 3;
  }
  else {
    bVar3 = bVar3 | 0x13;
  }
  *(byte *)(param_1 + 10) = bVar3;
  bVar3 = *(byte *)(param_1 + 0x11) & 1;
  *(byte *)(param_1 + 0x4c) = bVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
  uVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_08102314));
  FUN_08102318(param_1);
  return in_lr;
}


