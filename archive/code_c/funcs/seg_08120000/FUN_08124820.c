// undefined FUN_08124820(void)
// entry 0x8124820


undefined8 FUN_08124820(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = param_1 + DAT_08124854;
  uVar2 = FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(iVar8 + 0x18) * 4 + DAT_08124850));
  iVar4 = *(int *)(iVar8 + 0xc);
  iVar7 = *(int *)(iVar8 + 8);
  if (iVar4 < iVar7) {
    if (iVar7 - iVar4 < 10) {
      *(int *)(iVar8 + 0xc) = iVar4 + 1;
    }
    else {
      *(int *)(iVar8 + 0xc) = iVar4 + 2;
      if (iVar7 < iVar4 + 2) {
        *(int *)(iVar8 + 0xc) = iVar7;
      }
    }
  }
  iVar4 = param_1 + DAT_08124970;
  if (*(int *)(iVar4 + 0x10) < *(int *)(iVar4 + 8)) {
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 8);
  }
  FUN_0810da2c(DAT_08124974,1,0);
  FUN_0810dae0(*(undefined4 *)(iVar4 + 0xc),0xb,0);
  FUN_0810da2c(DAT_08124978,0xf,0);
  FUN_0810dae0(*(undefined4 *)(iVar4 + 0x10),0x1c,0);
  FUN_0810da2c(DAT_0812497c,9,0x12);
  uVar3 = FUN_08128fb8(*(undefined4 *)(iVar4 + 0x14),0x3c);
  FUN_0810dae0(uVar3,0xf,0x12);
  FUN_0810da2c(DAT_08124980,0x10,0x12);
  iVar7 = FUN_08129050(*(undefined4 *)(iVar4 + 0x14),0x3c);
  bVar1 = FUN_08128fb8(iVar7 * 0xa6,100);
  FUN_0810dae0(bVar1,0x12,0x12);
  if (bVar1 < 10) {
    FUN_0810dae0(0,0x11,0x12);
  }
  if ((1 < *(uint *)(iVar4 + 0x34)) && ((*(uint *)(iVar4 + 0x14) & 1) != 0)) {
    FUN_0810da2c(DAT_08124984,0xc,5);
    FUN_0810dae0(*(undefined4 *)(iVar4 + 0x34),0xe,7);
  }
  piVar5 = (int *)(param_1 + DAT_08124970);
  if ((*(uint *)(*piVar5 + 0x8c) & 1) != 0) {
    if (piVar5[0xc] == 0) {
      piVar5[5] = piVar5[5] + -0xb4;
      piVar5[0xc] = 1;
    }
    if (piVar5[5] < 0) {
      piVar5[5] = 0;
    }
    piVar5[0xd] = 0;
  }
  iVar4 = param_1 + DAT_08124970;
  if ((*(int *)(iVar4 + 0x2c) == 1) && (uVar6 = *(uint *)(iVar4 + 0x24) >> 8, uVar6 != 0)) {
    if (uVar6 != 0x80) {
      iVar7 = *(int *)(iVar4 + 8);
      *(uint *)(iVar4 + 8) = iVar7 + uVar6;
      if (uVar6 == 5) {
        uVar6 = *(int *)(iVar4 + 0x34) + 1;
        *(uint *)(iVar4 + 0x34) = uVar6;
        if (uVar6 < 6) {
          *(uint *)(iVar4 + 8) = iVar7 + 4 + uVar6;
        }
        else {
          *(int *)(iVar4 + 8) = iVar7 + 10;
        }
        goto LAB_08124994;
      }
    }
    *(undefined4 *)(iVar4 + 0x34) = 0;
  }
LAB_08124994:
  piVar5 = (int *)(param_1 + DAT_081249dc);
  uVar6 = piVar5[9];
  piVar5[9] = uVar6 & 0xff;
  if ((uVar6 & 0xff) == 0) {
    piVar5[0xc] = 0;
  }
  *(undefined2 *)(*piVar5 + 0xa4) = 0x10;
  if (*(char *)(*piVar5 + DAT_081249e0) == '\x01') {
    piVar5[0xe] = 0;
  }
  if ((*(char *)(*piVar5 + DAT_081249e0) == '\x03') && (piVar5[0xe] == 0)) {
    piVar5[0xd] = 0;
  }
  return CONCAT44(in_lr,uVar2);
}


