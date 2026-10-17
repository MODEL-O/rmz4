// undefined FUN_080f8518(void)
// entry 0x80f8518


undefined4 FUN_080f8518(int param_1)

{
  undefined4 in_lr;
  
  FUN_08128f88(param_1 + 0x54,param_1 + 0xb9,1,
               *(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080f8540));
  FUN_0801cff0(param_1);
  return in_lr;
}


