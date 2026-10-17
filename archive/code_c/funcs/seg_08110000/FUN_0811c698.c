// undefined FUN_0811c698(void)
// entry 0x811c698


undefined4 FUN_0811c698(int param_1)

{
  undefined4 in_lr;
  
  FUN_08002624(0x2f);
  if (*(char *)(param_1 + DAT_0811c6bc + 0x1a) == '1') {
    FUN_08002624(0x31);
    FUN_08002624(0x3a);
  }
  else {
    FUN_08002624(0x30);
    FUN_08002624(0x32);
  }
  *DAT_0811c6f8 = (ushort)DAT_0811c6fc & *DAT_0811c6f8;
  *DAT_0811c700 = 0;
  FUN_0811d6c0(param_1);
  *(undefined1 *)(param_1 + DAT_0811c704 + 5) = 1;
  FUN_081126ac(param_1,DAT_0811c708);
  return in_lr;
}


