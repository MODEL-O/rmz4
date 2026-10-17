// undefined FUN_0810db70(void)
// entry 0x810db70


undefined4 FUN_0810db70(uint param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  char acStack_24 [16];
  
  acStack_24[param_4 * 0x10000 >> 0x10] = '\0';
  for (iVar1 = param_4 * 0x10000 + DAT_0810dbd8; -1 < iVar1;
      iVar1 = ((iVar1 >> 0x10) + -1) * 0x10000) {
    uVar2 = (param_1 & 0xf) + 0x30;
    acStack_24[iVar1 >> 0x10] = (char)uVar2;
    if (0x39 < uVar2) {
      acStack_24[iVar1 >> 0x10] = (char)(param_1 & 0xf) + '7';
    }
    param_1 = param_1 >> 4;
  }
  FUN_0810da2c(acStack_24,param_2,param_3);
  return in_lr;
}


