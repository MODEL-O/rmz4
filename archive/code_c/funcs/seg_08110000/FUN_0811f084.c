// undefined FUN_0811f084(void)
// entry 0x811f084


undefined4 FUN_0811f084(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + DAT_0811f0a8);
  if ((*(char *)(param_1 + 2) == '\0') && ((*(ushort *)(DAT_0811f0ac + 4) & 2) != 0)) {
    *(undefined1 *)(param_1 + 1) = 3;
  }
  else {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 2) * 4 + DAT_0811f0f0));
  }
  FUN_080025d8(0x41);
  FUN_0810d85c((uint)*(ushort *)((*(byte *)(iVar1 + 0xf5) + 0x5a) * 2 + DAT_0811f0f4) + DAT_0811f0f8
               ,0x15,1);
  FUN_0811c1e4(param_1);
  return in_lr;
}


