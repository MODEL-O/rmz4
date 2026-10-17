// undefined FUN_080863c0(void)
// entry 0x80863c0


undefined4 FUN_080863c0(int param_1)

{
  undefined4 in_lr;
  
  if (((*(int *)(param_1 + 100) - *(int *)(*DAT_08086400 + 0x54)) + 0xf000U < 0x1e001) &&
     ((*(int *)(param_1 + 0x68) - *(int *)(*DAT_08086400 + 0x58)) + 0xc400U < 0x14001)) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


