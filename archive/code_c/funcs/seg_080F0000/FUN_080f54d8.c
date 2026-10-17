// undefined FUN_080f54d8(void)
// entry 0x80f54d8


undefined4 FUN_080f54d8(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xbc);
  FUN_0801cff0();
  iVar6 = *(int *)(param_1 + 0x58);
  if (((*(int *)(param_1 + 0xbc) == 0) || (*(char *)(iVar4 + 0xd) != '\x03')) ||
     (*(byte *)(iVar4 + 0xe) < 2)) {
    piVar1 = (int *)(param_1 + 0xb8);
    iVar4 = *(int *)(param_1 + 0x58);
    if (iVar4 < *piVar1) {
      iVar2 = 0x200;
LAB_080f5592:
      *(int *)(param_1 + 0x58) = iVar4 + iVar2;
      if (*(int *)(param_1 + 0x58) <= *piVar1) goto LAB_080f55a8;
      *(int *)(param_1 + 0x58) = *piVar1;
    }
    else {
      iVar2 = DAT_080f55a4;
      if (*piVar1 < iVar4) goto LAB_080f5592;
LAB_080f55a8:
      iVar4 = *piVar1 + (uint)*(byte *)(param_1 + 0xc0) * -0x1000;
      if (*(int *)(param_1 + 0x58) < iVar4) {
        *(int *)(param_1 + 0x58) = iVar4;
      }
    }
    uVar3 = DAT_080f55e8;
    psVar5 = (short *)(param_1 + 0xc2);
    if (*psVar5 == 0x77) {
      FUN_08002b10(DAT_080f55e8);
      *psVar5 = (short)uVar3;
    }
    if (iVar6 != *(int *)(param_1 + 0x58)) {
      if (*psVar5 != 0xa4) {
        FUN_08002b10(0xa4);
        *psVar5 = 0xa4;
      }
      goto LAB_080f55fe;
    }
    if (*psVar5 != 0xa4) goto LAB_080f55fe;
    uVar3 = 0x19e;
  }
  else {
    if ((*(uint *)(iVar4 + 600) & 0x40) != 0) {
      *(int *)(param_1 + 0x58) = iVar6 + DAT_080f5534;
    }
    if ((*(uint *)(iVar4 + 600) & 0x80) != 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x200;
    }
    iVar4 = *(int *)(param_1 + 0xb8);
    if (iVar4 < *(int *)(param_1 + 0x58)) {
      *(int *)(param_1 + 0x58) = iVar4;
    }
    else {
      iVar4 = iVar4 + (uint)*(byte *)(param_1 + 0xc0) * -0x1000;
      if (*(int *)(param_1 + 0x58) < iVar4) {
        *(int *)(param_1 + 0x58) = iVar4;
      }
    }
    if (iVar6 != *(int *)(param_1 + 0x58)) {
      if (*(short *)(param_1 + 0xc2) != 0x77) {
        FUN_08002b10(0x77);
        *(short *)(param_1 + 0xc2) = 0x77;
      }
      goto LAB_080f55fe;
    }
    uVar3 = DAT_080f5574;
    if (*(short *)(param_1 + 0xc2) != 0x77) goto LAB_080f55fe;
  }
  FUN_08002b10(uVar3);
  *(short *)(param_1 + 0xc2) = (short)uVar3;
LAB_080f55fe:
  *(undefined4 *)(param_1 + 0xbc) = 0;
  return in_lr;
}


