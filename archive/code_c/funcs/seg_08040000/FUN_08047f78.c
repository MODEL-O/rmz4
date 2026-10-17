// undefined FUN_08047f78(void)
// entry 0x8047f78


undefined8 FUN_08047f78(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = FUN_08005500(*DAT_08047fc0);
  iVar2 = DAT_0804800c;
  iVar1 = DAT_08047fc4;
  if (iVar4 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined1 *)(iVar4 + 9) = 0x1e;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar1 + 0x78);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *DAT_08047fc8;
      uVar3 = *DAT_08047fcc;
    }
    else {
      *(undefined1 *)(iVar4 + 9) = 0x1e;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar2 + 0x78);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *(undefined2 *)(DAT_08048010 + 2);
      uVar3 = *(undefined1 *)(DAT_08048014 + 1);
    }
    *(undefined1 *)(iVar4 + 0x22) = uVar3;
    *(int *)(iVar4 + 0x28) = param_1;
    *(undefined1 *)(iVar4 + 0x10) = 0;
    *(undefined1 *)(iVar4 + 0x11) = param_2;
  }
  return CONCAT44(in_lr,iVar4);
}


