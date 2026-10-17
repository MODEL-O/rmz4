// undefined FUN_0809e968(void)
// entry 0x809e968


undefined4 FUN_0809e968(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
  iVar2 = iVar1;
  if (iVar1 < 0) {
    iVar2 = -iVar1;
  }
  if (iVar2 <= DAT_0809e994) {
    *(int *)(param_1 + 0x5c) = iVar1 + *(int *)(param_1 + 100);
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


