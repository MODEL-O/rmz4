// undefined FUN_08038b38(void)
// entry 0x8038b38


undefined4 FUN_08038b38(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  FUN_0802f0b4();
  if (*(char *)(param_1 + 0xde) == '\0') {
    *(undefined2 *)(param_1 + 0x25c) = 1;
    iVar1 = DAT_08038b7c;
    *(undefined2 *)(param_1 + DAT_08038b7c) = 0x200;
    *(undefined2 *)(param_1 + 0x260) = 2;
    *(undefined2 *)(param_1 + DAT_08038b80) = 0x100;
    iVar1 = iVar1 + 6;
  }
  else {
    if (*(char *)(param_1 + 0xde) != '\x01') {
      *(undefined2 *)(param_1 + 0x25c) = *(undefined2 *)(param_1 + 0xd4);
      *(undefined2 *)(param_1 + 0x25e) = *(undefined2 *)(param_1 + 0xd6);
      *(undefined2 *)(param_1 + 0x260) = *(undefined2 *)(param_1 + 0xd8);
      *(undefined2 *)(param_1 + 0x262) = *(undefined2 *)(param_1 + 0xda);
      *(undefined2 *)(param_1 + 0x264) = *(undefined2 *)(param_1 + 0xdc);
      goto LAB_08038be8;
    }
    *(undefined2 *)(param_1 + 0x25c) = 1;
    *(undefined2 *)(param_1 + DAT_08038bb8) = 0x100;
    *(undefined2 *)(param_1 + 0x260) = 2;
    *(undefined2 *)(param_1 + 0x262) = 0x200;
    iVar1 = 0x264;
  }
  *(undefined2 *)(param_1 + iVar1) = 4;
LAB_08038be8:
  *(undefined4 *)(param_1 + 600) = 0;
  iVar1 = DAT_08038c30;
  *(undefined1 *)(param_1 + DAT_08038c30) = 0;
  *(undefined1 *)(param_1 + 0x266) = 0;
  *(undefined1 *)(param_1 + iVar1 + -0x10) = 0;
  *(undefined1 *)(param_1 + 0x269) = 0;
  *(undefined1 *)(param_1 + iVar1 + -0xd) = 0;
  *(undefined1 *)(param_1 + 0x26c) = 0;
  *(undefined1 *)(param_1 + iVar1 + -10) = 0;
  *(undefined1 *)(param_1 + 0x26e) = 0;
  *(undefined1 *)(param_1 + iVar1 + -8) = 0;
  return in_lr;
}


