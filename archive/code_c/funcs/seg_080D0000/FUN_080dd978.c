// undefined FUN_080dd978(void)
// entry 0x80dd978


undefined4 FUN_080dd978(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_080dd9a8);
  FUN_0801cff0(param_1);
  uVar1 = DAT_080dd9ac;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar1 = 0x1c0;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = DAT_080dd9dc;
  *(undefined1 *)(param_1 + 0x12) = 0x14;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080dd9e0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080dd6c8(param_1);
  return in_lr;
}


