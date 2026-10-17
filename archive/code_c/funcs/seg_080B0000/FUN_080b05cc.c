// undefined FUN_080b05cc(void)
// entry 0x80b05cc


undefined4 FUN_080b05cc(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (*(char *)(iVar1 + 0x10) == '\0') {
      FUN_08006984(0x1f);
      if (*(char *)(iVar1 + 0x12) == -1) {
        if ((*(uint *)(param_1 + 0x14) & 0x20000) != 0) {
          *(undefined1 *)(iVar1 + 0xb5) = 2;
          if (*DAT_080b0660 != 0) {
            FUN_0803a578(*DAT_080b0660,8,0);
            *(undefined1 *)(iVar1 + 0xd) = 4;
            *(undefined1 *)(iVar1 + 0xe) = 0;
            *(undefined2 *)(iVar1 + 0xa4) = 0x28;
          }
        }
      }
      else if (((*(uint *)(param_1 + 0x14) & 0x200) != 0) &&
              ((*(uint *)(param_1 + 0x14) & 0x20000) != 0)) {
        *(undefined1 *)(iVar1 + 0xb5) = 1;
        if (*DAT_080b0624 != 0) {
          FUN_0803a578(*DAT_080b0624,5,6);
        }
      }
    }
    else {
      FUN_08006984(0x25);
    }
  }
  return in_lr;
}


