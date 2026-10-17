// undefined FUN_0803461c(void)
// entry 0x803461c


undefined4 FUN_0803461c(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  *(byte *)(param_1 + DAT_08034658) = *(byte *)(param_1 + DAT_08034658) | 6;
  if ((byte)(*(char *)(param_1 + DAT_0803465c) - 1U) < 3) {
    pbVar1 = (byte *)(param_1 + DAT_0803465c + 0x56);
    if (*pbVar1 == 4) {
      *(char *)(param_1 + DAT_0803465c) = '\x04';
      *(undefined1 *)(param_1 + 0x102) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x150) = *(undefined1 *)((uint)*pbVar1 + DAT_08034688);
    }
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + DAT_08034690) * 4 + DAT_0803468c));
  return in_lr;
}


