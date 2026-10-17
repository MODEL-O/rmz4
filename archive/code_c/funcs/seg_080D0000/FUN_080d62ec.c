// undefined FUN_080d62ec(void)
// entry 0x80d62ec


undefined4 FUN_080d62ec(int param_1)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  byte *pbVar7;
  byte bVar8;
  byte bVar9;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  bVar3 = *(byte *)(iVar4 + 10) >> 4;
  bVar8 = bVar3 & 1;
  bVar2 = *(byte *)(iVar4 + 10) >> 5;
  bVar9 = bVar2 & 1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  FUN_0801cc9c(param_1);
  FUN_0801cf00(param_1,DAT_080d6334);
  if ((bVar3 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar3;
  *(byte *)(param_1 + 0x4c) = bVar8;
  pbVar7 = (byte *)(param_1 + 0x4a);
  *pbVar7 = *pbVar7 & 0xef | bVar8 << 4;
  if ((bVar2 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar3;
  *(byte *)(param_1 + 0x4d) = bVar9;
  *pbVar7 = *pbVar7 & 0xdf | bVar9 << 5;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar4 + 0x5c);
  bVar1 = (byte)(*(char *)(iVar4 + 0xf) - 1U) < 2;
  *(bool *)(param_1 + 0x13) = bVar1;
  uVar5 = 0;
  if (bVar1) {
    uVar5 = *(undefined4 *)(iVar4 + 0x60);
  }
  *(undefined4 *)(param_1 + 0x60) = uVar5;
  *(undefined1 *)(param_1 + 0x12) = 0x16;
  piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d63e4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 4);
  FUN_080d62b4(param_1);
  return in_lr;
}


