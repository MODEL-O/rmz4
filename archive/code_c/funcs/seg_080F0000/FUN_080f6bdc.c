// undefined FUN_080f6bdc(void)
// entry 0x80f6bdc


undefined4 FUN_080f6bdc(int param_1)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  bool bVar5;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x5e00);
  bVar5 = *(char *)(param_1 + 0x10) == '\0';
  if (bVar5) {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(bool *)(param_1 + 0x4c) = bVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar5 << 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  iVar4 = param_1 + 0x54;
  FUN_08005760(param_1 + 0x74,DAT_080f6cac,iVar4,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar2 = FUN_0801fb14(DAT_080f6cb0,iVar4);
  if (uVar2 <= DAT_080f6cb4) {
    FUN_0801fe64(1,iVar4);
    FUN_08002b10(0x17e);
  }
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f6cb8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  FUN_080f6cbc(param_1);
  return in_lr;
}


