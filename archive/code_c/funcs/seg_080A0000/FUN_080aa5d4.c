// undefined FUN_080aa5d4(void)
// entry 0x80aa5d4


undefined4 FUN_080aa5d4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    FUN_08006984(0x14);
    if (((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
    {
      *(undefined1 *)(iVar1 + 0xb5) = 1;
      if (*DAT_080aa61c != 0) {
        FUN_0803a578(*DAT_080aa61c,4,3);
      }
    }
  }
  return in_lr;
}


