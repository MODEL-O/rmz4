// undefined FUN_0805529c(void)
// entry 0x805529c


undefined4 FUN_0805529c(int param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x54);
  bVar1 = iVar5 < *(int *)(*DAT_0805534c + 0x54);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08055350);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar4 = FUN_08008534(iVar5,*(undefined4 *)(param_1 + 0x58),iVar5,0);
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  pbVar6 = (byte *)(param_1 + 0xb4);
  *pbVar6 = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  FUN_080503cc(param_1,DAT_08055390,0x40);
  *(undefined4 *)(param_1 + 0x98) = DAT_08055394;
  FUN_0805972c(param_1);
  *pbVar6 = *pbVar6 & 0xfe;
  FUN_08055398(param_1);
  return in_lr;
}


