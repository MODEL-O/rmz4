// undefined FUN_080c5574(void)
// entry 0x80c5574


undefined4 FUN_080c5574(int param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  undefined4 in_lr;
  byte abStack_18 [4];
  
  FUN_08129258(abStack_18,DAT_080c55d0,2);
  bVar2 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
  bVar5 = bVar2 & 1;
  bVar1 = *(byte *)(param_1 + 0x11);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c55d4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar4 = *(int *)(param_1 + 0x60);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x1f;
  }
  *(int *)(param_1 + 0x68) = -(iVar4 >> 5);
  FUN_0801cc9c(param_1);
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4c) = bVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar5 << 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,(uint)abStack_18[bVar1] * 0x18 + DAT_080c5638,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080c56d4(param_1);
  return in_lr;
}


