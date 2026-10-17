// undefined FUN_080612fc(void)
// entry 0x80612fc


undefined4 FUN_080612fc(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined1 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar3 = FUN_080dad0c(param_1 + 0x54,0,0xc1);
    *(int *)(param_1 + 0xc0) = iVar3;
    if (iVar3 == 0) {
      return in_lr;
    }
    if (*DAT_08061338 == 0xb) {
      *(undefined1 *)(iVar3 + 0x78) = 0x39;
      iVar3 = *(int *)(param_1 + 0xc0);
      uVar7 = 6;
    }
    else {
      *(undefined1 *)(iVar3 + 0x78) = 0x35;
      iVar3 = *(int *)(param_1 + 0xc0);
      uVar7 = 10;
    }
    *(undefined1 *)(iVar3 + 0x79) = uVar7;
    if (*(int *)(param_1 + 0xc0) == 0) {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_08061378);
    *(short *)(param_1 + 200) = *(short *)(param_1 + 0xa4) + -3;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar4 = 0xffffffd8;
    }
    else {
      uVar4 = 0x28;
    }
    *(undefined4 *)(param_1 + 100) = uVar4;
    FUN_080c63e8(param_1,0);
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*DAT_080613a0 == 0xb) {
      FUN_08002b10(DAT_080613a4);
    }
    else {
      FUN_08002b10(0x11e);
    }
    FUN_08002b10(0x5d);
    *(undefined2 *)(param_1 + 0xca) = 0x5d;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_0801fe64(8,param_1 + 0x54);
  if (*(short *)(param_1 + 0xa4) < *(short *)(param_1 + 200)) {
    uVar7 = 0x24;
    goto LAB_0806168a;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  if (iVar3 < 1) {
    iVar9 = -0x60;
  }
  else {
    iVar9 = -0x10;
  }
  *(int *)(param_1 + 0x60) = iVar3 + iVar9;
  if (*(int *)(param_1 + 0x60) < DAT_08061444) {
    *(int *)(param_1 + 0x60) = DAT_08061444;
  }
  cVar2 = *(char *)(param_1 + 0xf);
  if (cVar2 == '\0') {
    iVar3 = *(int *)(param_1 + 0x68) + 0x80;
    *(int *)(param_1 + 0x68) = iVar3;
    if (0xa00 < iVar3) {
      *(undefined4 *)(param_1 + 0x68) = 0xa00;
      *(undefined1 *)(param_1 + 0x12) = 0x14;
      cVar2 = '\x01';
      goto LAB_08061486;
    }
  }
  else if (cVar2 == '\x01') {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      cVar2 = '\x02';
LAB_08061486:
      *(char *)(param_1 + 0xf) = cVar2;
    }
  }
  else if ((cVar2 == '\x02') &&
          (iVar3 = *(int *)(param_1 + 0x68) + DAT_080614b4, *(int *)(param_1 + 0x68) = iVar3,
          iVar3 < 0)) {
    if (*(int *)(param_1 + 0xc0) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x77) = 1;
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
    *(undefined2 *)(param_1 + 0xca) = 0;
    cVar2 = *(char *)(param_1 + 0xf) + '\x01';
    goto LAB_08061486;
  }
  iVar3 = *(int *)(param_1 + 0xc0);
  if (iVar3 != 0) {
    if (*(char *)(param_1 + 0x13) == '\0') {
      iVar9 = *(int *)(param_1 + 0x68) / 2;
LAB_080614ce:
      *(undefined1 *)(iVar3 + 0x74) = 0x1f;
      *(undefined1 *)(iVar3 + 0x75) = 0x1f;
    }
    else {
      if (*(char *)(param_1 + 0x13) == '\x01') {
        iVar9 = FUN_08128fb8(*(int *)(param_1 + 0x68) << 3,10);
        goto LAB_080614ce;
      }
      iVar9 = *(int *)(param_1 + 0x68);
      *(undefined1 *)(iVar3 + 0x74) = 0;
      *(undefined1 *)(iVar3 + 0x75) = 0x19;
    }
    *(undefined1 *)(iVar3 + 0x76) = 0x1f;
    *(int *)(iVar3 + 0x58) = *(int *)(param_1 + 0xb8) + 0x400;
    *(int *)(iVar3 + 0x68) = *(int *)(param_1 + 0xb8) + 0x400;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(int *)(iVar3 + 0x5c) = *(int *)(param_1 + 0x54) + DAT_080615e8;
      *(int *)(iVar3 + 0x7c) = *(int *)(param_1 + 0x54) + DAT_080615ec;
      *(int *)(iVar3 + 0x60) = *(int *)(param_1 + 0x58) + 0x800;
      piVar8 = (int *)(iVar3 + 0x80);
      *piVar8 = *(int *)(param_1 + 0x58) + 0xc00;
      *(int *)(iVar3 + 0x5c) = *(int *)(iVar3 + 0x5c) - iVar9;
      *(int *)(iVar3 + 0x7c) = *(int *)(iVar3 + 0x7c) + iVar9;
      *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) - iVar9;
      iVar5 = *piVar8;
      *piVar8 = iVar5 + iVar9;
      *(int *)(iVar3 + 0x54) = *(int *)(iVar3 + 0x7c) - (*(int *)(iVar3 + 0x58) - (iVar5 + iVar9));
      iVar9 = *(int *)(iVar3 + 0x5c) - (*(int *)(iVar3 + 0x68) - *(int *)(iVar3 + 0x60));
    }
    else {
      *(int *)(iVar3 + 0x5c) = *(int *)(param_1 + 0x54) + 0x2400;
      *(int *)(iVar3 + 0x7c) = *(int *)(param_1 + 0x54) + 0x2700;
      *(int *)(iVar3 + 0x60) = *(int *)(param_1 + 0x58) + 0xc00;
      piVar8 = (int *)(iVar3 + 0x80);
      *piVar8 = *(int *)(param_1 + 0x58) + 0x800;
      *(int *)(iVar3 + 0x5c) = *(int *)(iVar3 + 0x5c) - iVar9;
      *(int *)(iVar3 + 0x7c) = *(int *)(iVar3 + 0x7c) + iVar9;
      *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + iVar9;
      iVar5 = *piVar8;
      *piVar8 = iVar5 - iVar9;
      *(int *)(iVar3 + 0x54) = *(int *)(iVar3 + 0x7c) + (*(int *)(iVar3 + 0x58) - (iVar5 - iVar9));
      iVar9 = *(int *)(iVar3 + 0x5c) + (*(int *)(iVar3 + 0x68) - *(int *)(iVar3 + 0x60));
    }
    *(int *)(iVar3 + 100) = iVar9;
    cVar2 = FUN_08129050(*(byte *)(param_1 + 0x13) + 1,3);
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\0') {
      bVar1 = *(byte *)(param_1 + 10);
      if ((bVar1 & 0x10) == 0) {
        FUN_080c6480(*(undefined4 *)(iVar3 + 100),*(undefined4 *)(iVar3 + 0x68),bVar1 >> 4 & 1);
        FUN_080c6480(*(int *)(iVar3 + 100) + 0x1000,*(undefined4 *)(iVar3 + 0x68),
                     *(byte *)(param_1 + 10) >> 4 & 1);
      }
      else {
        FUN_080c6480(*(undefined4 *)(iVar3 + 0x54),*(undefined4 *)(iVar3 + 0x58),bVar1 >> 4 & 1);
        FUN_080c6480(*(int *)(iVar3 + 0x54) + DAT_080615f0,*(undefined4 *)(iVar3 + 0x58),
                     *(byte *)(param_1 + 10) >> 4 & 1);
      }
    }
  }
  uVar6 = *(byte *)(param_1 + 10) & 0x10;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    if (*(int *)(param_1 + 0x54) <= *(int *)(DAT_0806165c + 0x38) + 0x2800) {
      return in_lr;
    }
    if (*(int *)(param_1 + 0xc0) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x77) = 1;
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
    FUN_08002b5c(0x5d);
    *(undefined2 *)(param_1 + 0xca) = 0;
    *(undefined1 *)(param_1 + 0xd) = 0x1e;
    *(undefined1 *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  if (*(int *)(DAT_08061694 + 0x38) + DAT_08061698 <= *(int *)(param_1 + 0x54)) {
    return in_lr;
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x77) = 1;
    *(uint *)(param_1 + 0xc0) = uVar6;
  }
  FUN_08002b5c(0x5d);
  *(short *)(param_1 + 0xca) = (short)uVar6;
  uVar7 = 0x1e;
LAB_0806168a:
  *(undefined1 *)(param_1 + 0xd) = uVar7;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


