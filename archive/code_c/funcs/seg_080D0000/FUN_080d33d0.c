// undefined FUN_080d33d0(void)
// entry 0x80d33d0


undefined4 FUN_080d33d0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x28);
  if ((1 < *(byte *)(iVar8 + 0xc)) && (0xf < *(byte *)(param_1 + 0x12))) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xf;
  }
  cVar1 = *(char *)(param_1 + 0x12);
  bVar5 = cVar1 - 1;
  *(byte *)(param_1 + 0x12) = bVar5;
  if (*(char *)(DAT_080d3428 + 2) != '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d3454);
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar4 = *(undefined4 *)(*piVar3 + 0xc);
    goto LAB_080d34ec;
  }
  bVar7 = cVar1 - 1;
  if ((*(byte *)(param_1 + 0x7c) >> 1 < bVar7) ||
     (((*(byte *)(param_1 + 0x7c) >> 2 < bVar7 && ((bVar5 & 1) == 0)) || ((bVar5 & 3) == 0)))) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  if ((*(byte *)(iVar8 + 10) & 0x40) == 0) {
    if (((*(byte *)(iVar8 + 10) & 0x30) >> 4 & 1) == 0) {
      iVar2 = *(int *)(iVar8 + 0x54) + *(int *)(param_1 + 0x74);
    }
    else {
      iVar2 = *(int *)(iVar8 + 0x54) - *(int *)(param_1 + 0x74);
    }
    *(int *)(param_1 + 0x54) = iVar2;
    if (((*(byte *)(iVar8 + 10) & 0x30) >> 4 & 2) == 0) {
      iVar2 = *(int *)(iVar8 + 0x58);
      iVar6 = *(int *)(param_1 + 0x78);
      goto LAB_080d34c6;
    }
    iVar2 = *(int *)(iVar8 + 0x58) - *(int *)(param_1 + 0x78);
  }
  else if (*(ushort *)(iVar8 + 8) == DAT_080d3480) {
    *(int *)(param_1 + 0x54) = *(int *)(iVar8 + 0x54) + *(int *)(param_1 + 0x74);
    iVar2 = *(int *)(iVar8 + 0x58) + *(int *)(param_1 + 0x78);
    iVar6 = 0x1e00;
LAB_080d34c6:
    iVar2 = iVar2 + iVar6;
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar8 + 0x54);
    iVar2 = *(int *)(iVar8 + 0x58);
  }
  *(int *)(param_1 + 0x58) = iVar2;
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0x12) != '\0') && (*(byte *)(iVar8 + 0xc) < 3)) {
    return in_lr;
  }
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d34f4);
  *(undefined4 *)(param_1 + 0xc) = 2;
  uVar4 = *(undefined4 *)(*piVar3 + 8);
LAB_080d34ec:
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  return in_lr;
}


