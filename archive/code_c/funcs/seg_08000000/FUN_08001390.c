// undefined FUN_08001390(void)
// entry 0x8001390


undefined4 FUN_08001390(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  
  pcVar1 = (char *)(param_1 * 0x18 + DAT_080013ac);
  if (*pcVar1 != '\x01') {
    *pcVar1 = '\x01';
  }
  return in_lr;
}


