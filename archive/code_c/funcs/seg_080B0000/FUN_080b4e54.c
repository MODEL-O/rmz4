// undefined FUN_080b4e54(void)
// entry 0x80b4e54


undefined4 FUN_080b4e54(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    FUN_08006984(0x1a);
    if (((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
    {
      *(undefined1 *)(iVar1 + 0xb4) = 1;
      if (*DAT_080b4ea4 != 0) {
        FUN_0803a578(*DAT_080b4ea4,6,0xb);
      }
    }
    *(undefined1 *)(iVar1 + 0xd) = 5;
    *(undefined1 *)(iVar1 + 0xe) = 0;
  }
  return in_lr;
}


