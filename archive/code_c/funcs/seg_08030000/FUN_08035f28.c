// undefined FUN_08035f28(void)
// entry 0x8035f28


undefined4 FUN_08035f28(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 + 0x102);
  if (*pcVar1 == '\0') {
    FUN_0801cfc8(param_1,0x1900,7,1);
    *pcVar1 = *pcVar1 + '\x01';
  }
  FUN_0803a3b0(param_1,0x1900);
  if ((*(uint *)(param_1 + 600) & 0x80) == 0) {
    *(undefined1 *)(param_1 + 0x101) = 3;
    *pcVar1 = '\0';
  }
  return in_lr;
}


