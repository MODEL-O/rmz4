// undefined FUN_0804a364(void)
// entry 0x804a364


undefined4 FUN_0804a364(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804a3b8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  FUN_0801cf00(param_1,DAT_0804a3bc);
  *(undefined1 *)(param_1 + 0x12) = 8;
  *(undefined1 *)(param_1 + 0x13) = 0x14;
  *(undefined1 *)(param_1 + 0xbe) = 0;
  FUN_0804a3c0(param_1);
  return in_lr;
}


