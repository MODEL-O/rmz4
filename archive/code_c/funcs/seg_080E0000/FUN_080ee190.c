// undefined FUN_080ee190(void)
// entry 0x80ee190


undefined4 FUN_080ee190(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined4 *)(param_1 + 0x30) = DAT_080ee1d8;
  *(undefined2 *)(param_1 + 0x26) = 1;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ee1dc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_1 + 0x11);
  FUN_080ed7c8(param_1);
  return in_lr;
}


