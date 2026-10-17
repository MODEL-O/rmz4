// undefined FUN_08033104(void)
// entry 0x8033104


undefined4 FUN_08033104(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x108) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x108) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  *(undefined1 *)(param_1 + 0x100) = 0;
  *DAT_08033138 = 1;
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_1 + 0xf);
  *(undefined1 *)(param_1 + 0xf) = 0;
  return in_lr;
}


