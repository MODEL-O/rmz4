// undefined FUN_080c800c(void)
// entry 0x80c800c


undefined4 FUN_080c800c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 != 0) {
    if (1 < *(byte *)(iVar2 + 0xc)) {
      iVar2 = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (iVar2 != 0) {
      FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080c8058));
      return in_lr;
    }
  }
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c8040);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
  FUN_080c82a8(param_1);
  return in_lr;
}


