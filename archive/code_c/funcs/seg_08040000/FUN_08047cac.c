// undefined FUN_08047cac(void)
// entry 0x8047cac


undefined8 FUN_08047cac(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = FUN_08005500(*DAT_08047cf4);
  iVar2 = DAT_08047d40;
  iVar1 = DAT_08047cf8;
  if (iVar4 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined1 *)(iVar4 + 9) = 0x1d;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar1 + 0x74);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *DAT_08047cfc;
      uVar3 = *DAT_08047d00;
    }
    else {
      *(undefined1 *)(iVar4 + 9) = 0x1d;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar2 + 0x74);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *(undefined2 *)(DAT_08047d44 + 2);
      uVar3 = *(undefined1 *)(DAT_08047d48 + 1);
    }
    *(undefined1 *)(iVar4 + 0x22) = uVar3;
    *(int *)(iVar4 + 0x28) = param_1;
    *(undefined1 *)(iVar4 + 0x10) = 0;
    *(undefined1 *)(iVar4 + 0x11) = param_2;
  }
  return CONCAT44(in_lr,iVar4);
}


