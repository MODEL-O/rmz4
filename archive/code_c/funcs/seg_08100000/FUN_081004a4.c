// undefined FUN_081004a4(void)
// entry 0x81004a4


undefined4 FUN_081004a4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (((*(byte *)(DAT_081004ec + 7) & 8) == 0) &&
     (iVar1 = FUN_0801fb14(DAT_081004f0,param_1 + 0x54), iVar1 == 0)) {
    FUN_08006984(0x3b);
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_081004f4));
  FUN_0801cff0(param_1);
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  return in_lr;
}


