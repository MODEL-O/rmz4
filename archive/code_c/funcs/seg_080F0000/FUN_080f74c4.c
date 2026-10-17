// undefined FUN_080f74c4(void)
// entry 0x80f74c4


undefined4 FUN_080f74c4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x8c) & 0x800) != 0) {
      iVar1 = 0;
    }
    if (iVar1 != 0) goto LAB_080f74fa;
  }
  iVar1 = FUN_0809e1f0(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x28),param_1,param_1 + 0x54);
LAB_080f74fa:
  *(int *)(param_1 + 0xb8) = iVar1;
  return in_lr;
}


