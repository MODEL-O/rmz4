// undefined FUN_080b20c4(void)
// entry 0x80b20c4


undefined4 FUN_080b20c4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xc0) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar2 = FUN_0802adac(0,param_1,DAT_080b2114);
    *(int *)(param_1 + 0xc0) = iVar2;
    if (iVar2 != 0) {
      FUN_08005784(param_1 + 0x74,DAT_080b2118);
      uVar1 = DAT_080b211c;
      FUN_0801cf00(param_1,DAT_080b211c);
      FUN_0801cf00(param_1,uVar1);
    }
  }
  return in_lr;
}


