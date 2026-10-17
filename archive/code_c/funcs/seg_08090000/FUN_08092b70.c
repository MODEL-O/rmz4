// undefined FUN_08092b70(void)
// entry 0x8092b70


undefined4 FUN_08092b70(int param_1)

{
  bool bVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  piVar2 = DAT_08092b94;
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(*DAT_08092b94 + 0x54);
  if (bVar1) {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar3;
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  iVar9 = *(int *)(*piVar2 + 0x54) - *(int *)(param_1 + 0x54);
  iVar8 = (*(int *)(*piVar2 + 0x58) + DAT_08092c20) - *(int *)(param_1 + 0x58);
  iVar4 = iVar9 >> 8;
  iVar5 = iVar8 >> 8;
  uVar6 = FUN_08128bf4(iVar4 * iVar4 + iVar5 * iVar5);
  iVar5 = (uVar6 & 0xffff) * 0x100;
  iVar4 = FUN_08128fb8(iVar9 * 0x100,iVar5);
  iVar5 = FUN_08128fb8(iVar8 * 0x100,iVar5);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    iVar4 = iVar4 * 0x180;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar4 = iVar4 >> 8;
    iVar5 = iVar5 * 0x180;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar5 = iVar5 >> 8;
  }
  else {
    iVar4 = iVar4 << 2;
    iVar5 = iVar5 << 2;
  }
  if ((iVar4 == 0) && (iVar5 == 0)) {
    uVar6 = *DAT_08092c54 * DAT_08092c58 + DAT_08092c5c;
    *DAT_08092c54 = uVar6 & 0x7fffffff;
    uVar7 = DAT_08092c6c;
    if (((uVar6 & 0x7fffffff) >> 0x10 & 1) != 0) {
      uVar7 = 0x180;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar7;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else {
    *(int *)(param_1 + 0x5c) = iVar4;
    *(int *)(param_1 + 0x60) = iVar5;
  }
  return in_lr;
}


