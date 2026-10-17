// undefined FUN_08034bf4(void)
// entry 0x8034bf4


undefined4 FUN_08034bf4(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc0) == '\0') {
    pbVar3 = (byte *)(param_1 + DAT_08034c0c);
    bVar1 = *pbVar3;
    bVar2 = 0x10;
  }
  else {
    pbVar3 = (byte *)(param_1 + DAT_08034c54);
    bVar1 = *pbVar3;
    bVar2 = 0x20;
  }
  *pbVar3 = bVar1 | bVar2;
  uVar4 = (uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70));
  if (uVar4 != 0x900) {
    if (uVar4 == DAT_08034c58) {
      FUN_0801cfc8(param_1,0x900,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    }
    else {
      FUN_0801cfc8(param_1,0x900,0,1);
    }
  }
  if (*(char *)(param_1 + 0x154) == '\x01') {
    FUN_0801cfc8(param_1,DAT_08034ca0,(short)*(char *)(param_1 + 0x71),
                 (short)*(char *)(param_1 + 0x72));
    *(undefined1 *)(param_1 + DAT_08034ca4) = 2;
  }
  return in_lr;
}


