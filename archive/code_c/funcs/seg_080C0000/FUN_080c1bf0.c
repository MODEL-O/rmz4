// undefined FUN_080c1bf0(void)
// entry 0x80c1bf0


undefined4 FUN_080c1bf0(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x3e00);
  FUN_0801cff0(param_1);
  bVar1 = *(byte *)(iVar7 + 10) >> 4;
  bVar4 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar4;
  pbVar6 = (byte *)(param_1 + 0x4a);
  *pbVar6 = *pbVar6 & 0xef | bVar4 << 4;
  bVar1 = *(byte *)(iVar7 + 10) >> 5;
  bVar4 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4d) = bVar4;
  *pbVar6 = *pbVar6 & 0xdf | bVar4 << 5;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080c1ce8,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar3 = *(undefined4 *)(iVar7 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar7 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x200;
    *(int *)(param_1 + 0x5c) = -*(int *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_080c1d48);
    uVar5 = (uint)*(byte *)(param_1 + 0x11);
    if ((*(byte *)(iVar7 + 10) & 0x20) == 0) goto LAB_080c1d28;
    iVar7 = -*(int *)(uVar5 * 4 + DAT_080c1d4c);
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + DAT_080c1cec;
    *(undefined4 *)(param_1 + 0x5c) =
         *(undefined4 *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_080c1cf0);
    uVar5 = (uint)*(byte *)(param_1 + 0x11);
    if ((*(byte *)(iVar7 + 10) & 0x20) == 0) goto LAB_080c1d28;
    iVar7 = *(int *)(uVar5 * 4 + DAT_080c1cf4);
  }
  *(int *)(param_1 + 100) = iVar7;
LAB_080c1d28:
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(uVar5 * 4 + DAT_080c1d50);
  if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_080c1d84;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(uVar5 * 4 + DAT_080c1d88);
  }
  else {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1100;
  }
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c1d8c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080c1b90(param_1);
  return in_lr;
}


