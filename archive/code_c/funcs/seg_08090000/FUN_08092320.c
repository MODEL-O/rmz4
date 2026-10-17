// undefined FUN_08092320(void)
// entry 0x8092320


undefined4 FUN_08092320(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xb4) == 0) || (iVar1 = FUN_0802b3e4(), iVar1 != 0)) {
    FUN_08005784(param_1 + 0x74,DAT_0809235c);
    *(int *)(param_1 + 0xb4) = 0;
    iVar1 = FUN_0807f90c(param_1);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0xd) = 4;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


