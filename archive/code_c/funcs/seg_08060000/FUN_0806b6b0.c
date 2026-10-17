// undefined FUN_0806b6b0(void)
// entry 0x806b6b0


undefined4 FUN_0806b6b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806b704);
    FUN_08002b10(0xc6);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ('\x01' < *(char *)(param_1 + 0x71)) {
      FUN_08005784(param_1 + 0x74,DAT_0806b708);
      uVar1 = DAT_0806b71c;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        uVar1 = 0x340;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar1;
      *(undefined4 *)(param_1 + 0x60) = DAT_0806b720;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0 < iVar2) {
      *(undefined1 *)(param_1 + 0xd) = 6;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


