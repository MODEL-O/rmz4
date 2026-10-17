// undefined FUN_080b0008(void)
// entry 0x80b0008


undefined4 FUN_080b0008(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  cVar1 = FUN_080b022c();
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(param_1 + 0xbc) * -0x100;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
    uVar3 = 0x20;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0xbc);
    uVar3 = 0xffffffe0;
  }
  *(undefined4 *)(param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0x60) = DAT_080b0060;
  *(undefined4 *)(param_1 + 0x68) = 0x20;
  return in_lr;
}


