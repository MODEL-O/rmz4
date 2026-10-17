// undefined FUN_08092158(void)
// entry 0x8092158


undefined4 FUN_08092158(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    if ((*DAT_080921a4 & 0x80) == 0) {
      FUN_08006984(7);
    }
    if ((((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
       && (*DAT_080921a8 != 0)) {
      FUN_0803a578(*DAT_080921a8,6,3);
    }
  }
  return in_lr;
}


