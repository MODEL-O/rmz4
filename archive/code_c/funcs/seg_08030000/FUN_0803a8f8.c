// undefined FUN_0803a8f8(void)
// entry 0x803a8f8


undefined4 FUN_0803a8f8(uint param_1,uint param_2)

{
  undefined4 in_lr;
  
  FUN_08128be0((param_2 & 0xffff) * 0x20 + DAT_0803a920,
               (uint)*(byte *)((param_1 & 0xffff) + DAT_0803a924) * 0x20 + DAT_0803a928,8);
  return in_lr;
}


