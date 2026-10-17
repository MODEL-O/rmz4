// undefined FUN_08124ee0(void)
// entry 0x8124ee0


undefined8 FUN_08124ee0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  piVar6 = (int *)(param_1 + DAT_08124f3c);
  uVar2 = FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(piVar6 + 6) * 4 + DAT_08124f38));
  if (((*(uint *)(*piVar6 + 0x8c) & 1) != 0) &&
     (iVar3 = piVar6[5], piVar6[5] = iVar3 + -0xb4, iVar3 + -0xb4 < 0)) {
    piVar6[5] = 0;
  }
  piVar6 = (int *)(param_1 + DAT_08124f3c);
  *(undefined2 *)(*piVar6 + 0xa4) = 0x10;
  iVar3 = piVar6[3];
  iVar5 = piVar6[2];
  if (iVar3 < iVar5) {
    if (iVar5 - iVar3 < 10) {
      piVar6[3] = iVar3 + 1;
    }
    else {
      piVar6[3] = iVar3 + 2;
      if (iVar5 < iVar3 + 2) {
        piVar6[3] = iVar5;
      }
    }
  }
  piVar6 = (int *)(param_1 + DAT_08125004);
  if (piVar6[4] < piVar6[2]) {
    piVar6[4] = piVar6[2];
  }
  FUN_0810da2c(DAT_08125008,1,0);
  FUN_0810dae0(piVar6[3],0xb,0);
  FUN_0810da2c(DAT_0812500c,0xf,0);
  FUN_0810dae0(piVar6[4],0x1c,0);
  FUN_0810da2c(DAT_08125010,9,0x12);
  uVar4 = FUN_08128fb8(piVar6[5],0x3c);
  FUN_0810dae0(uVar4,0xf,0x12);
  FUN_0810da2c(DAT_08125014,0x10,0x12);
  iVar3 = FUN_08129050(piVar6[5],0x3c);
  bVar1 = FUN_08128fb8(iVar3 * 0xa6,100);
  FUN_0810dae0(bVar1,0x12,0x12);
  if (bVar1 < 10) {
    FUN_0810dae0(0,0x11,0x12);
  }
  if (0x28 < (uint)piVar6[0xc]) {
    local_18 = ((int *)(param_1 + DAT_08125018))[1] + DAT_0812501c;
    local_1c = *(int *)(param_1 + DAT_08125018);
    if (local_1c < *(int *)(*piVar6 + 0x54)) {
      local_1c = local_1c + DAT_08125020;
      FUN_080bd0bc(&local_1c,0x100,param_1);
    }
    else {
      local_1c = local_1c + 0x8c00;
      FUN_080bd0bc(&local_1c,0,param_1);
    }
    *(undefined4 *)(param_1 + DAT_08125060 + 0x30) = 0;
  }
  param_1 = param_1 + DAT_08125060;
  if (*(int *)(param_1 + 0x2c) == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (*(int *)(param_1 + 0x14) < 0x4b1) {
      iVar3 = 2;
    }
    else {
      iVar3 = FUN_08128fb8(*(int *)(param_1 + 0x14),600);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 1;
    iVar3 = *(int *)(param_1 + 0x2c) + -1;
  }
  *(int *)(param_1 + 0x2c) = iVar3;
  return CONCAT44(in_lr,uVar2);
}


