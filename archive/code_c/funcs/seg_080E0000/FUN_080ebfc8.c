// undefined FUN_080ebfc8(void)
// entry 0x80ebfc8


undefined8 FUN_080ebfc8(int param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 in_lr;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  
  uVar10 = 0;
  bVar13 = false;
  bVar12 = false;
  bVar3 = false;
  bVar11 = false;
  FUN_0801cff0();
  if (*(char *)(param_1 + 0x12) == '\0') {
    iVar6 = *(int *)(param_1 + 0x54);
    iVar9 = *(int *)(param_1 + 0x58);
    iVar8 = DAT_080ec070 + iVar9;
    if (*(char *)(param_1 + 0x10) == '\x01') {
      sVar5 = FUN_0800c66c(iVar6,iVar9 + DAT_080ec074);
      bVar11 = sVar5 != 0;
      uVar10 = (uint)bVar11;
      sVar5 = FUN_0800c66c(iVar6 + 0x1000,iVar8);
      bVar12 = sVar5 != 0;
      if (bVar12) {
        uVar10 = uVar10 + 1;
      }
      sVar5 = FUN_0800c66c(iVar6,iVar9 + 0x800);
      bVar13 = sVar5 != 0;
      if (bVar13) {
        uVar10 = uVar10 + 1;
      }
      bVar3 = false;
      sVar5 = FUN_0800c66c(DAT_080ec078 + iVar6,iVar8);
      if (sVar5 != 0) {
        uVar10 = uVar10 + 1;
        bVar3 = true;
      }
    }
    if (uVar10 == 0) {
      uVar7 = 0;
      goto LAB_080ec16a;
    }
    if ((int)(uVar10 - 1) <=
        (int)*(short *)(*DAT_080ec0ac + 10) + (int)*(short *)(*DAT_080ec0b0 + 10)) {
      if (bVar11) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_080ec0b4;
        bVar11 = (bool)(bVar11 ^ 1);
      }
      else {
        if (bVar12) {
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x1000;
          bVar2 = 0;
          bVar1 = 1;
          bVar4 = 0;
        }
        else if (bVar13) {
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1000;
          bVar2 = 1;
          bVar1 = 0;
          bVar4 = 0;
        }
        else {
          if (!bVar3) goto LAB_080ec0fc;
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + DAT_080ec178;
          bVar2 = 0;
          bVar1 = 0;
          bVar4 = 1;
        }
        bVar13 = (bool)(bVar13 ^ bVar2);
        bVar12 = (bool)(bVar12 ^ bVar1);
        bVar3 = (bool)(bVar3 ^ bVar4);
      }
LAB_080ec0fc:
      if (*(char *)(param_1 + 0x10) == '\x01') {
        FUN_0800c6d8(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_080ec17c);
      }
      if (bVar11) {
        FUN_080ebe6c(param_1,iVar6,DAT_080ec178 + iVar8);
      }
      if (bVar12) {
        FUN_080ebe6c(param_1,iVar6 + 0x1000,iVar8);
      }
      if (bVar13) {
        FUN_080ebe6c(param_1,iVar6,iVar8 + 0x1000);
      }
      if (bVar3) {
        FUN_080ebe6c(param_1,DAT_080ec178 + iVar6,iVar8);
      }
      FUN_080ebf6c(param_1);
    }
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  uVar7 = 1;
LAB_080ec16a:
  return CONCAT44(in_lr,uVar7);
}


