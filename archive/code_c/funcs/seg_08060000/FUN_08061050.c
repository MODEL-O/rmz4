// undefined FUN_08061050(void)
// entry 0x8061050


undefined4 FUN_08061050(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  piVar3 = (int *)((uint)*(byte *)(*DAT_08061198 + 0x174) * 8 + DAT_08061194);
  iVar5 = *piVar3;
  iVar6 = piVar3[1];
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806119c);
    *(undefined1 *)(param_1 + 0x12) = 0x26;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0xf) == '\0') && ('\x02' < *(char *)(param_1 + 0x71))) {
    iVar4 = FUN_080dad0c(param_1 + 0x54,0,0xc1);
    *(int *)(param_1 + 0xc0) = iVar4;
    if (iVar4 == 0) {
      return in_lr;
    }
    *(undefined1 *)(iVar4 + 0x74) = 0xff;
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x75) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x76) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar7;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 10;
  iVar4 = *(int *)(param_1 + 0xc0);
  if (iVar4 == 0) goto LAB_080612c4;
  iVar5 = iVar5 >> 0x10;
  iVar6 = iVar6 >> 0x11;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(iVar4 + 0x5c) = iVar7 + DAT_08061244;
    *(int *)(iVar4 + 0x7c) = *(int *)(param_1 + 0x54) + DAT_08061248;
    *(int *)(iVar4 + 0x60) = *(int *)(param_1 + 0x58) + DAT_0806124c;
    *(int *)(iVar4 + 0x80) = *(int *)(param_1 + 0x58) + DAT_08061250;
    iVar7 = *DAT_08061254;
    iVar8 = *(int *)(iVar7 + 0x54);
    iVar9 = *(int *)(iVar4 + 0x60) + (*(int *)(iVar4 + 0x5c) - iVar8);
    iVar5 = *(int *)(iVar7 + 0x58) + iVar5;
    if ((iVar5 + iVar6 <= iVar9) || (iVar9 <= iVar5 - iVar6)) {
      iVar5 = *(int *)(param_1 + 0xb8) + 0x400;
      *(int *)(iVar4 + 0x58) = iVar5;
      iVar6 = *(int *)(param_1 + 0xb8) + 0x400;
      *(int *)(iVar4 + 0x68) = iVar6;
      *(int *)(iVar4 + 0x54) = *(int *)(iVar4 + 0x7c) - (iVar5 - *(int *)(iVar4 + 0x80));
      iVar5 = *(int *)(iVar4 + 0x5c) - (iVar6 - *(int *)(iVar4 + 0x60));
      goto LAB_08061280;
    }
    *(int *)(iVar4 + 0x54) = iVar8;
    iVar5 = *(int *)(iVar7 + 0x54);
    *(int *)(iVar4 + 100) = iVar5;
    *(int *)(iVar4 + 0x58) = *(int *)(iVar4 + 0x80) + (*(int *)(iVar4 + 0x7c) - iVar8);
    *(int *)(iVar4 + 0x68) = (*(int *)(iVar4 + 0x5c) - iVar5) + *(int *)(iVar4 + 0x60);
  }
  else {
    *(int *)(iVar4 + 0x5c) = iVar7 + 0x1500;
    *(int *)(iVar4 + 0x7c) = *(int *)(param_1 + 0x54) + 0x1680;
    *(int *)(iVar4 + 0x60) = *(int *)(param_1 + 0x58) + DAT_080611a0;
    *(int *)(iVar4 + 0x80) = *(int *)(param_1 + 0x58) + DAT_080611a4;
    iVar7 = *DAT_08061198;
    iVar9 = *(int *)(iVar7 + 0x54);
    iVar8 = *(int *)(iVar4 + 0x60) - (*(int *)(iVar4 + 0x5c) - iVar9);
    if ((((*(ushort *)(DAT_080611a8 + 8) & 8) == 0) &&
        (iVar5 = *(int *)(iVar7 + 0x58) + iVar5, iVar8 < iVar5 + iVar6)) && (iVar5 - iVar6 < iVar8))
    {
      *(int *)(iVar4 + 0x54) = iVar9;
      iVar5 = *(int *)(iVar7 + 0x54);
      *(int *)(iVar4 + 100) = iVar5;
      *(int *)(iVar4 + 0x58) = *(int *)(iVar4 + 0x80) - (*(int *)(iVar4 + 0x7c) - iVar9);
      *(int *)(iVar4 + 0x68) = *(int *)(iVar4 + 0x60) - (*(int *)(iVar4 + 0x5c) - iVar5);
    }
    else {
      iVar5 = *(int *)(param_1 + 0xb8) + 0x400;
      *(int *)(iVar4 + 0x58) = iVar5;
      iVar6 = *(int *)(param_1 + 0xb8) + 0x400;
      *(int *)(iVar4 + 0x68) = iVar6;
      *(int *)(iVar4 + 0x54) = *(int *)(iVar4 + 0x7c) + (iVar5 - *(int *)(iVar4 + 0x80));
      iVar5 = *(int *)(iVar4 + 0x5c) + (iVar6 - *(int *)(iVar4 + 0x60));
LAB_08061280:
      *(int *)(iVar4 + 100) = iVar5;
    }
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(iVar4 + 0x78) = 0xff;
    *(byte *)(iVar4 + 0x79) = bVar1 & 1;
  }
  else if (*DAT_080612a4 == 0xb) {
    *(undefined1 *)(iVar4 + 0x78) = 0x39;
    *(undefined1 *)(iVar4 + 0x79) = 6;
  }
  else {
    *(undefined1 *)(iVar4 + 0x78) = 0x35;
    *(undefined1 *)(iVar4 + 0x79) = 10;
  }
LAB_080612c4:
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    if (*(int *)(param_1 + 0xc0) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x77) = 1;
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
    *(undefined1 *)(param_1 + 0xd) = 0x1d;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


