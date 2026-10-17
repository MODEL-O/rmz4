// undefined FUN_080e5bf4(void)
// entry 0x80e5bf4


undefined4 FUN_080e5bf4(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  if (1 < *(byte *)(iVar6 + 0xc)) {
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar4 = (uint)*(byte *)(iVar6 + 10);
  if ((*(byte *)(iVar6 + 10) & 0x40) == 0) {
    if (((uVar4 & 0x30) >> 4 & 1) == 0) {
      iVar7 = *(int *)(iVar6 + 0x54) + *(int *)(param_1 + 0x74);
    }
    else {
      iVar7 = *(int *)(iVar6 + 0x54) - *(int *)(param_1 + 0x74);
    }
    *(int *)(param_1 + 0x54) = iVar7;
    if (((*(byte *)(iVar6 + 10) & 0x30) >> 4 & 2) == 0) {
      iVar7 = *(int *)(iVar6 + 0x58) + *(int *)(param_1 + 0x78);
    }
    else {
      iVar7 = *(int *)(iVar6 + 0x58) - *(int *)(param_1 + 0x78);
    }
    *(int *)(param_1 + 0x58) = iVar7;
  }
  else {
    iVar8 = (int)*(short *)((0xff - *(byte *)(iVar6 + 0x24) & 0xff) * 2 + DAT_080e5c68);
    iVar7 = (int)*(short *)((0x3f - *(byte *)(iVar6 + 0x24) & 0xff) * 2 + DAT_080e5c68);
    if (((uVar4 & 0x30) >> 4 & 1) == 0) {
      iVar5 = *(int *)(param_1 + 0x74);
    }
    else {
      iVar5 = -*(int *)(param_1 + 0x74);
    }
    if (((uVar4 & 0x30) >> 4 & 2) == 0) {
      iVar3 = *(int *)(param_1 + 0x78);
    }
    else {
      iVar3 = -*(int *)(param_1 + 0x78);
    }
    *(int *)(param_1 + 0x54) = *(int *)(iVar6 + 0x54) + (iVar5 * iVar7 >> 8) + (iVar3 * iVar8 >> 8);
    *(int *)(param_1 + 0x58) =
         (*(int *)(iVar6 + 0x58) - (iVar5 * iVar8 >> 8)) + (iVar3 * iVar7 >> 8);
  }
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0x12) == '\0') || (2 < *(byte *)(iVar6 + 0xc))) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e5d18);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  return in_lr;
}


