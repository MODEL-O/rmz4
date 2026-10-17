// undefined FUN_080bd36c(void)
// entry 0x80bd36c


undefined4 FUN_080bd36c(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *DAT_080bd3b0;
  if ((*DAT_080bd3b4 == 1) ||
     (((((DAT_080bd3b4[4] & 1U) != 0 && ((*(byte *)(DAT_080bd3b4 + 9) & 1) == 0)) &&
       ((DAT_080bd3b4[10] & 1U) == 0)) && ((*DAT_080bd3b8 == '\0' && (*DAT_080bd3bc == '\0')))))) {
    uVar1 = 0;
    puVar3 = DAT_080bd3f4;
  }
  else {
    uVar1 = 1;
    puVar3 = DAT_080bd3c0;
  }
  *puVar3 = uVar1;
  FUN_080054b4(iVar4);
  iVar2 = *(int *)(*(int *)(iVar4 + 0xc) + 4);
  *(int *)(iVar4 + 0xc) = iVar2;
  while (iVar2 != iVar4 + 0x14) {
    FUN_08128f80(iVar2,*(undefined4 *)(iVar2 + 0x14));
    iVar2 = *(int *)(*(int *)(iVar4 + 0xc) + 4);
    *(int *)(iVar4 + 0xc) = iVar2;
  }
  return in_lr;
}


