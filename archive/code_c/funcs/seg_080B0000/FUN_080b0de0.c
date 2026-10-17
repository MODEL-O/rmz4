// undefined FUN_080b0de0(void)
// entry 0x80b0de0


undefined4 FUN_080b0de0(int param_1)

{
  byte bVar1;
  int *piVar2;
  byte bVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
  bVar3 = bVar1 & 1;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b0e4c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined1 *)(param_1 + 0xbc) = *(undefined1 *)(param_1 + 0x11);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(undefined1 *)(param_1 + 0x25) = 0x19;
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3 | 4;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
  FUN_080b0e80(param_1);
  return in_lr;
}


