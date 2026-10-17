// undefined FUN_08099fa4(void)
// entry 0x8099fa4


undefined4 FUN_08099fa4(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x10) < 4) && ((*(uint *)(param_1 + 0x8c) & 0x200) != 0)) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08099fd8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_08099ff4(param_1);
  }
  else {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_08099ff0));
  }
  return in_lr;
}


