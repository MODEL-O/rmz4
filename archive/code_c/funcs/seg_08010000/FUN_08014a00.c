// undefined FUN_08014a00(void)
// entry 0x8014a00


undefined4 FUN_08014a00(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_08014a44;
  *(undefined1 *)(DAT_08014a44 + DAT_08014a48) = 0;
  iVar2 = DAT_08014a4c;
  *(undefined2 *)(iVar1 + DAT_08014a4c) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 2) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 3) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 4) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 5) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 6) = 0;
  *(undefined2 *)(iVar1 + DAT_08014a50) = 0;
  *(undefined2 *)(iVar1 + iVar2 + 10) = 0;
  return in_lr;
}


