// undefined FUN_08049694(void)
// entry 0x8049694


undefined8 FUN_08049694(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = FUN_08005500(*DAT_080496e0);
  iVar2 = DAT_0804972c;
  iVar1 = DAT_080496e4;
  if (iVar4 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined1 *)(iVar4 + 9) = 0x23;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar1 + 0x8c);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *DAT_080496e8;
      uVar3 = *DAT_080496ec;
    }
    else {
      *(undefined1 *)(iVar4 + 9) = 0x23;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar2 + 0x8c);
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined1 *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = *(undefined2 *)(DAT_08049730 + 2);
      uVar3 = *(undefined1 *)(DAT_08049734 + 1);
    }
    *(undefined1 *)(iVar4 + 0x22) = uVar3;
    *(int *)(iVar4 + 0x28) = param_1;
    *(undefined1 *)(iVar4 + 0x10) = 0;
    *(undefined1 *)(iVar4 + 0x11) = param_2;
  }
  return CONCAT44(in_lr,iVar4);
}


