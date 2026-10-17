// undefined FUN_080382b0(void)
// entry 0x80382b0


undefined4 FUN_080382b0(int param_1,int param_2)

{
  undefined4 in_lr;
  
  FUN_08128be0(param_2,param_1 + 0xb4,0x10);
  FUN_08128be4(param_2 + 0x40,param_1 + 0xf4,DAT_080382e0);
  *(undefined2 *)(param_1 + 0xa4) = 0x40;
  return in_lr;
}


