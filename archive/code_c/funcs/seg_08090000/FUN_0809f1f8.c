// undefined FUN_0809f1f8(void)
// entry 0x809f1f8


undefined4 FUN_0809f1f8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    FUN_08006984(8);
    if (((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
    {
      *(undefined1 *)(iVar1 + 0xb9) = 1;
      if (*DAT_0809f240 != 0) {
        FUN_0803a578(*DAT_0809f240,3,0xe);
      }
    }
  }
  return in_lr;
}


