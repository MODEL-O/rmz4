// undefined FUN_08060d6c(void)
// entry 0x8060d6c


undefined4 FUN_08060d6c(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08060db0);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar1;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  if (*(int *)(param_1 + 0xb8) < iVar1) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    *(undefined1 *)(param_1 + 0xd) = 0x17;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


