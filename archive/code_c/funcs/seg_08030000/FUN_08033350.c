// undefined FUN_08033350(void)
// entry 0x8033350


undefined4 FUN_08033350(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x108) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x108) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  *(undefined1 *)(param_1 + 0x100) = 0;
  FUN_0801cf00(param_1,0x4e00);
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return in_lr;
}


