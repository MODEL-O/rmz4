// undefined FUN_080c8904(void)
// entry 0x80c8904


undefined4 FUN_080c8904(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x28);
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  uVar2 = *DAT_080c89a0 * DAT_080c89a4 + DAT_080c89a8;
  *DAT_080c89a0 = uVar2 & 0x7fffffff;
  sVar1 = FUN_08129198((uVar2 & 0x7fffffff) >> 0x10,0xc);
  FUN_0801cf00(param_1,sVar1 + 0x6c00);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  iVar5 = DAT_080c89ac;
  pbVar7 = (byte *)(param_1 + 0xbc);
  iVar6 = *(int *)(iVar8 + 0x54) + *(int *)((uint)*pbVar7 * 4 + DAT_080c89ac);
  *(int *)(param_1 + 0x54) = iVar6;
  if ((2 < *pbVar7) && (sVar1 = FUN_08007c7c(iVar6,*(undefined4 *)(param_1 + 0x58)), sVar1 != 0)) {
    if (*pbVar7 == 3) {
      iVar6 = *(int *)(iVar8 + 0x54);
      iVar5 = *(int *)(iVar5 + 0x10);
    }
    else {
      iVar6 = *(int *)(iVar8 + 0x54);
      iVar5 = *(int *)(iVar5 + 0xc);
    }
    *(int *)(param_1 + 0x54) = iVar6 + iVar5;
  }
  uVar3 = FUN_08008534(*(undefined4 *)(iVar8 + 0x54),*(undefined4 *)(iVar8 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined1 *)(param_1 + 0x12) = 0;
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c89e4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
  FUN_080c88a4(param_1);
  return in_lr;
}


