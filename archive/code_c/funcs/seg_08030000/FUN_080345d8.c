// undefined FUN_080345d8(void)
// entry 0x80345d8


undefined4 FUN_080345d8(int param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined4 in_lr;
  
  uVar1 = DAT_08034618;
  FUN_0803a3b0(param_1,DAT_08034618);
  FUN_0803a3f0(param_1,uVar1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0x100) = 0;
    uVar2 = FUN_0802b7d8(param_1);
    FUN_0801cf00(param_1,uVar2);
  }
  return in_lr;
}


