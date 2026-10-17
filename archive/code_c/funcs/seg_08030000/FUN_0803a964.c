// undefined FUN_0803a964(void)
// entry 0x803a964


undefined4 FUN_0803a964(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *DAT_0803a998;
  FUN_080054c4(iVar2);
  iVar1 = *(int *)(*(int *)(iVar2 + 0xc) + 4);
  *(int *)(iVar2 + 0xc) = iVar1;
  while (iVar1 != iVar2 + 0x14) {
    FUN_08128f94();
    iVar1 = *(int *)(*(int *)(iVar2 + 0xc) + 4);
    *(int *)(iVar2 + 0xc) = iVar1;
  }
  return in_lr;
}


