// undefined FUN_080b58a4(void)
// entry 0x80b58a4


undefined4 FUN_080b58a4(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,0xb400);
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  iVar1 = (uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 0x5c);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar1 >> 4);
  iVar1 = (uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 0x60);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar1 >> 4);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


