// undefined FUN_0809cac0(void)
// entry 0x809cac0


undefined4 FUN_0809cac0(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  FUN_0801cff0();
  if (1 < *(byte *)(iVar5 + 0xc)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809cb08);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
    return in_lr;
  }
  iVar4 = *(int *)(iVar5 + 0x58) + DAT_0809cb1c;
  if (iVar4 < *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = iVar4;
  }
  else {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    iVar4 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
    if ((*(byte *)(iVar5 + 10) & 0x10) == 0) {
      iVar4 = iVar4 + 0x20;
    }
    else {
      iVar4 = iVar4 + -0x20;
    }
    *(int *)(param_1 + 0x5c) = iVar4;
    if (*(int *)(param_1 + 0x5c) != 0) {
      return in_lr;
    }
    uVar3 = DAT_0809cbd8;
    if ((*(byte *)(iVar5 + 10) & 0x10) == 0) {
      uVar3 = 0x300;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined1 *)(param_1 + 0x12) = 0x80;
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    iVar4 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
    if ((*(byte *)(iVar5 + 10) & 0x10) == 0) {
      *(int *)(param_1 + 0x5c) = iVar4 + -0x40;
      if (iVar4 + -0x40 < DAT_0809cba0) {
        *(int *)(param_1 + 0x5c) = DAT_0809cba0;
      }
      iVar5 = FUN_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (iVar5 + 0x4000 <= *(int *)(param_1 + 0x54)) {
        return in_lr;
      }
    }
    else {
      *(int *)(param_1 + 0x5c) = iVar4 + 0x40;
      if (0x400 < iVar4 + 0x40) {
        *(undefined4 *)(param_1 + 0x5c) = 0x400;
      }
      iVar5 = FUN_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (*(int *)(param_1 + 0x54) <= iVar5 + DAT_0809cb78) {
        return in_lr;
      }
    }
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809cc6c);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
      FUN_0809c620(param_1);
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar4 = DAT_0809cc40;
    bVar1 = *(byte *)(param_1 + 0x13);
    if (bVar1 < 0x12) {
      *(byte *)(param_1 + 0x13) = bVar1 + 1;
      uVar3 = FUN_080c87d4(param_1,3,*(undefined1 *)((uint)bVar1 + iVar4),0);
      *(undefined4 *)(param_1 + 0x2c) = uVar3;
    }
    if (CONCAT11(*(undefined1 *)(iVar5 + 0x1e),*(undefined1 *)(iVar5 + 0x70)) != DAT_0809cc44) {
      return in_lr;
    }
    if (*(char *)(iVar5 + 0x71) < '\x04') {
      return in_lr;
    }
    FUN_08002b10(DAT_0809cc48);
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}


