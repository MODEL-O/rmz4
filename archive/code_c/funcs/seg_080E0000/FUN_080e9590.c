// undefined FUN_080e9590(void)
// entry 0x80e9590


undefined4 FUN_080e9590(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = *DAT_080e95c8;
  uVar3 = *(undefined4 *)(iVar2 + 0xc);
  FUN_080054c4(iVar2);
  iVar1 = *(int *)(*(int *)(iVar2 + 0xc) + 4);
  *(int *)(iVar2 + 0xc) = iVar1;
  while (iVar1 != iVar2 + 0x14) {
    FUN_08128f94();
    iVar1 = *(int *)(*(int *)(iVar2 + 0xc) + 4);
    *(int *)(iVar2 + 0xc) = iVar1;
  }
  *(undefined4 *)(iVar2 + 0xc) = uVar3;
  return in_lr;
}


