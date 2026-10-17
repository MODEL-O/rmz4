// undefined FUN_08030a44(void)
// entry 0x8030a44


undefined4 FUN_08030a44(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x108) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x108) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
    FUN_0801cf00(param_1,0x200);
    *(undefined1 *)(param_1 + 0xf) = 1;
    FUN_08030a94(param_1);
  }
  else {
    FUN_0801cfc8(param_1,0x200,1,4);
    *(undefined1 *)(param_1 + 0xf) = 2;
    FUN_08030b88(param_1);
  }
  return in_lr;
}


