// undefined FUN_08122c20(void)
// entry 0x8122c20


undefined4 FUN_08122c20(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  FUN_0801e918(param_1 + DAT_08122c88);
  FUN_080382e4(*(undefined4 *)(param_1 + DAT_08122c8c),param_1 + DAT_08122c8c + -0x60);
  iVar2 = DAT_08122c94;
  iVar1 = DAT_08122c90;
  FUN_08128be0(DAT_08122c90,DAT_08122c94,0x50);
  FUN_08128be4(iVar1 + 0x140,iVar2 + 0x140,DAT_08122c98);
  FUN_080016ac(param_2,iVar2,0x14c);
  return in_lr;
}


