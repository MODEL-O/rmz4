// undefined FUN_08051a38(void)
// entry 0x8051a38


undefined4 FUN_08051a38(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_08051aa0);
    FUN_0801cf00(param_1,DAT_08051aa4);
    FUN_08002b10(0xe6);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  uVar2 = *DAT_08051aa8 * DAT_08051aac + DAT_08051ab0;
  *DAT_08051aa8 = uVar2 & 0x7fffffff;
  uVar2 = (uVar2 & 0x7fffffff) >> 0x10 & 0x1f;
  if (*(short *)(param_1 + 0xa4) < 0x21) {
    if (uVar2 < 8) {
      uVar1 = 2;
    }
    else {
      if (uVar2 < 0x16) goto LAB_08051ac4;
      uVar1 = 4;
    }
  }
  else {
    if (0xf < uVar2) {
LAB_08051ac4:
      *(undefined1 *)(param_1 + 0xd6) = 3;
      goto LAB_08051ad4;
    }
    uVar1 = 2;
  }
  *(undefined1 *)(param_1 + 0xd6) = uVar1;
LAB_08051ad4:
  *(undefined1 *)(param_1 + 0xd) = 0xe;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


