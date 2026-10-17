// undefined FUN_080b6518(void)
// entry 0x80b6518


undefined4 FUN_080b6518(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if ((((*(uint *)(param_1 + 0x14) & 1) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0)) &&
     (*DAT_080b6550 != 0)) {
    uVar1 = FUN_0803a578(*DAT_080b6550,7,3);
    *(undefined1 *)(iVar2 + 0xb4) = uVar1;
  }
  return in_lr;
}


