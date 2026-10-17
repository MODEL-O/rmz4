// undefined FUN_080d3c90(void)
// entry 0x80d3c90


undefined4 FUN_080d3c90(int param_1)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  FUN_0801cff0();
  if (((*(uint *)(iVar7 + 0x8c) & 0x200) != 0) || (*(short *)(iVar7 + 0xa4) == 0)) {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d3cd4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    FUN_080d3e6c(param_1);
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x54);
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (((*(byte *)(param_1 + 10) & 0x20) == 0) && (*(char *)(param_1 + 0x71) < '\x02')) {
      *(byte *)(iVar7 + 0x142) = *(byte *)(iVar7 + 0x142) | 8;
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar7 + 0x54);
  if ((*(ushort *)(DAT_080d3d3c + 0x1d0) & 0x7f) == 2) {
    uVar5 = FUN_08007b84(iVar7 + 0x54);
  }
  else {
    uVar5 = *(undefined4 *)(DAT_080d3d3c + DAT_080d3d58);
  }
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 2) {
LAB_080d3d98:
    if (*(int *)(param_1 + 0x7c) != *(int *)(param_1 + 0x54)) {
      cVar3 = *(char *)(param_1 + 0xd) + '\x01';
LAB_080d3dc4:
      *(char *)(param_1 + 0xd) = cVar3;
    }
  }
  else if (bVar1 < 3) {
    if (bVar1 == 1) {
      FUN_0801cf00(param_1,0x14);
      FUN_0801cff0(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
      *(undefined1 *)(param_1 + 0x4d) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      goto LAB_080d3d98;
    }
  }
  else {
    if (bVar1 == 3) {
      FUN_0801cf00(param_1,0x15);
      FUN_0801cff0(param_1);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    else if (bVar1 != 4) goto LAB_080d3dc6;
    if (*(int *)(param_1 + 0x7c) == *(int *)(param_1 + 0x54)) {
      cVar3 = '\x01';
      goto LAB_080d3dc4;
    }
  }
LAB_080d3dc6:
  iVar2 = DAT_080d3e08;
  iVar6 = *(int *)(iVar7 + 0x58);
  iVar8 = iVar6 - *(short *)((uint)*(byte *)(iVar7 + 0x174) * 8 + DAT_080d3e04 + 6);
  if ((*(ushort *)(DAT_080d3e08 + 0x1d0) & 0x7f) == 2) {
    iVar6 = FUN_08007b84(iVar7 + 0x54);
    if (iVar6 < iVar8) goto LAB_080d3e42;
    iVar6 = *(int *)(iVar7 + 0x58);
  }
  else if (*(int *)(DAT_080d3e08 + DAT_080d3e34) < iVar8) goto LAB_080d3e42;
  if ((*(ushort *)(iVar2 + 0x1d0) & 0x7f) == 2) {
    iVar7 = FUN_08007b84(iVar7 + 0x54);
  }
  else {
    iVar7 = *(int *)(iVar2 + DAT_080d3e64);
  }
  if (iVar7 <= iVar6) {
    return in_lr;
  }
LAB_080d3e42:
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d3e68);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
  FUN_080d3e6c(param_1);
  return in_lr;
}


