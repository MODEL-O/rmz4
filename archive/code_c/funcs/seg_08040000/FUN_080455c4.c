// undefined FUN_080455c4(void)
// entry 0x80455c4


undefined4 FUN_080455c4(int param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = FUN_08005500(*DAT_08045610);
  iVar2 = DAT_0804565c;
  iVar1 = DAT_08045614;
  if (iVar4 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined1 *)(iVar4 + 9) = 0x17;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar1 + 0x5c);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *DAT_08045618;
      uVar3 = *DAT_0804561c;
    }
    else {
      *(undefined1 *)(iVar4 + 9) = 0x17;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar2 + 0x5c);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *(undefined2 *)(DAT_08045660 + 2);
      uVar3 = *(undefined1 *)(DAT_08045664 + 1);
    }
    *(undefined1 *)(iVar4 + 0x22) = uVar3;
    *(undefined4 *)(iVar4 + 0x28) = param_2;
    *(int *)(iVar4 + 0x2c) = param_1;
    *(undefined1 *)(iVar4 + 0x10) = 1;
    *(undefined1 *)(iVar4 + 0x11) = param_3;
  }
  return in_lr;
}


