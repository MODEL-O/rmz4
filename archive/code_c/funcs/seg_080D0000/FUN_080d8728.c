// undefined FUN_080d8728(void)
// entry 0x80d8728


undefined4 FUN_080d8728(int param_1)

{
  byte bVar1;
  short sVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  uVar7 = *(byte *)(param_1 + 0x11) >> 1 & 1;
  uVar5 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)uVar5;
  if ((uVar5 & 0xff) == 0) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d875c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080d8978(param_1);
    return in_lr;
  }
  if ((uVar5 & 0xff) < 0xf) {
    uVar5 = uVar5 & 1;
    if (uVar5 == 0) {
      uVar5 = (uint)*(byte *)(param_1 + 10);
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
LAB_080d878c:
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
  }
  else {
    if (0x1d < (uVar5 & 0xff)) goto LAB_080d8792;
    uVar5 = uVar5 & 3;
    if (uVar5 != 0) goto LAB_080d878c;
    uVar5 = (uint)*(byte *)(param_1 + 10);
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
LAB_080d8792:
  FUN_0801cff0(param_1,uVar5,1,0);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar6 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar6;
  if (0x700 < iVar6) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  if (*(char *)(param_1 + 0x13) != '\0') {
    if (*(int *)(param_1 + 0x60) < 1) {
      sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),
                           *(int *)(param_1 + 0x58) + (uVar7 ^ 1) * -0xc00);
      if (sVar2 == 0) {
        return in_lr;
      }
      uVar4 = 0;
    }
    else {
      sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + uVar7 * 0xc00)
      ;
      uVar4 = DAT_080d8808;
      if (sVar2 == 0) {
        return in_lr;
      }
    }
    *(undefined4 *)(param_1 + 0x60) = uVar4;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
  }
  return in_lr;
}


