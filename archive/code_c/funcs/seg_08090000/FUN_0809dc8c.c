// undefined FUN_0809dc8c(void)
// entry 0x809dc8c


undefined4 FUN_0809dc8c(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    FUN_08006984(0x1d);
    if (((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
    {
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xbe) = 1;
      if (*DAT_0809dcd4 != 0) {
        FUN_0803a578(*DAT_0809dcd4,3,0xd);
      }
    }
  }
  return in_lr;
}


