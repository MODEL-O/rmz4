// undefined FUN_08040ef8(void)
// entry 0x8040ef8


undefined4 FUN_08040ef8(int param_1)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x28);
  FUN_0801cff0();
  uVar6 = (uint)CONCAT11(*(undefined1 *)(iVar8 + 0x1e),*(undefined1 *)(iVar8 + 0x70));
  if (uVar6 == DAT_08040f28) {
LAB_08040f78:
    iVar5 = 0xd00;
    iVar9 = DAT_08040f80;
  }
  else {
    if ((int)DAT_08040f28 < (int)uVar6) {
      if (uVar6 != DAT_08040f54) {
        if ((int)DAT_08040f54 < (int)uVar6) {
          if (uVar6 != DAT_08040f68) {
            iVar5 = DAT_08040f8c;
            iVar9 = DAT_08040f90;
            if (uVar6 != DAT_08040f68 + 0xfa) goto LAB_08040f94;
            goto LAB_08040fd0;
          }
        }
        else if (uVar6 != DAT_08040f54 - 2) goto LAB_08040f94;
      }
      goto LAB_08040f78;
    }
    if (uVar6 != DAT_08040f28 - 0xfe) {
      if ((int)(DAT_08040f28 - 0xfe) < (int)uVar6) {
        if (uVar6 == DAT_08040f3c) goto LAB_08040f6c;
        uVar2 = DAT_08040f3c + 2;
      }
      else {
        uVar2 = DAT_08040f28 - 0x100;
      }
      if (uVar6 != uVar2) {
LAB_08040f94:
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined1 *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08040fcc);
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
        return in_lr;
      }
    }
LAB_08040f6c:
    iVar5 = 0x1300;
    iVar9 = DAT_08040f74;
  }
LAB_08040fd0:
  if (CONCAT11(*(undefined1 *)(iVar8 + 0x1e),*(undefined1 *)(iVar8 + 0x70)) == DAT_08041000) {
    *(undefined1 *)(param_1 + 0x24) = 0xe0;
    bVar7 = ~(*(byte *)(iVar8 + 10) >> 4) & 1;
    if (bVar7 != 0) {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
      goto LAB_08041056;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_1 + 0xbc);
    iVar4 = (uint)*(byte *)(iVar8 + 0xc3) * 0xc +
            *(int *)((uint)*(byte *)(iVar8 + DAT_0804104c) * 4 + DAT_08041048);
    iVar5 = iVar5 + *(int *)(iVar4 + 4);
    iVar9 = iVar9 + *(int *)(iVar4 + 8);
    bVar1 = *(byte *)(iVar8 + 10) >> 4;
    bVar7 = bVar1 & 1;
    if ((bVar1 & 1) != 0) {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
      goto LAB_08041056;
    }
  }
  bVar1 = *(byte *)(param_1 + 10) & 0xef;
LAB_08041056:
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar7;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar7 << 4;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar5 = *(int *)(iVar8 + 0x54) + iVar5;
  }
  else {
    iVar5 = *(int *)(iVar8 + 0x54) - iVar5;
  }
  *(int *)(param_1 + 0x54) = iVar5;
  *(int *)(param_1 + 0x58) = *(int *)(iVar8 + 0x58) + iVar9;
  return in_lr;
}


