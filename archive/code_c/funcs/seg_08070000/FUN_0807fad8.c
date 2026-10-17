// undefined FUN_0807fad8(void)
// entry 0x807fad8


undefined4 FUN_0807fad8(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = *DAT_0807fb10;
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


