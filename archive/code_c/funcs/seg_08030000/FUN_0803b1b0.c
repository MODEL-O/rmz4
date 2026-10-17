// undefined FUN_0803b1b0(void)
// entry 0x803b1b0


undefined4 FUN_0803b1b0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if ((*(ushort *)(*(int *)(param_1 + 0xb4) + 0x15a) & 1) == 0) {
    if ((1 < *(byte *)(param_1 + 0x10)) && (uVar1 = *(byte *)(param_1 + 0x10) - 2, uVar1 < 5)) {
                    /* WARNING: Could not recover jumptable at 0x0803b1e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(uVar1 * 4 + DAT_0803b1e8))();
      return uVar2;
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803b2a0);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
  }
  return in_lr;
}


