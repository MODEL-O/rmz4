// undefined FUN_08033000(void)
// entry 0x8033000


undefined4 FUN_08033000(int param_1)

{
  undefined4 in_lr;
  
  FUN_0801cf00(param_1,0x4c00);
  if (*(int *)(param_1 + 0x108) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x108) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  *(undefined1 *)(param_1 + 0x100) = 0;
  *DAT_08033040 = 1;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08033044(param_1);
  return in_lr;
}


