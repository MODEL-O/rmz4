// undefined FUN_08032c64(void)
// entry 0x8032c64


undefined4 FUN_08032c64(int param_1)

{
  undefined4 in_lr;
  
  FUN_0801cfc8(param_1,DAT_08032ca4,1,3);
  *(undefined1 *)(param_1 + DAT_08032ca8) = 0x3c;
  *(undefined4 *)(param_1 + 0x60) = DAT_08032cac;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  if (*(int *)(param_1 + 0x108) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x108) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  *(undefined1 *)(param_1 + 0xe) = 1;
  FUN_08032cb0(param_1);
  return in_lr;
}


