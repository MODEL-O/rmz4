// undefined FUN_08061840(void)
// entry 0x8061840


undefined4 FUN_08061840(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08061888);
    FUN_08002b10(DAT_0806188c);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x71) < '\x05') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  }
  else {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar1 = *(int *)(param_1 + 0x60) + -0x40;
    *(int *)(param_1 + 0x60) = iVar1;
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 0x21;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


