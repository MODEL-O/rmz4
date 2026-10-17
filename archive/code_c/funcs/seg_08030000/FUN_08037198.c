// undefined FUN_08037198(void)
// entry 0x8037198


undefined4 FUN_08037198(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0x102);
  if (*pcVar1 == '\0') {
    FUN_0801cf00(param_1,0x1c00);
  }
  else {
    FUN_0803a3b0(param_1,0x1c00);
    if (*pcVar1 != '\x01') {
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      FUN_0801cfc8(param_1,0x500,4,1);
      *(undefined1 *)(param_1 + 0x100) = 0;
      return in_lr;
    }
    if ('\x01' < *(char *)(param_1 + 0x72)) {
      return in_lr;
    }
    FUN_0803c464(param_1,6);
  }
  *pcVar1 = *pcVar1 + '\x01';
  return in_lr;
}


