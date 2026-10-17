// undefined FUN_080127c8(void)
// entry 0x80127c8


undefined4 FUN_080127c8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = DAT_08012810;
  iVar2 = (param_1 << 4) >> 0x10;
  FUN_08007410(iVar2,(((param_2 << 4) >> 0x10) + -4) * 0x10000 >> 0x10,DAT_08012810);
  FUN_08007410(iVar2,(((param_2 + 0x32000) * 0x10 >> 0x10) + -4) * 0x10000 >> 0x10,uVar1);
  *(undefined1 *)(DAT_08012814 + DAT_08012818) = 1;
  return in_lr;
}


