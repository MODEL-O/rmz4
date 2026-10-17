// undefined FUN_08084a7c(void)
// entry 0x8084a7c


undefined4 FUN_08084a7c(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    FUN_08006984(0xf);
    if ((((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
       && (*DAT_08084abc != 0)) {
      FUN_0803a578(*DAT_08084abc,3,3);
    }
  }
  return in_lr;
}


