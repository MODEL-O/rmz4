// undefined FUN_08012e80(void)
// entry 0x8012e80


undefined4 FUN_08012e80(int param_1)

{
  ushort uVar1;
  short sVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  undefined4 in_lr;
  
  iVar6 = *(int *)(*(int *)(DAT_08012eac + DAT_08012eb0) + 0x54);
  iVar5 = *(int *)(*(int *)(DAT_08012eac + DAT_08012eb0) + 0x58);
  if (iVar6 <= DAT_08012eb4) {
    if (iVar5 <= DAT_08012eb8) {
      iVar8 = 0x100;
      goto LAB_08012ede;
    }
    if (0x28000 < iVar5) {
      iVar8 = 0x440;
      goto LAB_08012ede;
    }
  }
  iVar8 = 0x470;
  if ((DAT_0801309c < iVar6) && (iVar5 <= DAT_080130a0)) {
    iVar8 = 0x140;
  }
LAB_08012ede:
  puVar3 = (uint *)FUN_08000a70(0x280);
  iVar5 = DAT_080130a4;
  if (puVar3 != (uint *)0x0) {
    *(uint **)(DAT_080130a4 + 0x174) = puVar3;
    *(undefined4 *)(iVar5 + 0x178) = DAT_080130a8;
    *(undefined4 *)(iVar5 + 0x17c) = DAT_080130ac;
    uVar1 = *(ushort *)(param_1 + 0x68);
    iVar6 = *(int *)(param_1 + 0x34);
    iVar8 = *(int *)(param_1 + 0x38) - iVar8;
    iVar7 = 0;
    sVar2 = (short)iVar8;
    iVar5 = (int)sVar2;
    if (iVar5 < 0x28) {
      puVar9 = puVar3;
      do {
        *puVar9 = iVar5 << 0x10 | (uint)(uVar1 >> 4) + (iVar6 >> 2) & 0xffff;
        puVar9 = puVar9 + 1;
        iVar7 = iVar7 + 1;
        if (0x9f < iVar7) break;
      } while (iVar5 + iVar7 < 0x28);
    }
    uVar1 = *(ushort *)(param_1 + 0x6a);
    iVar5 = *(int *)(param_1 + 0x34);
    if ((iVar7 < 0xa0) && (iVar6 = (int)sVar2, iVar6 + iVar7 < 0x48)) {
      puVar9 = puVar3 + iVar7;
      do {
        *puVar9 = iVar6 << 0x10 | (uint)(uVar1 >> 4) + (iVar5 >> 3) & 0xffff;
        puVar9 = puVar9 + 1;
        iVar7 = iVar7 + 1;
        if (0x9f < iVar7) break;
      } while (iVar6 + iVar7 < 0x48);
    }
    uVar1 = *(ushort *)(param_1 + 0x6c);
    iVar5 = *(int *)(param_1 + 0x34);
    if ((iVar7 < 0xa0) && (iVar6 = (int)sVar2, iVar6 + iVar7 < 0x58)) {
      puVar9 = puVar3 + iVar7;
      do {
        *puVar9 = iVar6 << 0x10 | (uint)(uVar1 >> 4) + (iVar5 >> 4) & 0xffff;
        puVar9 = puVar9 + 1;
        iVar7 = iVar7 + 1;
        if (0x9f < iVar7) break;
      } while (iVar6 + iVar7 < 0x58);
    }
    uVar1 = *(ushort *)(param_1 + 0x6e);
    iVar5 = *(int *)(param_1 + 0x34);
    if ((iVar7 < 0xa0) && (iVar6 = (int)sVar2, iVar6 + iVar7 < 0x68)) {
      puVar9 = puVar3 + iVar7;
      do {
        *puVar9 = iVar6 << 0x10 | (uint)(uVar1 >> 4) + (iVar5 >> 5) & 0xffff;
        puVar9 = puVar9 + 1;
        iVar7 = iVar7 + 1;
        if (0x9f < iVar7) break;
      } while (iVar6 + iVar7 < 0x68);
    }
    uVar1 = *(ushort *)(param_1 + 0x70);
    iVar5 = *(int *)(param_1 + 0x34);
    if (iVar7 < 0xa0) {
      uVar4 = iVar8 * 0x10000;
      iVar6 = (int)uVar4 >> 0x10;
      if (iVar6 + iVar7 < 0x70) {
        puVar9 = puVar3 + iVar7;
        do {
          *puVar9 = iVar6 << 0x10 | (uint)(uVar1 >> 4) + (iVar5 >> 6) & 0xffff;
          puVar9 = puVar9 + 1;
          iVar7 = iVar7 + 1;
          if (0x9f < iVar7) {
            return in_lr;
          }
        } while (iVar6 + iVar7 < 0x70);
      }
      if (iVar7 < 0xa0) {
        puVar3 = puVar3 + iVar7;
        do {
          *puVar3 = uVar4;
          puVar3 = puVar3 + 1;
          iVar7 = iVar7 + 1;
        } while (iVar7 < 0xa0);
      }
    }
  }
  return in_lr;
}


