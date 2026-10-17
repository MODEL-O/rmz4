// undefined FUN_08036924(void)
// entry 0x8036924


undefined4 FUN_08036924(int param_1)

{
  undefined4 in_lr;
  
  FUN_0801cf00(param_1,DAT_08036954);
  FUN_0803a308(param_1);
  *(undefined1 *)(param_1 + DAT_08036958) = 1;
  *(undefined1 *)(param_1 + 0x102) = 0;
  FUN_0803695c(param_1);
  return in_lr;
}


