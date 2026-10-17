// undefined FUN_080c563c(void)
// entry 0x80c563c


undefined4 FUN_080c563c(int param_1)

{
  byte bVar1;
  int *piVar2;
  byte bVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
  bVar3 = bVar1 & 1;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c567c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cc9c(param_1);
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080c56d0,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080c56d4(param_1);
  return in_lr;
}


