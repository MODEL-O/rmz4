// undefined FUN_0803a6dc(void)
// entry 0x803a6dc


undefined4 FUN_0803a6dc(int param_1,undefined1 param_2)

{
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0xf5) = param_2;
  if (*(char *)(param_1 + 199) == '\x03') {
    *(undefined1 *)(param_1 + 0xf0) = 5;
    *(undefined1 *)(param_1 + 0xf1) = 5;
    *(undefined1 *)(param_1 + 0xf2) = 5;
    *(undefined1 *)(param_1 + 0xf3) = 5;
    *(undefined1 *)(param_1 + 0xf4) = 0xf;
    FUN_08109320(param_1);
  }
  else if (*(char *)(param_1 + 199) == '\x02') {
    *(undefined1 *)(param_1 + 0xf0) = 7;
    *(undefined1 *)(param_1 + 0xf4) = 0x15;
    FUN_08109320(param_1);
  }
  return in_lr;
}


