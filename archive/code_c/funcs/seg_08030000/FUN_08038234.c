// undefined FUN_08038234(void)
// entry 0x8038234


undefined4 FUN_08038234(int param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 2;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0xff;
  *(undefined1 *)(param_1 + 0x11) = 0xff;
  *(undefined1 *)(param_1 + 0x12) = 0xff;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  do {
    pcVar1 = (char *)(param_1 + 8 + uVar2);
    if (*pcVar1 != -1) {
      *pcVar1 = '\0';
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 4);
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0x40;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0xff;
  return in_lr;
}


