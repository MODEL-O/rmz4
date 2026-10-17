// undefined FUN_0812654c(void)
// entry 0x812654c


undefined8 FUN_0812654c(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = param_1 + DAT_08126580;
  uVar2 = FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(iVar7 + 0x18) * 4 + DAT_0812657c));
  iVar4 = *(int *)(iVar7 + 0xc);
  iVar5 = *(int *)(iVar7 + 8);
  if (iVar4 < iVar5) {
    if (iVar5 - iVar4 < 10) {
      *(int *)(iVar7 + 0xc) = iVar4 + 1;
    }
    else {
      *(int *)(iVar7 + 0xc) = iVar4 + 2;
      if (iVar5 < iVar4 + 2) {
        *(int *)(iVar7 + 0xc) = iVar5;
      }
    }
  }
  iVar4 = param_1 + DAT_08126688;
  if (*(int *)(iVar4 + 0x10) < *(int *)(iVar4 + 8)) {
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 8);
  }
  FUN_0810da2c(DAT_0812668c,1,0);
  FUN_0810dae0(*(undefined4 *)(iVar4 + 0xc),0xb,0);
  FUN_0810da2c(DAT_08126690,0xf,0);
  FUN_0810dae0(*(undefined4 *)(iVar4 + 0x10),0x1c,0);
  FUN_0810da2c(DAT_08126694,9,0x12);
  uVar3 = FUN_08128fb8(*(undefined4 *)(iVar4 + 0x14),0x3c);
  FUN_0810dae0(uVar3,0xf,0x12);
  FUN_0810da2c(DAT_08126698,0x10,0x12);
  iVar5 = FUN_08129050(*(undefined4 *)(iVar4 + 0x14),0x3c);
  bVar1 = FUN_08128fb8(iVar5 * 0xa6,100);
  FUN_0810dae0(bVar1,0x12,0x12);
  if (bVar1 < 10) {
    FUN_0810dae0(0,0x11,0x12);
  }
  if ((1 < *(uint *)(iVar4 + 0x6c)) && ((*(uint *)(iVar4 + 0x14) & 1) != 0)) {
    FUN_0810da2c(DAT_0812669c,1,7);
    FUN_0810dae0(*(undefined4 *)(iVar4 + 0x6c),3,8);
  }
  iVar4 = param_1 + DAT_08126688;
  if ((1 < *(uint *)(iVar4 + 0x70)) && ((*(uint *)(iVar4 + 0x14) & 1) != 0)) {
    FUN_0810da2c(DAT_0812669c,0x18,7);
    FUN_0810dae0(*(undefined4 *)(iVar4 + 0x70),0x1a,8);
  }
  iVar4 = param_1 + DAT_08126688;
  if (*(int *)(iVar4 + 0x5c) == 0) {
    if (*(int *)(iVar4 + 0x54) != 1) goto LAB_081266a8;
    if (*(int *)(iVar4 + 0x58) == 0) {
      FUN_080d0a04(param_1 + DAT_081266a0,0,0);
    }
    iVar5 = 0x1e;
  }
  else {
    iVar5 = *(int *)(iVar4 + 0x5c) + -1;
  }
  *(int *)(iVar4 + 0x5c) = iVar5;
LAB_081266a8:
  piVar6 = (int *)(param_1 + DAT_081266c8);
  *(undefined2 *)(*piVar6 + 0xa4) = 0x10;
  piVar6[0x15] = 0;
  piVar6[0x16] = 0;
  FUN_081266fc(param_1);
  return CONCAT44(in_lr,uVar2);
}


