// undefined FUN_0804bc88(void)
// entry 0x804bc88


undefined4 FUN_0804bc88(int param_1,int param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  iVar4 = FUN_08005500(*DAT_0804bcd8);
  iVar2 = DAT_0804bd28;
  iVar1 = DAT_0804bcdc;
  if (iVar4 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\0') {
      *(undefined1 *)(iVar4 + 9) = 0x2b;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar1 + 0xac);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *DAT_0804bce0;
      uVar3 = *DAT_0804bce4;
    }
    else {
      *(undefined1 *)(iVar4 + 9) = 0x2b;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar2 + 0xac);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *(undefined2 *)(DAT_0804bd2c + 2);
      uVar3 = *(undefined1 *)(DAT_0804bd30 + 1);
    }
    *(undefined1 *)(iVar4 + 0x22) = uVar3;
    *(int *)(iVar4 + 0x28) = param_1;
    uVar5 = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    *(undefined4 *)(iVar4 + 0x58) = uVar5;
    *(undefined1 *)(iVar4 + 0x10) = param_3;
    *(undefined1 *)(iVar4 + 0x11) = param_4;
  }
  return in_lr;
}


