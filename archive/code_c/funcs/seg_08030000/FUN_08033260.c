// undefined FUN_08033260(void)
// entry 0x8033260


undefined4 FUN_08033260(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      if (*DAT_080332b8 != '\0') {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xe) = 4;
      *(undefined1 *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_08033284);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}


