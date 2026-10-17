// undefined FUN_08082d40(void)
// entry 0x8082d40


undefined4 FUN_08082d40(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      if (*(char *)(param_1 + 0x12) != '\0') {
        *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
        return in_lr;
      }
      piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08083040);
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 0x10);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    iVar5 = 0;
    bVar1 = *(byte *)(param_1 + 0xbe);
    if (bVar1 == 2) {
      iVar5 = DAT_08082db8;
      if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
        iVar5 = 0x1800;
      }
    }
    else if (bVar1 < 3) {
      if ((bVar1 == 1) && (iVar5 = DAT_08082d9c, (*(byte *)(param_1 + 10) & 0x20) != 0)) {
        iVar5 = 0x1200;
      }
    }
    else {
      if (bVar1 == 3) {
        bVar1 = *(byte *)(param_1 + 10);
        iVar5 = DAT_08082ddc;
        if ((bVar1 & 0x20) != 0) {
          iVar5 = 0x2300;
        }
        bVar7 = ~(bVar1 >> 5) & 1;
        if (bVar7 == 0) {
LAB_08082e04:
          bVar1 = bVar1 & 0xdf;
        }
        else {
          bVar1 = bVar1 | 0x20;
        }
      }
      else {
        if (bVar1 != 4) goto LAB_08082e26;
        bVar1 = *(byte *)(param_1 + 10);
        iVar5 = DAT_08082e00;
        if ((bVar1 & 0x20) != 0) {
          iVar5 = 0x2b00;
        }
        bVar7 = ~(bVar1 >> 5) & 1;
        if (bVar7 == 0) goto LAB_08082e04;
        bVar1 = bVar1 | 0x20;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(byte *)(param_1 + 0x4d) = bVar7;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | bVar7 << 5;
    }
LAB_08082e26:
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
    sVar3 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54));
    if (sVar3 != 0) {
      iVar4 = FUN_08007db4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      iVar5 = FUN_08007f8c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (iVar4 < 1) {
        if (iVar5 < 0) {
          iVar4 = *(int *)(param_1 + 0x58) + iVar4;
        }
        else {
          if (iVar5 <= -iVar4) goto LAB_08082e66;
          iVar4 = *(int *)(param_1 + 0x58) + iVar4;
        }
      }
      else {
LAB_08082e66:
        iVar4 = *(int *)(param_1 + 0x58) + iVar5;
      }
      *(int *)(param_1 + 0x58) = iVar4;
    }
    FUN_0801cf00(param_1,DAT_08082ea0);
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + DAT_08082ea4;
    uVar9 = (uint)(0 < *(int *)(param_1 + 0xb4));
    uVar8 = uVar9 ^ 1;
    if (uVar8 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar8;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar8 << 4);
    FUN_080d0dc4(0,&local_1c,0x200,uVar9);
    *(uint *)(param_1 + 0x5c) = uVar9 * -0x200 + 0x100;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) >> 1;
    FUN_080d61d4(param_1);
    iVar5 = *(int *)(param_1 + 0x5c) * 0xb4;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar5 >> 8;
    iVar5 = *(int *)(param_1 + 0x60) * 0xb4;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar5 >> 8;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined1 *)(param_1 + 0x12) = 0x14;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar5 = FUN_08007db4(*(undefined4 *)(param_1 + 0x54));
  if (iVar5 < 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
  }
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar5;
  if (*(int *)(param_1 + 0x5c) < 1) {
    iVar5 = FUN_0800834c(iVar5,*(undefined4 *)(param_1 + 0x58));
    if (iVar5 < 1) goto LAB_08082f70;
  }
  else {
    iVar5 = FUN_0800816c(iVar5,*(undefined4 *)(param_1 + 0x58));
    if (-1 < iVar5) goto LAB_08082f70;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
LAB_08082f70:
  iVar5 = *(int *)(param_1 + 0x5c) * 0xe1;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar5 >> 8;
  if (((*(int *)(param_1 + 0x60) != 0) || ((*(byte *)(param_1 + 10) & 0x20) != 0)) &&
     (iVar5 = *(int *)(param_1 + 0x60) + 0x40, *(int *)(param_1 + 0x60) = iVar5, 0x700 < iVar5)) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + DAT_08083004;
    FUN_080d0c88(1,&local_1c);
    FUN_08002b10(0x2a);
    FUN_0802ab88(4,8,param_1 + 0x54);
    if (*(ushort *)(DAT_08083008 + 0xc) <= DAT_0808300c) {
      *(ushort *)(DAT_08083008 + 0xc) = *(ushort *)(DAT_08083008 + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


