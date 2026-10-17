// undefined FUN_080a99d4(void)
// entry 0x80a99d4


undefined4 FUN_080a99d4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    *(undefined1 *)(iVar1 + 0xb6) = 1;
    if (*(char *)(iVar1 + 0x10) == '\0') {
      FUN_08006984(0x2c);
    }
    else {
      FUN_08006984(0x2d);
    }
    if (*(char *)(iVar2 + 8) == '\x01') {
      if (*(char *)(iVar2 + 9) == '\x1d') {
        *(undefined1 *)(iVar1 + 0xb7) = 2;
      }
      if (*(char *)(iVar2 + 9) == '\x1e') {
        *(undefined1 *)(iVar1 + 0xb7) = 1;
      }
      FUN_080a9c6c(iVar1);
    }
    if (((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
    {
      *(undefined1 *)(iVar1 + 0xb4) = 1;
      if (*DAT_080a9a68 != 0) {
        FUN_0803a578(*DAT_080a9a68,6,*(undefined1 *)((uint)*(byte *)(iVar1 + 0x10) + DAT_080a9a6c));
      }
    }
  }
  return in_lr;
}


