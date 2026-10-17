// undefined FUN_080af554(void)
// entry 0x80af554


undefined4 FUN_080af554(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((*(uint *)(param_1 + 0x14) & 4) == 0) {
    *(undefined1 *)(iVar1 + 0xd) = 2;
    *(undefined1 *)(iVar1 + 0xe) = 0;
    FUN_08006984(0x15);
    if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
      *(undefined1 *)(iVar1 + 0xd) = 0;
      if (((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0)
         ) {
        *(undefined1 *)(iVar1 + 0xb4) = 1;
        if (*DAT_080af5b0 != 0) {
          FUN_0803a578(*DAT_080af5b0,5,8);
        }
      }
    }
  }
  return in_lr;
}


