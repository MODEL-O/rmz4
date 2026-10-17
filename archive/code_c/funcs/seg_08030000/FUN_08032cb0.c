// undefined FUN_08032cb0(void)
// entry 0x8032cb0


undefined4 FUN_08032cb0(int param_1)

{
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x10;
  FUN_0802bfe8(param_1,(uint)*(byte *)(param_1 + 0x174) * 8 + DAT_08032cf0,0);
  if (0 < *(int *)(param_1 + 0x60)) {
    *(undefined1 *)(param_1 + 0xe) = 2;
    FUN_08032cf4(param_1);
  }
  return in_lr;
}


