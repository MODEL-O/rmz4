// undefined FUN_080afc7c(void)
// entry 0x80afc7c


undefined4 FUN_080afc7c(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    FUN_08006984(0xe);
    if (((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
    {
      *(undefined1 *)(iVar1 + 0xb4) = 1;
      if (*DAT_080afcc4 != 0) {
        FUN_0803a578(*DAT_080afcc4,5,7);
      }
    }
  }
  return in_lr;
}


