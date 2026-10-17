// undefined FUN_0806bff8(void)
// entry 0x806bff8


undefined4 FUN_0806bff8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar1 = 0xffffff40;
    }
    else {
      uVar1 = 0xc0;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    *(undefined4 *)(param_1 + 0x60) = DAT_0806c05c;
    FUN_08005784(param_1 + 0x74,DAT_0806c060);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0 < iVar2) {
    *(undefined1 *)(param_1 + 0xd) = 0x11;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


