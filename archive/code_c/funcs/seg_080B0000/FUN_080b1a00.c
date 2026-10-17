// undefined FUN_080b1a00(void)
// entry 0x80b1a00


undefined4 FUN_080b1a00(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  puVar1 = DAT_080b1a48;
  if ((*(int *)(param_1 + 0xc0) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    *DAT_080b1a48 = 0;
    puVar1[1] = DAT_080b1a4c;
    iVar2 = FUN_0802adac(0,param_1);
    *(int *)(param_1 + 0xc0) = iVar2;
    if (iVar2 != 0) {
      FUN_08005784(param_1 + 0x74,DAT_080b1a50);
      FUN_0801cf00(param_1,DAT_080b1a54);
    }
  }
  return in_lr;
}


