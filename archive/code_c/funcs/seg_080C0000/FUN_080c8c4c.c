// undefined FUN_080c8c4c(void)
// entry 0x80c8c4c


undefined4 FUN_080c8c4c(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0xd) < 3) && (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc))) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c8c80);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080c88ec(param_1);
  }
  else {
    FUN_0801cff0(param_1);
    uVar1 = *(undefined1 *)(param_1 + 0x11);
    FUN_08129198(uVar1,6);
    FUN_08129120(uVar1,6);
    if (*(byte *)(param_1 + 0xd) < 5) {
                    /* WARNING: Could not recover jumptable at 0x080c8cca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080c8cd4))();
      return uVar3;
    }
  }
  return in_lr;
}


