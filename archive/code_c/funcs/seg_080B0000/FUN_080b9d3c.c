// undefined FUN_080b9d3c(void)
// entry 0x80b9d3c


undefined4 FUN_080b9d3c(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x12) == '<') {
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  if ((byte)(*(char *)(param_1 + 0x12) - 0xfU) < 0x1f) {
    iVar1 = *(int *)(param_1 + 0x58) + -0x40;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x58) + 0x40;
  }
  *(int *)(param_1 + 0x58) = iVar1;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return in_lr;
}


