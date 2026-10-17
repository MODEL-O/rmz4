// undefined FUN_081240fc(void)
// entry 0x81240fc


undefined8 FUN_081240fc(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_lr;
  
  piVar6 = (int *)(param_1 + DAT_08124138);
  uVar2 = FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(piVar6 + 6) * 4 + DAT_08124134));
  *(undefined2 *)(*piVar6 + 0xa4) = 0x10;
  iVar4 = piVar6[3];
  iVar5 = piVar6[2];
  if (iVar4 < iVar5) {
    if (iVar5 - iVar4 < 10) {
      piVar6[3] = iVar4 + 1;
    }
    else {
      piVar6[3] = iVar4 + 2;
      if (iVar5 < iVar4 + 2) {
        piVar6[3] = iVar5;
      }
    }
  }
  param_1 = param_1 + DAT_081241d8;
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 8);
  }
  FUN_0810da2c(DAT_081241dc,1,0);
  FUN_0810dae0(*(undefined4 *)(param_1 + 0xc),0xb,0);
  FUN_0810da2c(DAT_081241e0,0xf,0);
  FUN_0810dae0(*(undefined4 *)(param_1 + 0x10),0x1c,0);
  FUN_0810da2c(DAT_081241e4,9,0x12);
  uVar3 = FUN_08128fb8(*(undefined4 *)(param_1 + 0x14),0x3c);
  FUN_0810dae0(uVar3,0xf,0x12);
  FUN_0810da2c(DAT_081241e8,0x10,0x12);
  iVar4 = FUN_08129050(*(undefined4 *)(param_1 + 0x14),0x3c);
  bVar1 = FUN_08128fb8(iVar4 * 0xa6,100);
  FUN_0810dae0(bVar1,0x12,0x12);
  if (bVar1 < 10) {
    FUN_0810dae0(0,0x11,0x12);
  }
  return CONCAT44(in_lr,uVar2);
}


