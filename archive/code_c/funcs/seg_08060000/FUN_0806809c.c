// undefined FUN_0806809c(void)
// entry 0x806809c


undefined4 FUN_0806809c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080680f0);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ('\x04' < *(char *)(param_1 + 0x71)) {
      iVar1 = *(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x5c) = iVar1;
      uVar2 = FUN_08128fb8(iVar1,0x28);
      *(undefined4 *)(param_1 + 0x5c) = uVar2;
      *(undefined4 *)(param_1 + 0x60) = DAT_080680f4;
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
  }
  else {
    if ((*(char *)(param_1 + 0xf) == '\x01') && ('\x05' < *(char *)(param_1 + 0x71))) {
      FUN_08005784(param_1 + 0x74,DAT_08068144);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar1 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar1;
    if (iVar1 == 0x400) {
      *(undefined1 *)(param_1 + 0xd) = 0x1b;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


