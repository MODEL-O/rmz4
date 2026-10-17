// undefined FUN_080c8328(void)
// entry 0x80c8328


undefined4 FUN_080c8328(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if ((uint)*(byte *)(*(int *)(param_1 + 0x28) + 0xb4) == *(byte *)(param_1 + 0x11) + 1) {
    FUN_08002b10(0x3f);
  }
  FUN_080de82c(param_1 + 0x54,0,0);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c8380);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


