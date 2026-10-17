// undefined FUN_08001390(void)
// entry 0x8001390


void FUN_08001390(int param_1)

{
  char *pcVar1;
  pcVar1 = (char *)(param_1 * 0x18 + 0x03002a68);
  if (*pcVar1 != '\x01') {
    *pcVar1 = '\x01';
  }
  return;
}


