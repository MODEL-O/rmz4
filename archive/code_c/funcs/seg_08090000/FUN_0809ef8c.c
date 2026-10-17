// undefined FUN_0809ef8c(void)
// entry 0x809ef8c


undefined4 FUN_0809ef8c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar2 = *(int *)(param_1 + 0x2c);
    if (((*(uint *)(param_1 + 0x14) & 0x20000) != 0) && (*DAT_0809efc4 != 0)) {
      uVar1 = FUN_0803a578(*DAT_0809efc4,5,3);
      *(undefined1 *)(iVar2 + 0xb4) = uVar1;
    }
  }
  return in_lr;
}


