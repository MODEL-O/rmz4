// undefined FUN_080722ac(void)
// entry 0x80722ac


undefined4 FUN_080722ac(int param_1)

{
  undefined1 uVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x54) < *(int *)(*DAT_080722d4 + 0x54) ==
      (bool)(*(byte *)(param_1 + 10) >> 4 & 1)) {
    uVar1 = 0x1c;
  }
  else {
    uVar1 = 0x1a;
  }
  *(undefined1 *)(param_1 + 0xe) = uVar1;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080722f8));
  return in_lr;
}


