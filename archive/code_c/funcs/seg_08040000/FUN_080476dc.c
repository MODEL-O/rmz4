// undefined FUN_080476dc(void)
// entry 0x80476dc


undefined8 FUN_080476dc(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = FUN_08005500(*DAT_08047724);
  iVar2 = DAT_08047770;
  iVar1 = DAT_08047728;
  if (iVar4 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined1 *)(iVar4 + 9) = 0x1c;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar1 + 0x70);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *DAT_0804772c;
      uVar3 = *DAT_08047730;
    }
    else {
      *(undefined1 *)(iVar4 + 9) = 0x1c;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar2 + 0x70);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *(undefined2 *)(DAT_08047774 + 2);
      uVar3 = *(undefined1 *)(DAT_08047778 + 1);
    }
    *(undefined1 *)(iVar4 + 0x22) = uVar3;
    *(int *)(iVar4 + 0x28) = param_1;
    *(undefined1 *)(iVar4 + 0x10) = 0;
    *(undefined1 *)(iVar4 + 0x11) = param_2;
  }
  return CONCAT44(in_lr,iVar4);
}


