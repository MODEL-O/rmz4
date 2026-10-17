// undefined FUN_0806ced8(void)
// entry 0x806ced8


undefined4 FUN_0806ced8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806cf04);
    FUN_08002b10(0xd3);
    FUN_08005784(param_1 + 0x74,DAT_0806cf08);
    *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0xdd);
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  else {
    if ((*(char *)(param_1 + 0xe) != '\x01') || (*(char *)(param_1 + 0x71) < '\x02'))
    goto LAB_0806cf2e;
    FUN_08005784(param_1 + 0x74,DAT_0806cf60);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0806cf2e:
  FUN_0801cff0(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xdc) + -1;
    *(char *)(param_1 + 0xdc) = cVar1;
    if (cVar1 != '\0') {
      FUN_0801cf00(param_1,DAT_0806cf7c);
      FUN_0801cff0(param_1);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0xd) = 3;
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 0x1e;
  }
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


