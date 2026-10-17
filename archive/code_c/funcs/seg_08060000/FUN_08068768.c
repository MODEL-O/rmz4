// undefined FUN_08068768(void)
// entry 0x8068768


undefined4 FUN_08068768(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080687c0);
    FUN_08005784(param_1 + 0x74,DAT_080687c4);
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    uVar1 = *DAT_080687c8 * DAT_080687cc + DAT_080687d0;
    *DAT_080687c8 = uVar1 & 0x7fffffff;
    if (((uVar1 & 0x7fffffff) >> 0x10 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xd) = 3;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 0xd;
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


