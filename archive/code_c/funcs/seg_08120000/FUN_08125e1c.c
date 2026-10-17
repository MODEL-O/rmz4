// undefined FUN_08125e1c(void)
// entry 0x8125e1c


undefined8 FUN_08125e1c(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 in_lr;
  
  piVar5 = (int *)(param_1 + DAT_08125e74);
  if (((*(uint *)(*piVar5 + 0x8c) & 1) != 0) &&
     (iVar2 = piVar5[5], piVar5[5] = iVar2 + -0xb4, iVar2 + -0xb4 < 0)) {
    piVar5[5] = 0;
  }
  piVar5 = (int *)(param_1 + DAT_08125e74);
  uVar3 = FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(piVar5 + 6) * 4 + DAT_08125e78));
  *(undefined2 *)(*piVar5 + 0xa4) = 0x10;
  iVar2 = piVar5[3];
  iVar6 = piVar5[2];
  if (iVar2 < iVar6) {
    if (iVar6 - iVar2 < 10) {
      piVar5[3] = iVar2 + 1;
    }
    else {
      piVar5[3] = iVar2 + 2;
      if (iVar6 < iVar2 + 2) {
        piVar5[3] = iVar6;
      }
    }
  }
  param_1 = param_1 + DAT_08125f3c;
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 8);
  }
  FUN_0810da2c(DAT_08125f40,1,0);
  FUN_0810dae0(*(undefined4 *)(param_1 + 0xc),0xb,0);
  FUN_0810da2c(DAT_08125f44,0xf,0);
  FUN_0810dae0(*(undefined4 *)(param_1 + 0x10),0x1c,0);
  FUN_0810da2c(DAT_08125f48,9,0x12);
  uVar4 = FUN_08128fb8(*(undefined4 *)(param_1 + 0x14),0x3c);
  FUN_0810dae0(uVar4,0xf,0x12);
  FUN_0810da2c(DAT_08125f4c,0x10,0x12);
  iVar2 = FUN_08129050(*(undefined4 *)(param_1 + 0x14),0x3c);
  bVar1 = FUN_08128fb8(iVar2 * 0xa6,100);
  FUN_0810dae0(bVar1,0x12,0x12);
  if (bVar1 < 10) {
    FUN_0810dae0(0,0x11,0x12);
  }
  if (*(int *)(param_1 + 0x2c) == 1) {
    if (*(int *)(param_1 + 0x30) == 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    else {
      FUN_0810da2c(DAT_08125f50,0x10,8);
      FUN_0810dae0(5 - *(int *)(param_1 + 0x28),0x11,8);
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    }
  }
  return CONCAT44(in_lr,uVar3);
}


