// undefined FUN_08080270(void)
// entry 0x8080270


undefined4 FUN_08080270(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080802c4);
    *(undefined1 *)(param_1 + 0xc2) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar1 = *(int *)(param_1 + 0x5c) + -0x10;
  *(int *)(param_1 + 0x5c) = iVar1;
  if (iVar1 < DAT_080802c8) {
    *(int *)(param_1 + 0x5c) = DAT_080802c8;
  }
  FUN_080806b0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


