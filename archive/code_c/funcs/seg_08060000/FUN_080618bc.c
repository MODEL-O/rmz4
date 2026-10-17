// undefined FUN_080618bc(void)
// entry 0x80618bc


undefined4 FUN_080618bc(int param_1)

{
  byte bVar1;
  int *piVar2;
  short *psVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar5 = FUN_080dad0c(param_1 + 0x54,0,0xc1);
    *(int *)(param_1 + 0xc0) = iVar5;
    if (iVar5 == 0) {
      return in_lr;
    }
    *(undefined1 *)(iVar5 + 0x74) = 0xff;
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x75) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x76) = 0;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) / 2;
    *(undefined1 *)(param_1 + 0x12) = 8;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar5 = *(int *)(param_1 + 0x60) + -0x40;
  *(int *)(param_1 + 0x60) = iVar5;
  if (iVar5 < 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  piVar2 = DAT_08061980;
  iVar5 = *(int *)(param_1 + 0xc0);
  if (iVar5 == 0) goto LAB_08061a44;
  piVar6 = (int *)((uint)*(byte *)(*DAT_08061980 + 0x174) * 8 + DAT_0806197c);
  iVar10 = *piVar6;
  iVar11 = piVar6[1];
  *(int *)(iVar5 + 0x60) = *(int *)(param_1 + 0x58) + 0x100;
  *(int *)(iVar5 + 0x80) = *(int *)(param_1 + 0x58) + 0x100;
  iVar8 = DAT_08061984;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar8 = 0x700;
    *(int *)(iVar5 + 0x54) = *(int *)(param_1 + 0x54) + 0x700;
    iVar7 = *(int *)(param_1 + 0x54);
    iVar9 = 0x500;
  }
  else {
    *(int *)(iVar5 + 0x54) = *(int *)(param_1 + 0x54) + DAT_08061984;
    iVar7 = *(int *)(param_1 + 0x54);
    iVar9 = DAT_08061988;
  }
  *(int *)(iVar5 + 100) = iVar7 + iVar9;
  *(int *)(iVar5 + 0x5c) = *(int *)(param_1 + 0x54) + iVar9;
  *(int *)(iVar5 + 0x7c) = *(int *)(param_1 + 0x54) + iVar8;
  psVar3 = DAT_080619ec;
  if ((DAT_080619ec[4] & 8U) == 0) {
    iVar8 = *piVar2;
    iVar7 = (iVar11 << 0x10) >> 0x11;
    iVar9 = *(int *)(iVar8 + 0x58);
    if ((iVar9 + iVar7 <= *(int *)(iVar5 + 0x54)) || (*(int *)(iVar5 + 0x54) <= iVar9 - iVar7))
    goto LAB_080619f0;
    iVar10 = iVar10 >> 0x10;
    iVar11 = iVar11 >> 0x11;
    *(int *)(iVar5 + 0x54) = (iVar9 + iVar10) - iVar11;
    *(int *)(iVar5 + 100) = (*(int *)(iVar8 + 0x58) + iVar10) - iVar11;
  }
  else {
LAB_080619f0:
    *(int *)(iVar5 + 0x58) = *(int *)(param_1 + 0xb8) + 0x400;
    *(int *)(iVar5 + 0x68) = *(int *)(param_1 + 0xb8) + 0x400;
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x78) = 0xff;
    *(byte *)(*(int *)(param_1 + 0xc0) + 0x79) = bVar1 & 1;
  }
  else if (*psVar3 == 0xb) {
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x78) = 0x39;
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x79) = 6;
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x78) = 0x35;
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x79) = 10;
  }
LAB_08061a44:
  cVar4 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar4;
  if (cVar4 == -1) {
    if (*(int *)(param_1 + 0xc0) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x77) = 1;
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
    *(undefined1 *)(param_1 + 0xd) = 0x22;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


