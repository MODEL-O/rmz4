// undefined FUN_080428c0(void)
// entry 0x80428c0


undefined8 FUN_080428c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = FUN_08005500(*DAT_08042908);
  iVar2 = DAT_08042958;
  iVar1 = DAT_0804290c;
  if (iVar4 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined1 *)(iVar4 + 9) = 0xe;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar1 + 0x38);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *DAT_08042910;
      uVar3 = *DAT_08042914;
    }
    else {
      *(undefined1 *)(iVar4 + 9) = 0xe;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar2 + 0x38);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *(undefined2 *)(DAT_0804295c + 2);
      uVar3 = *(undefined1 *)(DAT_08042960 + 1);
    }
    *(undefined1 *)(iVar4 + 0x22) = uVar3;
    *(int *)(iVar4 + 0x28) = param_1;
    *(undefined4 *)(iVar4 + 0x2c) = param_2;
    *(undefined1 *)(iVar4 + 0x10) = 1;
    *(undefined1 *)(iVar4 + 0x11) = 0;
  }
  return CONCAT44(in_lr,iVar4);
}


