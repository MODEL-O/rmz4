// undefined FUN_081238c8(void)
// entry 0x81238c8


undefined8 FUN_081238c8(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = param_1 + DAT_081238fc;
  uVar2 = FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(iVar6 + 0x18) * 4 + DAT_081238f8));
  iVar4 = *(int *)(iVar6 + 0xc);
  iVar5 = *(int *)(iVar6 + 8);
  if (iVar4 < iVar5) {
    if (iVar5 - iVar4 < 10) {
      *(int *)(iVar6 + 0xc) = iVar4 + 1;
    }
    else {
      *(int *)(iVar6 + 0xc) = iVar4 + 2;
      if (iVar5 < iVar4 + 2) {
        *(int *)(iVar6 + 0xc) = iVar5;
      }
    }
  }
  iVar4 = param_1 + DAT_081239ac;
  if (*(int *)(iVar4 + 0x10) < *(int *)(iVar4 + 8)) {
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 8);
  }
  FUN_0810da2c(DAT_081239b0,1,0);
  FUN_0810dae0(*(undefined4 *)(iVar4 + 0xc),0xb,0);
  FUN_0810da2c(DAT_081239b4,0xf,0);
  FUN_0810dae0(*(undefined4 *)(iVar4 + 0x10),0x1c,0);
  FUN_0810da2c(DAT_081239b8,9,0x12);
  uVar3 = FUN_08128fb8(*(undefined4 *)(iVar4 + 0x14),0x3c);
  FUN_0810dae0(uVar3,0xf,0x12);
  FUN_0810da2c(DAT_081239bc,0x10,0x12);
  iVar5 = FUN_08129050(*(undefined4 *)(iVar4 + 0x14),0x3c);
  bVar1 = FUN_08128fb8(iVar5 * 0xa6,100);
  FUN_0810dae0(bVar1,0x12,0x12);
  if (bVar1 < 10) {
    FUN_0810dae0(0,0x11,0x12);
  }
  if (*(int *)(iVar4 + 0x30) == 0) {
    if (3 < *(uint *)(iVar4 + 0x34)) goto LAB_081239c4;
    FUN_081239cc(param_1);
    iVar5 = *(int *)(iVar4 + 0x2c);
  }
  else {
    iVar5 = *(int *)(iVar4 + 0x30) + -1;
  }
  *(int *)(iVar4 + 0x30) = iVar5;
LAB_081239c4:
  return CONCAT44(in_lr,uVar2);
}


