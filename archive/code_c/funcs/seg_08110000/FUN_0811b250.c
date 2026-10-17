// undefined FUN_0811b250(void)
// entry 0x811b250


undefined4 FUN_0811b250(int param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0xde0) = 0;
  *(undefined1 *)(param_1 + 0xde1) = 0;
  puVar1 = DAT_0811b2cc;
  FUN_08001d30(DAT_0811b2c8,(*DAT_0811b2cc & 0xc) << 0xc);
  FUN_08002208(DAT_0811b2d0,0);
  iVar2 = param_1 + DAT_0811b2d4;
  FUN_080027b8(iVar2,DAT_0811b2d8,0x16,0,0);
  FUN_0811ba00(param_1,iVar2);
  FUN_08001f1c(iVar2,(*puVar1 & 0x1f00) << 3,0x1000);
  FUN_0800249c(0x33,0);
  *(undefined1 *)(param_1 + 2) = 2;
  return in_lr;
}


