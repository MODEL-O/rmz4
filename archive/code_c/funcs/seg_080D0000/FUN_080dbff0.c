// undefined FUN_080dbff0(void)
// entry 0x80dbff0


undefined4 FUN_080dbff0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  puVar1 = DAT_080dc074;
  iVar3 = 0;
  if ((param_4 & 0xff) != 0) {
    do {
      iVar2 = FUN_08005500(*DAT_080dc078);
      if (iVar2 != 0) {
        *(undefined1 *)(iVar2 + 0x25) = 1;
        *(undefined1 *)(iVar2 + 9) = 0x2b;
        *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)*puVar1;
        *(undefined2 *)(iVar2 + 0x20) = 0;
        *(undefined1 *)(iVar2 + 0x22) = 0;
        *(undefined1 *)(iVar2 + 0x10) = 1;
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


