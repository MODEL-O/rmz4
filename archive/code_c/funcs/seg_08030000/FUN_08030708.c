// undefined FUN_08030708(void)
// entry 0x8030708


undefined4 FUN_08030708(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xe) == '\0') || ((*(uint *)(param_1 + 600) & 1) == 0)) {
    if (*(char *)(param_1 + 0x1ce) == '\0') {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x1cc) != '\0') {
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  else {
    if ((*(uint *)(param_1 + 600) & 0x80) == 0) {
      *(byte *)(param_1 + 0x142) = *(byte *)(param_1 + 0x142) & 0xfd;
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 4;
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  *(undefined1 *)(param_1 + 0xe) = 2;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return in_lr;
}


