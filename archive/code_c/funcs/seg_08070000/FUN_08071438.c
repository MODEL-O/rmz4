// undefined FUN_08071438(void)
// entry 0x8071438


undefined4 FUN_08071438(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(byte *)(param_1 + 0xc2) - 1;
  if (iVar2 < 1) {
    iVar2 = 0;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    cVar1 = '\x01';
  }
  *(char *)(param_1 + 0xe) = cVar1;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(char *)(param_1 + 0xc2) = (char)iVar2;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08071470));
  return in_lr;
}


