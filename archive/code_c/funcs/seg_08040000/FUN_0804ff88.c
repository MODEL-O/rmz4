// undefined FUN_0804ff88(void)
// entry 0x804ff88


undefined8 FUN_0804ff88(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = FUN_08005500(*DAT_0804ffd4);
  iVar2 = DAT_08050020;
  iVar1 = DAT_0804ffd8;
  if (iVar4 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined1 *)(iVar4 + 9) = 0x3c;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar1 + 0xf0);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *DAT_0804ffdc;
      uVar3 = *DAT_0804ffe0;
    }
    else {
      *(undefined1 *)(iVar4 + 9) = 0x3c;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar2 + 0xf0);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *(undefined2 *)(DAT_08050024 + 2);
      uVar3 = *(undefined1 *)(DAT_08050028 + 1);
    }
    *(undefined1 *)(iVar4 + 0x22) = uVar3;
    *(int *)(iVar4 + 0x28) = param_1;
    *(undefined1 *)(iVar4 + 0x10) = param_2;
    *(undefined1 *)(iVar4 + 0x11) = 0;
  }
  return CONCAT44(in_lr,iVar4);
}


