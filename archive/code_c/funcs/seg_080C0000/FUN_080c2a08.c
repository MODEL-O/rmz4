// undefined FUN_080c2a08(void)
// entry 0x80c2a08


undefined4 FUN_080c2a08(int param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  byte bVar4;
  undefined4 in_lr;
  byte abStack_18 [4];
  
  FUN_08129258(abStack_18,DAT_080c2a54,2);
  bVar1 = *(byte *)(param_1 + 0x11);
  bVar2 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
  bVar4 = bVar2 & 1;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c2a58);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cc9c(param_1);
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4c) = bVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,(uint)abStack_18[bVar1] * 0x18 + DAT_080c2abc,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080c2bb8(param_1);
  return in_lr;
}


