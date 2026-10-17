// undefined FUN_080d7514(void)
// entry 0x80d7514


undefined4
FUN_080d7514(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4,
            undefined1 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = 0;
  if ((param_4 & 0xff) != 0) {
    do {
      iVar1 = FUN_08005500(*DAT_080d75a0);
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 0x25) = 1;
        *(undefined1 *)(iVar1 + 9) = 0x17;
        *(undefined4 *)(iVar1 + 0x14) = **(undefined4 **)(DAT_080d75a4 + 0x5c);
        *(undefined2 *)(iVar1 + 0x20) = 0;
        *(undefined1 *)(iVar1 + 0x22) = 0;
        *(undefined1 *)(iVar1 + 0x10) = 1;
        *(char *)(iVar1 + 0x11) = (char)iVar2;
        *(undefined4 *)(iVar1 + 0x28) = param_1;
        *(undefined4 *)(iVar1 + 0x74) = param_3;
        *(undefined4 *)(iVar1 + 0x54) = *param_2;
        *(undefined4 *)(iVar1 + 0x58) = param_2[1];
        *(undefined1 *)(iVar1 + 0x78) = 1;
        *(undefined1 *)(iVar1 + 0x79) = 1;
        *(undefined1 *)(iVar1 + 0x22) = param_5;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(param_4 & 0xff));
  }
  return in_lr;
}


