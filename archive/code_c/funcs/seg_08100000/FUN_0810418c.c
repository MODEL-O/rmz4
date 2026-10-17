// undefined FUN_0810418c(void)
// entry 0x810418c


undefined4 FUN_0810418c(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 0xb4 + uVar1 * 4) = 0;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 4);
  uVar1 = 0;
  do {
    *(undefined4 *)(uVar1 * 4 + param_1 + 0x5c) = 0;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 4);
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 3;
  return in_lr;
}


