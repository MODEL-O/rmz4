// undefined FUN_080d7258(void)
// entry 0x80d7258


undefined4 FUN_080d7258(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_080d72dc;
  iVar3 = 0;
  if ((param_4 & 0xff) != 0) {
    do {
      iVar2 = FUN_08005500(*DAT_080d72e0);
      if (iVar2 != 0) {
        *(undefined1 *)(iVar2 + 0x25) = 1;
        *(undefined1 *)(iVar2 + 9) = 0x17;
        *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x5c);
        *(undefined2 *)(iVar2 + 0x20) = 0;
        *(undefined1 *)(iVar2 + 0x22) = 0;
        *(undefined1 *)(iVar2 + 0x10) = 0;
        *(char *)(iVar2 + 0x11) = (char)iVar3;
        *(undefined4 *)(iVar2 + 0x28) = param_1;
        *(undefined4 *)(iVar2 + 0x74) = param_3;
        *(undefined4 *)(iVar2 + 0x54) = *param_2;
        *(undefined4 *)(iVar2 + 0x58) = param_2[1];
        *(undefined1 *)(iVar2 + 0x78) = 1;
        *(undefined1 *)(iVar2 + 0x79) = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(param_4 & 0xff));
  }
  return in_lr;
}


