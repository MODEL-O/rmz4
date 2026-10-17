// undefined FUN_08037ce4(void)
// entry 0x8037ce4


undefined4 FUN_08037ce4(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc0) == '\0') {
    pbVar3 = (byte *)(param_1 + DAT_08037cfc);
    bVar1 = *pbVar3;
    bVar2 = 0x10;
  }
  else {
    pbVar3 = (byte *)(param_1 + DAT_08037d34);
    bVar1 = *pbVar3;
    bVar2 = 0x20;
  }
  *pbVar3 = bVar1 | bVar2;
  FUN_0801cfc8(param_1,DAT_08037d38,0,2);
  if (*(char *)(param_1 + 0x154) == '\x01') {
    *(undefined1 *)(param_1 + DAT_08037d3c) = 2;
  }
  return in_lr;
}


