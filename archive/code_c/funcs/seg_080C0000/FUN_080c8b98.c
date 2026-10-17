// undefined FUN_080c8b98(void)
// entry 0x80c8b98


undefined4 FUN_080c8b98(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
  FUN_08005760(param_1 + 0x74,DAT_080c8be8,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar3 = *(undefined4 *)(iVar5 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  bVar1 = *(byte *)(iVar5 + 10) >> 4;
  bVar4 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
  *(undefined4 *)(param_1 + 0x98) = DAT_080c8c3c;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c8c40);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080c88a4(param_1);
  return in_lr;
}


