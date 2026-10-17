// undefined FUN_080e95cc(void)
// entry 0x80e95cc


undefined4 FUN_080e95cc(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar5 = *(byte *)(param_1 + 0x10) + 8;
  iVar6 = iVar5 * 0x14;
  iVar2 = iVar6 + DAT_080e96f8;
  iVar5 = iVar5 * 2;
  FUN_08001d30(iVar2,((uint)*(ushort *)(iVar5 + DAT_080e96fc) - (uint)(*(ushort *)(iVar2 + 6) >> 6))
                     * 0x20 + 0x10000);
  iVar6 = iVar6 + DAT_080e9700;
  FUN_08002208(iVar6,((uint)*(ushort *)(iVar5 + DAT_080e9704) - (uint)*(byte *)(iVar6 + 7)) * 0x20 +
                     0x200);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x800);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080e9708,param_1 + 0x54,6);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined4 *)(param_1 + 0x30) = DAT_080e970c;
  *(undefined2 *)(param_1 + 0x26) = 1;
  uVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  sVar1 = FUN_08007c7c(*(int *)(param_1 + 0x54) + DAT_080e9710);
  if (sVar1 != 0) {
    iVar2 = FUN_0800834c(*(int *)(param_1 + 0x54) + DAT_080e9710,*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + DAT_080e9714 + iVar2;
  }
  sVar1 = FUN_08007c7c(*(int *)(param_1 + 0x54) + 0xc00,*(undefined4 *)(param_1 + 0x58));
  if (sVar1 != 0) {
    iVar2 = FUN_0800816c(*(int *)(param_1 + 0x54) + 0xc00,*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x100 + iVar2;
  }
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e9718);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
  FUN_080e971c(param_1);
  return in_lr;
}


