// undefined FUN_0801c79c(void)
// entry 0x801c79c


undefined4 FUN_0801c79c(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  FUN_080054b4();
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  *(int *)(param_1 + 0xc) = iVar1;
  while (iVar1 != param_1 + 0x14) {
    FUN_08128f80(iVar1,*(undefined4 *)(iVar1 + 0x14));
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
    *(int *)(param_1 + 0xc) = iVar1;
  }
  return in_lr;
}


