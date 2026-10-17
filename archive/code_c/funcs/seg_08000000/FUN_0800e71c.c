// undefined FUN_0800e71c(void)
// entry 0x800e71c


undefined4 FUN_0800e71c(void)

{
  int iVar1;
  undefined4 in_lr;
  
  *DAT_0800e750 = (ushort)DAT_0800e754 & *DAT_0800e750;
  iVar1 = DAT_0800e758;
  *(ushort *)(DAT_0800e758 + 0x15c) = *(ushort *)(DAT_0800e758 + 0x15c) | 0x4000;
  *(undefined2 *)(iVar1 + 0x15e) = 0x8000;
  return in_lr;
}


