// undefined FUN_080f3e80(void)
// entry 0x80f3e80


undefined4 FUN_080f3e80(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) * '\x03';
  if (*(byte *)(param_1 + 0x11) < 8) {
                    /* WARNING: Could not recover jumptable at 0x080f3e9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(PTR_PTR_080f3e9c + (uint)*(byte *)(param_1 + 0x11) * 4))();
    return uVar1;
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080f3efc));
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f3f00);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080f3f04(param_1);
  return in_lr;
}


