// undefined FUN_0803851c(void)
// entry 0x803851c


undefined8 FUN_0803851c(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  undefined8 uVar7;
  
  iVar2 = DAT_0803855c;
  uVar1 = *(ushort *)((uint)*(byte *)(param_1 + 0x174) * 8 + DAT_08038558 + 6);
  iVar6 = *(int *)(param_1 + 0x58);
  if ((*(ushort *)(DAT_0803855c + 0x1d0) & 0x7f) == 2) {
    iVar3 = FUN_08007b84(param_1 + 0x54);
  }
  else {
    iVar3 = *(int *)(DAT_0803855c + DAT_08038594);
  }
  if (iVar3 < iVar6 - ((int)((uint)uVar1 << 0x10) >> 0x11)) {
    uVar5 = 0x20;
  }
  else {
    if ((*(ushort *)(iVar2 + 0x1d0) & 0x7f) == 9) {
      uVar4 = FUN_08014948(param_1 + 0x54);
      if ((uVar4 & 0xff) < 5) {
                    /* WARNING: Could not recover jumptable at 0x08038592. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (**(code **)(PTR_PTR_08038598 + (uVar4 & 0xff) * 4))();
        return uVar7;
      }
    }
    uVar5 = 0x40;
  }
  return CONCAT44(in_lr,uVar5);
}


