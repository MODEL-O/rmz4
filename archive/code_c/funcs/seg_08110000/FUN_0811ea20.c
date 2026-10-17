// undefined FUN_0811ea20(void)
// entry 0x811ea20


undefined4 FUN_0811ea20(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  FUN_08002624(0x3f);
  FUN_08002624(0x40);
  iVar1 = param_1 + DAT_0811ea50;
  *(undefined1 *)(iVar1 + 5) = 2;
  *DAT_0811ea54 = 0;
  if (*(char *)(iVar1 + 7) == '\x01') {
    FUN_081126ac(param_1,DAT_0811ea58);
  }
  else {
    FUN_081126ac(param_1,DAT_0811ea6c);
  }
  return in_lr;
}


