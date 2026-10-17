// undefined FUN_080ca468(void)
// entry 0x80ca468


undefined4 FUN_080ca468(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar2 + 0xe) == '\0') {
    *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
    *(undefined4 *)(iVar2 + 0x8c) = 0;
    *(undefined4 *)(iVar2 + 0x90) = 0;
    *(undefined1 *)(iVar2 + 0x94) = 0;
    *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
    piVar1 = (int *)((uint)*(byte *)(iVar2 + 9) * 4 + DAT_080ca4ac);
    *(undefined4 *)(iVar2 + 0xc) = 3;
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
  }
  else {
    *(undefined1 *)(iVar2 + 0xb5) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return in_lr;
}


