// undefined FUN_080d621c(void)
// entry 0x80d621c


undefined4 FUN_080d621c(int param_1,undefined4 *param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_080d6294;
  iVar3 = 0;
  do {
    iVar2 = FUN_08005500(*DAT_080d6298);
    if (iVar2 != 0) {
      *(undefined1 *)(iVar2 + 0x25) = 1;
      *(undefined1 *)(iVar2 + 9) = 0x14;
      *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x50);
      *(undefined2 *)(iVar2 + 0x20) = 0;
      *(undefined1 *)(iVar2 + 0x22) = 0;
      *(undefined1 *)(iVar2 + 0x10) = 1;
      *(char *)(iVar2 + 0x11) = (char)iVar3;
      *(undefined1 *)(iVar2 + 0x78) = param_3;
      *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(param_1 + 0xb4);
      *(int *)(iVar2 + 0x28) = param_1;
      *(undefined4 *)(iVar2 + 0x54) = *param_2;
      *(undefined4 *)(iVar2 + 0x58) = param_2[1];
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  return in_lr;
}


