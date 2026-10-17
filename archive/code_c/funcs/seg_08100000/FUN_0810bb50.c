// undefined FUN_0810bb50(void)
// entry 0x810bb50


undefined4 FUN_0810bb50(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)(*(int *)(*(int *)(param_1 + 0x28) + DAT_0810bb98) + 0xf0);
  if (*(byte *)(param_1 + 0x12) != *pbVar1) {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,*pbVar1 | 0x9300);
    *(byte *)(param_1 + 0x12) = *pbVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


