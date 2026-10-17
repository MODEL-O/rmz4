// undefined FUN_08104410(void)
// entry 0x8104410


undefined4 FUN_08104410(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 in_lr;
  
  iVar3 = DAT_081045e0;
  iVar9 = DAT_081045dc;
  puVar2 = DAT_081045d8;
  iVar5 = DAT_081045d4;
  iVar10 = DAT_081044d4;
  iVar7 = DAT_081044d0;
  puVar1 = DAT_081044cc;
  iVar6 = DAT_081044c8;
  if (*(char *)(param_1 + 0x13) == '\0') {
    if (*(byte *)(param_1 + 0x12) < 4) {
      if (*(int *)(param_1 + 0xb4 + (uint)*(byte *)(param_1 + 0x12) * 4) == 0) {
        uVar11 = *DAT_081044cc * DAT_081044d0 + DAT_081044d4;
        uVar12 = uVar11 & 0x7fffffff;
        *DAT_081044cc = uVar12;
        iVar5 = FUN_08129198((uVar11 & 0x7fffffff) >> 0x10,0x5000);
        iVar5 = iVar5 * 2 + DAT_081044d8;
        iVar9 = *(int *)(iVar6 + 0x38);
        iVar6 = *(int *)(iVar6 + 0x3c) + DAT_081044dc;
        uVar11 = uVar12 * iVar7 + iVar10;
        *puVar1 = uVar11 & 0x7fffffff;
        iVar6 = FUN_081040c0(iVar9 + iVar5,iVar6,((uVar11 & 0x7fffffff) >> 0x10 & 1) + 3);
        *(int *)((uint)*(byte *)(param_1 + 0x12) * 4 + param_1 + 0xb4) = iVar6;
        if (iVar6 != 0) {
          uVar11 = *puVar1 * iVar7 + iVar10;
          *puVar1 = uVar11 & 0x7fffffff;
          *(byte *)(param_1 + 0x13) = ((byte)(uVar11 >> 0x10) & 0x3f) + 0x10;
          *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
        }
      }
    }
    else if (*(int *)((uint)*(byte *)(param_1 + 0x12) * 4 + param_1 + 0x4c) == 0) {
      uVar11 = *DAT_081045d8 * DAT_081045dc + DAT_081045e0;
      uVar12 = uVar11 & 0x7fffffff;
      *DAT_081045d8 = uVar12;
      iVar6 = FUN_08129198((uVar11 & 0x7fffffff) >> 0x10,0x5000);
      iVar6 = iVar6 * 2 + DAT_081045e4;
      iVar10 = *(int *)(iVar5 + 0x38);
      iVar7 = *(int *)(iVar5 + 0x3c) + DAT_081045e8;
      uVar11 = uVar12 * iVar9 + iVar3;
      *puVar2 = uVar11 & 0x7fffffff;
      iVar6 = FUN_081040c0(iVar10 + iVar6,iVar7,((uVar11 & 0x7fffffff) >> 0x10 & 1) + 3);
      *(int *)((uint)*(byte *)(param_1 + 0x12) * 4 + param_1 + 0x4c) = iVar6;
      if (iVar6 != 0) {
        uVar11 = *puVar2 * iVar9 + iVar3;
        *puVar2 = uVar11 & 0x7fffffff;
        *(byte *)(param_1 + 0x13) = ((byte)(uVar11 >> 0x10) & 0x3f) + 0x10;
        bVar4 = *(char *)(param_1 + 0x12) + 1;
        *(byte *)(param_1 + 0x12) = bVar4;
        if (7 < bVar4) {
          *(undefined1 *)(param_1 + 0x12) = 0;
        }
      }
    }
  }
  else {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
  }
  uVar11 = 0;
  do {
    piVar8 = (int *)(param_1 + 0xb4 + uVar11 * 4);
    iVar6 = *piVar8;
    if ((iVar6 != 0) && (2 < *(byte *)(iVar6 + 0xc))) {
      *piVar8 = 0;
    }
    uVar11 = uVar11 + 1 & 0xff;
  } while (uVar11 < 4);
  uVar11 = 0;
  do {
    iVar7 = uVar11 * 4 + param_1;
    iVar6 = *(int *)(iVar7 + 0x5c);
    if ((iVar6 != 0) && (2 < *(byte *)(iVar6 + 0xc))) {
      *(undefined4 *)(iVar7 + 0x5c) = 0;
    }
    uVar11 = uVar11 + 1 & 0xff;
  } while (uVar11 < 4);
  return in_lr;
}


