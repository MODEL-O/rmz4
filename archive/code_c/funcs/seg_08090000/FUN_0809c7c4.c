// undefined FUN_0809c7c4(void)
// entry 0x809c7c4


undefined4 FUN_0809c7c4(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 in_lr;
  
  iVar10 = *(int *)(param_1 + 0x28);
  FUN_0801cff0();
  piVar4 = DAT_0809c840;
  if (1 < *(byte *)(iVar10 + 0xc)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809c80c);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0xc);
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0xd);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
      iVar10 = FUN_08008534(*(undefined4 *)(param_1 + 0x54));
      iVar10 = iVar10 + DAT_0809ca60;
      if (*(int *)(param_1 + 0x58) <= iVar10) {
        return in_lr;
      }
      FUN_0801fe64(8,param_1 + 0x54);
      FUN_08002b10(0x38);
      *(int *)(param_1 + 0x58) = iVar10;
    }
    else {
      if (cVar1 != '\x02') {
        piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809cabc);
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
        FUN_0809c620(param_1);
        return in_lr;
      }
      if (*(char *)(iVar10 + 0xd) != '\n') {
        return in_lr;
      }
      FUN_08002b10(DAT_0809ca98);
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
    }
    goto LAB_0809ca90;
  }
  if (*(int *)(*DAT_0809c840 + 0x54) < *(int *)(param_1 + 0x54)) {
    iVar8 = *(int *)(param_1 + 0x5c);
    iVar5 = iVar8 + -0x20;
    *(int *)(param_1 + 0x5c) = iVar5;
    if (0 < iVar5) {
      *(int *)(param_1 + 0x5c) = iVar8 + -0x40;
    }
    iVar5 = DAT_0809c844;
    if (*(int *)(param_1 + 0x5c) < DAT_0809c844) {
LAB_0809c860:
      *(int *)(param_1 + 0x5c) = iVar5;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x5c);
    iVar8 = iVar5 + 0x20;
    *(int *)(param_1 + 0x5c) = iVar8;
    if (iVar8 < 0) {
      *(int *)(param_1 + 0x5c) = iVar5 + 0x40;
    }
    iVar5 = 0x400;
    if (0x400 < *(int *)(param_1 + 0x5c)) goto LAB_0809c860;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  uVar6 = *(byte *)(iVar10 + 10) & 0x10;
  if ((*(byte *)(iVar10 + 10) & 0x10) == 0) {
    if (*(int *)(param_1 + 0xb4) < *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4);
      *(uint *)(param_1 + 0x5c) = uVar6;
      *(char *)(param_1 + 0x13) = (char)uVar6;
    }
    else {
      iVar10 = *(int *)(iVar10 + 0xbc) + 0x1800;
      if (*(int *)(param_1 + 0x54) < iVar10) {
        *(int *)(param_1 + 0x54) = iVar10;
        *(uint *)(param_1 + 0x5c) = uVar6;
      }
    }
  }
  else if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xb4)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  else {
    iVar10 = *(int *)(iVar10 + 0xc0) + DAT_0809c8a4;
    if (iVar10 < *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0x54) = iVar10;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  }
  uVar7 = DAT_0809c8e8;
  if (*(int *)(param_1 + 0x58) <= *(int *)(*piVar4 + 0x58) + DAT_0809c8e4) {
    uVar7 = 0x400;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar7;
  uVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x58) = uVar6;
  uVar9 = *(int *)(param_1 + 0xbc) + DAT_0809c94c;
  if (uVar9 < uVar6) {
    *(uint *)(param_1 + 0x58) = uVar9;
  }
  uVar6 = *(int *)(param_1 + 0xbc) + DAT_0809c950;
  if (*(uint *)(param_1 + 0x58) < uVar6) {
    *(uint *)(param_1 + 0x58) = uVar6;
  }
  if (0x11 < *(byte *)(param_1 + 0x12)) {
    if (*(byte *)(*(int *)(param_1 + 0x2c) + 0xd) < 2) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_0809ca28,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
LAB_0809ca90:
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar1;
  if (cVar1 != -1) {
    return in_lr;
  }
  uVar6 = (uint)*(byte *)(param_1 + 0x12);
  bVar2 = FUN_08129198(uVar6,3);
  if (bVar2 == 1) {
    uVar3 = *(undefined1 *)(uVar6 + DAT_0809c9a4);
    uVar6 = DAT_0809c9ac * *DAT_0809c9a8 + DAT_0809c9b0;
    *DAT_0809c9a8 = uVar6 & 0x7fffffff;
    uVar7 = FUN_080c87d4(param_1,0,uVar3,((uVar6 & 0x7fffffff) >> 0x10 & 1) + 1);
    *(undefined4 *)(param_1 + 0x2c) = uVar7;
    uVar3 = 8;
  }
  else if (bVar2 < 2) {
    if (bVar2 != 0) goto LAB_0809c9e4;
    uVar7 = FUN_080c87d4(param_1,0,*(undefined1 *)(uVar6 + DAT_0809c970),0);
    *(undefined4 *)(param_1 + 0x2c) = uVar7;
    uVar3 = 8;
  }
  else {
    if (bVar2 != 2) goto LAB_0809c9e4;
    uVar3 = *(undefined1 *)(uVar6 + DAT_0809c9ec);
    uVar6 = DAT_0809c9f4 * *DAT_0809c9f0 + DAT_0809c9f8;
    *DAT_0809c9f0 = uVar6 & 0x7fffffff;
    uVar7 = FUN_080c87d4(param_1,0,uVar3,((uVar6 & 0x7fffffff) >> 0x10 & 1) + 3);
    *(undefined4 *)(param_1 + 0x2c) = uVar7;
    uVar3 = 0x40;
  }
  *(undefined1 *)(param_1 + 0x13) = uVar3;
LAB_0809c9e4:
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return in_lr;
}


