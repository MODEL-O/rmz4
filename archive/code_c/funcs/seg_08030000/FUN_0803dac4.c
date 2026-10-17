// undefined FUN_0803dac4(void)
// entry 0x803dac4


undefined4 FUN_0803dac4(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803db58);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_0801d3d0(param_1,0);
  }
  *(int *)(param_1 + 100) = (int)*(char *)((uint)*(byte *)(param_1 + 0x10) + DAT_0803db5c) << 8;
  *(int *)(param_1 + 0x68) = (int)*(char *)((uint)*(byte *)(param_1 + 0x10) + DAT_0803db60) << 8;
  *(int *)(param_1 + 0x5c) = (int)*(char *)((uint)*(byte *)(param_1 + 0x10) + DAT_0803db64) << 8;
  *(int *)(param_1 + 0x60) = (int)*(char *)((uint)*(byte *)(param_1 + 0x10) + DAT_0803db68) << 8;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  FUN_0803db6c(param_1);
  return in_lr;
}


