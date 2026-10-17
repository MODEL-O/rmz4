// undefined FUN_0809f328(void)
// entry 0x809f328


undefined4 FUN_0809f328(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xc0) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = FUN_0802adac(0,param_1,DAT_0809f370);
    *(int *)(param_1 + 0xc0) = iVar1;
    if (iVar1 != 0) {
      FUN_08005784(param_1 + 0x74,DAT_0809f374);
      FUN_0801cf00(param_1,0x7500);
    }
  }
  return in_lr;
}


