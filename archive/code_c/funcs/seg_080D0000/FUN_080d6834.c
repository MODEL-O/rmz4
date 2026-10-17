// undefined FUN_080d6834(void)
// entry 0x80d6834


undefined4 FUN_080d6834(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_080d6890;
  iVar3 = 0;
  do {
    iVar2 = FUN_08005500(*DAT_080d6894);
    if (iVar2 != 0) {
      *(undefined1 *)(iVar2 + 0x25) = 1;
      *(undefined1 *)(iVar2 + 9) = 0x15;
      *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x54);
      *(undefined2 *)(iVar2 + 0x20) = 0;
      *(undefined1 *)(iVar2 + 0x22) = 0;
      *(undefined1 *)(iVar2 + 0x10) = 2;
      *(char *)(iVar2 + 0x11) = (char)iVar3;
      *(undefined4 *)(iVar2 + 0x28) = param_1;
      *(undefined4 *)(iVar2 + 0x54) = *param_2;
      *(undefined4 *)(iVar2 + 0x58) = param_2[1];
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return in_lr;
}


