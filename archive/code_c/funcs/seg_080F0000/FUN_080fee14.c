// undefined FUN_080fee14(void)
// entry 0x80fee14


undefined4 FUN_080fee14(int param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  FUN_0801cff0();
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar7 = *(int *)(param_1 + 0x5c) + 8;
    *(int *)(param_1 + 0x5c) = iVar7;
    if (0x280 < iVar7) {
      *(undefined4 *)(param_1 + 0x5c) = 0x280;
    }
    iVar7 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (iVar7 - *(int *)(param_1 + 0x58) < 0x801) {
      *(int *)(param_1 + 0x58) = iVar7;
      *(undefined1 *)(DAT_080feee8 + DAT_080feeec) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
LAB_080feff4:
    if (*(char *)(param_1 + 0xd) == '\x03') {
      return in_lr;
    }
    uVar6 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    if ((uVar6 & 0x10) == 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0x60) = DAT_080ff048;
    *(undefined1 *)(param_1 + 0x12) = 0x80;
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ff04c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar5 = *(undefined4 *)(*piVar4 + 8);
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (*(char *)(param_1 + 0xe) == '\0') {
          if (*(int *)(*DAT_080fee98 + 0x54) < *(int *)(param_1 + 0x54) + DAT_080fee9c)
          goto LAB_080feff4;
          *(undefined1 *)(param_1 + 0xe) = 1;
        }
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
        iVar7 = *(int *)(param_1 + 0x60) + 0x40;
        *(int *)(param_1 + 0x60) = iVar7;
        if (0x700 < iVar7) {
          *(undefined4 *)(param_1 + 0x60) = 0x700;
        }
        sVar3 = FUN_08007c7c(*(int *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        if (sVar3 != 0) {
          uVar5 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
          *(undefined4 *)(param_1 + 0x58) = uVar5;
          iVar7 = FUN_08128fb8(*(undefined4 *)(param_1 + 0x60),3);
          *(int *)(param_1 + 0x60) = -iVar7;
          FUN_08002b10(DAT_080feea0);
          *(undefined1 *)(param_1 + 0xd) = 2;
        }
        goto LAB_080feff4;
      }
    }
    else if (bVar1 == 2) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar7 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar7;
      if (0x700 < iVar7) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      iVar7 = *(int *)(param_1 + 0x5c) + 8;
      *(int *)(param_1 + 0x5c) = iVar7;
      if (0x280 < iVar7) {
        *(undefined4 *)(param_1 + 0x5c) = 0x280;
      }
      sVar3 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (sVar3 != 0) {
        if (DAT_080fef38 < *(int *)(param_1 + 0x60)) {
          iVar7 = FUN_08128fb8(*(int *)(param_1 + 0x60),3);
          *(int *)(param_1 + 0x60) = -iVar7;
          FUN_08002b10(DAT_080fef70);
        }
        else {
          *(undefined1 *)(param_1 + 0xd) = 1;
        }
        uVar5 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x58) = uVar5;
        FUN_0801fe64(4,param_1 + 0x54);
        *(undefined1 *)(DAT_080fef74 + DAT_080fef78) = 1;
      }
      goto LAB_080feff4;
    }
    bVar1 = *(byte *)(param_1 + 0x12);
    if ((bVar1 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    *(byte *)(param_1 + 0x12) = bVar1 - 1;
    if (bVar1 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080feff0);
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar5 = *(undefined4 *)(*piVar4 + 0xc);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  return in_lr;
}


