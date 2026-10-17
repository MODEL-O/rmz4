// undefined FUN_0803495c(void)
// entry 0x803495c


undefined4 FUN_0803495c(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = DAT_08034998;
  FUN_0803a3b0(param_1,DAT_08034998);
  FUN_0803a3f0(param_1,uVar1);
  if (*(char *)(param_1 + DAT_0803499c) == '\x02') {
    *(undefined1 *)(param_1 + DAT_080349a0) = 2;
    *(undefined1 *)(param_1 + 0x102) = 0;
    FUN_080349a4(param_1);
  }
  return in_lr;
}


