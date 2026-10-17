// undefined FUN_080fb398(void)
// entry 0x80fb398


undefined4 FUN_080fb398(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    FUN_08006984(0x23);
    if (((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
    {
      *(undefined1 *)(iVar1 + 0xb5) = 1;
      if (*DAT_080fb3e0 != 0) {
        FUN_0803a578(*DAT_080fb3e0,7,1);
      }
    }
  }
  return in_lr;
}


