// undefined FUN_080ef78c(void)
// entry 0x80ef78c


undefined4 FUN_080ef78c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_0801cdbc(param_1);
    *(undefined4 *)(param_1 + 100) = 0x200;
    *(undefined2 *)(param_1 + 0x50) = 0x200;
    *(short *)(param_1 + 0x52) = (short)*(undefined4 *)(param_1 + 100);
  }
  else {
    FUN_0801cc9c(param_1);
  }
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ef7f0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080ed7c8(param_1);
  return in_lr;
}


