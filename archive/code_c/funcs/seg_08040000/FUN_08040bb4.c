// undefined FUN_08040bb4(void)
// entry 0x8040bb4


undefined8 FUN_08040bb4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0xfa);
  if (cVar1 == '\x02') {
    iVar4 = 0;
  }
  else if (cVar1 == '\b') {
    *(char *)(param_1 + 0xfa) = '\x02';
    *(undefined1 *)(param_1 + 0xc3) = 0;
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_08005500(*DAT_08040c20);
    iVar3 = DAT_08040c84;
    iVar2 = DAT_08040c24;
    if (iVar4 != 0) {
      if (*(char *)(param_1 + 0xf8) == '\x02') {
        *(undefined1 *)(iVar4 + 9) = 10;
        *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar2 + 0x28);
        *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
        *(undefined1 *)(iVar4 + 0x25) = 0x10;
        *(undefined2 *)(iVar4 + 0x20) = *DAT_08040c28;
        *(undefined1 *)(iVar4 + 0x22) = *DAT_08040c2c;
        *(char *)(param_1 + 0xf8) = '\x02';
      }
      else {
        *(undefined1 *)(iVar4 + 9) = 10;
        *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar3 + 0x28);
        *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
        *(undefined1 *)(iVar4 + 0x25) = 0x10;
        *(undefined2 *)(iVar4 + 0x20) = *(undefined2 *)(DAT_08040c88 + 2);
        *(undefined1 *)(iVar4 + 0x22) = *(undefined1 *)(DAT_08040c8c + 1);
        *(undefined1 *)(param_1 + 0xf9) = 2;
      }
      *(int *)(iVar4 + 0x28) = param_1;
      *(undefined1 *)(iVar4 + 0x10) = 0;
      *(undefined1 *)(iVar4 + 0x11) = 0;
      *(short *)(param_1 + 0x15a) = (short)DAT_08040c90;
      FUN_0803a964(DAT_08040c94);
    }
  }
  return CONCAT44(in_lr,iVar4);
}


