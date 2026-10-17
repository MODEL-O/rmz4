// undefined FUN_08037938(void)
// entry 0x8037938


undefined4 FUN_08037938(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0x102);
  if (*pcVar1 == '\0') {
    *(byte *)(param_1 + DAT_08037998) = *(byte *)(param_1 + DAT_08037998) & 0xbf;
    FUN_0803a2b8(param_1);
    *pcVar1 = *pcVar1 + '\x01';
  }
  FUN_0803a3b0(param_1,0x2c00);
  FUN_0803a3f0(param_1,0x2c00);
  if ((*(byte *)(param_1 + DAT_08037998) & 0x40) != 0) {
    *(undefined1 *)(param_1 + DAT_0803799c) = 4;
    *pcVar1 = '\0';
  }
  return in_lr;
}


