// undefined FUN_0804d328(void)
// entry 0x804d328


undefined8 FUN_0804d328(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = FUN_08005500(*DAT_0804d374);
  iVar2 = DAT_0804d3c0;
  iVar1 = DAT_0804d378;
  if (iVar4 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined1 *)(iVar4 + 9) = 0x30;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar1 + 0xc0);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *DAT_0804d37c;
      uVar3 = *DAT_0804d380;
    }
    else {
      *(undefined1 *)(iVar4 + 9) = 0x30;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar2 + 0xc0);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *(undefined2 *)(DAT_0804d3c4 + 2);
      uVar3 = *(undefined1 *)(DAT_0804d3c8 + 1);
    }
    *(undefined1 *)(iVar4 + 0x22) = uVar3;
    *(int *)(iVar4 + 0x28) = param_1;
    *(undefined1 *)(iVar4 + 0x10) = param_2;
    *(undefined1 *)(iVar4 + 0x11) = 0;
  }
  return CONCAT44(in_lr,iVar4);
}


