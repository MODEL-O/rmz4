// undefined FUN_080377d0(void)
// entry 0x80377d0


undefined4 FUN_080377d0(int param_1)

{
  undefined4 in_lr;
  
  FUN_0801cf00(param_1,0x2400);
  FUN_0803a308(param_1);
  *(undefined1 *)(param_1 + DAT_08037800) = 1;
  *(undefined1 *)(param_1 + 0x102) = 0;
  FUN_08037804(param_1);
  return in_lr;
}


