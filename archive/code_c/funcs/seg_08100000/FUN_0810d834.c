// undefined FUN_0810d834(void)
// entry 0x810d834


undefined8 FUN_0810d834(byte *param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = 1;
  for (; *param_1 < 0xfd; param_1 = param_1 + 1) {
    if (*param_1 == 0xfc) {
      uVar1 = uVar1 * 0x10000 + 0x10000 >> 0x10;
    }
  }
  return CONCAT44(in_lr,(int)(short)uVar1);
}


