// undefined FUN_080d0be0(void)
// entry 0x80d0be0


undefined4 FUN_080d0be0(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *DAT_080d0bf0;
  FUN_080054b4(iVar2);
  while( true ) {
    iVar1 = *(int *)(*(int *)(iVar2 + 0xc) + 4);
    *(int *)(iVar2 + 0xc) = iVar1;
    if (iVar1 == iVar2 + 0x14) break;
    if (*DAT_080d0c0c == '\0') {
      FUN_08128f80(iVar1,*(undefined4 *)(iVar1 + 0x14));
    }
    else if (*(char *)(iVar1 + 9) == '0') {
      FUN_08128f80(iVar1,*(undefined4 *)(iVar1 + 0x14));
    }
  }
  return in_lr;
}


