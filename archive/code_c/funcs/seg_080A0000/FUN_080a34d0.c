// undefined FUN_080a34d0(void)
// entry 0x80a34d0


undefined4 FUN_080a34d0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a3500);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080a32fc(param_1);
    return in_lr;
  }
  piVar1 = (int *)(param_1 + 0xc0);
  if (*piVar1 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      iVar2 = FUN_0802adac(0x14,param_1,DAT_080a3578);
      *piVar1 = iVar2;
      if (iVar2 == 0) goto LAB_080a3564;
      FUN_08005784(param_1 + 0x74,(uint)*(byte *)(param_1 + 0x11) * 0x30 + DAT_080a357c);
    }
    if (*piVar1 == 0) goto LAB_080a3564;
  }
  iVar2 = FUN_0802b3e4(*piVar1);
  if (iVar2 != 0) {
    FUN_08005784(param_1 + 0x74,(uint)*(byte *)(param_1 + 0x11) * 0x30 + DAT_080a3580);
    *piVar1 = 0;
  }
LAB_080a3564:
  if (6 < *(byte *)(param_1 + 0xd)) {
    FUN_0801cff0(param_1);
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080a3574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080a3584))();
  return uVar3;
}


