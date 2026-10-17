// undefined FUN_080b0064(void)
// entry 0x80b0064


undefined4 FUN_080b0064(int param_1)

{
  uint uVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  uVar1 = *DAT_080b00ac * DAT_080b00b0 + DAT_080b00b4;
  *DAT_080b00ac = uVar1 & 0x7fffffff;
  uVar1 = (uVar1 & 0x7fffffff) >> 0x10 & 0xff;
  pcVar2 = (char *)(param_1 + 0xb8);
  if (*pcVar2 == '\0') {
    if (0x40 < uVar1) {
      if (*(int *)(param_1 + 0x58) + 0xf00 < *(int *)(*DAT_080b00b8 + 0x58) + DAT_080b00bc) {
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined1 *)(param_1 + 0xe) = 0;
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
      FUN_080b0008(param_1);
      *pcVar2 = '\x01';
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  else {
    if (uVar1 < 0x41) {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (*(int *)(param_1 + 0x58) + 0xf00 <= *(int *)(*DAT_080b0104 + 0x58) + DAT_080b0108) {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *pcVar2 = '\0';
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  FUN_080b0008(param_1);
  return in_lr;
}


