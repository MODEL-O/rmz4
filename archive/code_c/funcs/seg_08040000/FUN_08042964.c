// undefined FUN_08042964(void)
// entry 0x8042964


undefined8 FUN_08042964(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = FUN_08005500(*DAT_080429b0);
  iVar2 = DAT_080429fc;
  iVar1 = DAT_080429b4;
  if (iVar4 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined1 *)(iVar4 + 9) = 0xe;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar1 + 0x38);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *DAT_080429b8;
      uVar3 = *DAT_080429bc;
    }
    else {
      *(undefined1 *)(iVar4 + 9) = 0xe;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar2 + 0x38);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *(undefined2 *)(DAT_08042a00 + 2);
      uVar3 = *(undefined1 *)(DAT_08042a04 + 1);
    }
    *(undefined1 *)(iVar4 + 0x22) = uVar3;
    *(undefined4 *)(iVar4 + 0x28) = param_2;
    *(undefined4 *)(iVar4 + 0x2c) = param_3;
    *(undefined1 *)(iVar4 + 0x10) = 2;
    *(undefined1 *)(iVar4 + 0x11) = param_4;
  }
  return CONCAT44(in_lr,iVar4);
}


