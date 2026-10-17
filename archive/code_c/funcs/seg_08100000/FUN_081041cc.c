// undefined FUN_081041cc(void)
// entry 0x81041cc


undefined4 FUN_081041cc(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined4 in_lr;
  
  iVar3 = DAT_08104360;
  puVar2 = DAT_0810435c;
  iVar6 = DAT_08104358;
  iVar8 = DAT_08104270;
  puVar1 = DAT_0810426c;
  iVar7 = DAT_08104268;
  if (*(char *)(param_1 + 0x13) != '\0') {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
    goto LAB_08104308;
  }
  if (*(byte *)(param_1 + 0x12) < 4) {
    if (*(int *)(param_1 + 0xb4 + (uint)*(byte *)(param_1 + 0x12) * 4) != 0) goto LAB_08104308;
    uVar10 = *DAT_0810426c * DAT_08104270 + DAT_08104274;
    *DAT_0810426c = uVar10 & 0x7fffffff;
    iVar6 = FUN_08129198((uVar10 & 0x7fffffff) >> 0x10,0x7000);
    iVar7 = FUN_081040c0(*(int *)(iVar7 + 0x38) + iVar6 * 2 + DAT_08104278,
                         *(int *)(iVar7 + 0x3c) + DAT_0810427c,2);
    *(int *)(param_1 + 0xb4 + (uint)*(byte *)(param_1 + 0x12) * 4) = iVar7;
    if (iVar7 == 0) goto LAB_08104308;
    uVar10 = *puVar1 * iVar8 + DAT_08104274;
    *puVar1 = uVar10 & 0x7fffffff;
    *(byte *)(param_1 + 0x13) = ((byte)(uVar10 >> 0x10) & 0xf) + 8;
    cVar5 = *(char *)(param_1 + 0x12) + '\x01';
  }
  else {
    if (*(int *)((uint)*(byte *)(param_1 + 0x12) * 4 + param_1 + 0x4c) != 0) goto LAB_08104308;
    uVar10 = *DAT_0810435c * DAT_08104360 + DAT_08104364;
    *DAT_0810435c = uVar10 & 0x7fffffff;
    iVar7 = FUN_08129198((uVar10 & 0x7fffffff) >> 0x10,0x7000);
    iVar7 = FUN_081040c0(*(int *)(iVar6 + 0x38) + iVar7 * 2 + DAT_08104368,
                         *(int *)(iVar6 + 0x3c) + DAT_0810436c,2);
    *(int *)((uint)*(byte *)(param_1 + 0x12) * 4 + param_1 + 0x4c) = iVar7;
    if (iVar7 == 0) goto LAB_08104308;
    uVar10 = *puVar2 * iVar3 + DAT_08104364;
    *puVar2 = uVar10 & 0x7fffffff;
    *(byte *)(param_1 + 0x13) = ((byte)(uVar10 >> 0x10) & 0xf) + 8;
    bVar4 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar4;
    if (bVar4 < 8) goto LAB_08104308;
    cVar5 = '\0';
  }
  *(char *)(param_1 + 0x12) = cVar5;
LAB_08104308:
  uVar10 = 0;
  do {
    piVar9 = (int *)(param_1 + 0xb4 + uVar10 * 4);
    iVar7 = *piVar9;
    if ((iVar7 != 0) && (2 < *(byte *)(iVar7 + 0xc))) {
      *piVar9 = 0;
    }
    uVar10 = uVar10 + 1 & 0xff;
  } while (uVar10 < 4);
  uVar10 = 0;
  do {
    iVar8 = uVar10 * 4 + param_1;
    iVar7 = *(int *)(iVar8 + 0x5c);
    if ((iVar7 != 0) && (2 < *(byte *)(iVar7 + 0xc))) {
      *(undefined4 *)(iVar8 + 0x5c) = 0;
    }
    uVar10 = uVar10 + 1 & 0xff;
  } while (uVar10 < 4);
  return in_lr;
}


