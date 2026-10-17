// undefined FUN_08037f8c(void)
// entry 0x8037f8c


undefined4 FUN_08037f8c(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0x102);
  if (*pcVar1 == '\0') {
    FUN_0801cf00(param_1,DAT_08037fb4);
    FUN_0803c464(param_1,0xb);
    *pcVar1 = *pcVar1 + '\x01';
  }
  else if ((*(byte *)(param_1 + DAT_08037fe0) & 1) == 0) {
    FUN_0803a3b0(param_1,DAT_08038018);
  }
  else {
    FUN_0801cfc8(param_1,DAT_08037fe4,*(undefined1 *)(param_1 + 0x16e),
                 *(undefined1 *)(param_1 + DAT_08037fe8));
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0x100) = 0;
    FUN_0801cf00(param_1,DAT_0803801c);
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  else {
    *(undefined1 *)(param_1 + DAT_08038030) = 4;
  }
  return in_lr;
}


