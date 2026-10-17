// undefined FUN_08028ae8(void)
// entry 0x8028ae8


undefined8 FUN_08028ae8(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  undefined8 uVar5;
  
  if (*(char *)(*(int *)(param_1 + 0xc) + 1) == '\0') {
    if (*(int *)(param_1 + 0x154) != 0) {
LAB_08028b10:
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
      uVar3 = 1;
      goto LAB_08028c56;
    }
  }
  else {
    if (*(short *)(*DAT_08028b1c + 10) == 0) goto LAB_08028b10;
    iVar4 = *(int *)(param_1 + 0x154);
    if (iVar4 != 0) {
      *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfc;
      piVar1 = (int *)((uint)*(byte *)(iVar4 + 9) * 4 + DAT_08028b64);
      *(undefined4 *)(iVar4 + 0xc) = 3;
      *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
    }
    uVar2 = *(byte *)(*(int *)(param_1 + 0xc) + 1) - 1;
    if (uVar2 < 6) {
                    /* WARNING: Could not recover jumptable at 0x08028b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(PTR_PTR_08028b68 + uVar2 * 4))
                        (*(code **)(PTR_PTR_08028b68 + uVar2 * 4),PTR_PTR_08028b68,
                         *(int *)(param_1 + 0xc));
      return uVar5;
    }
  }
  uVar3 = 0;
LAB_08028c56:
  return CONCAT44(in_lr,uVar3);
}


