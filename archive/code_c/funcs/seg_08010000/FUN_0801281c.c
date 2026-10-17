// undefined FUN_0801281c(void)
// entry 0x801281c


undefined4 FUN_0801281c(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = (param_1 << 4) >> 0x10;
  FUN_08007410(iVar1,(((param_2 << 4) >> 0x10) + -4) * 0x10000 >> 0x10,DAT_08012864);
  FUN_08007410(iVar1,(((param_2 + 0x32000) * 0x10 >> 0x10) + -4) * 0x10000 >> 0x10,DAT_08012868);
  *(undefined1 *)(DAT_0801286c + DAT_08012870) = 1;
  return in_lr;
}


