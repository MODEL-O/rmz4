// undefined FUN_0806cf8c(void)
// entry 0x806cf8c


undefined4 FUN_0806cf8c(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806cfdc);
    FUN_08002b10(0xcf);
    FUN_08005784(param_1 + 0x74,DAT_0806cfe0);
    if (*(int *)(*DAT_0806cfe4 + 0x54) < *(int *)(param_1 + 0x54)) {
      *(undefined4 *)(param_1 + 0x5c) = 0x1c0;
      *(undefined1 *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = DAT_0806d07c;
      *(undefined1 *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    *(undefined4 *)(param_1 + 0x60) = DAT_0806d080;
    if (*(char *)(param_1 + 0xd8) != '\0') {
      FUN_08002b5c(200);
      *(char *)(param_1 + 0xd8) = '\0';
    }
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar1;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    if (*(int *)(param_1 + 0xb8) < iVar1) {
      FUN_0801cf00(param_1,DAT_0806d084);
      FUN_08002b10(0xd3);
      FUN_0801cff0(param_1);
      FUN_08005784(param_1 + 0x74,DAT_0806d088);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


