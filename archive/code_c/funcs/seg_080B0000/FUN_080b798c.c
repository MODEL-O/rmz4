// undefined FUN_080b798c(void)
// entry 0x80b798c


undefined4 FUN_080b798c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  puVar1 = DAT_080b79d8;
  if ((*(int *)(param_1 + 0xc0) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    *DAT_080b79d8 = 0;
    puVar1[1] = DAT_080b79dc;
    iVar2 = FUN_0802adac(0,param_1);
    *(int *)(param_1 + 0xc0) = iVar2;
    if (iVar2 != 0) {
      FUN_08005784(param_1 + 0x74,DAT_080b79e0);
      FUN_0801cf00(param_1,0xd200);
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  return in_lr;
}


