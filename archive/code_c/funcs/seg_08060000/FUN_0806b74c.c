// undefined FUN_0806b74c(void)
// entry 0x806b74c


undefined4 FUN_0806b74c(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806b798);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar1;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  if (*(int *)(param_1 + 0xb8) < iVar1) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    *(undefined1 *)(param_1 + 0xd) = 7;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


