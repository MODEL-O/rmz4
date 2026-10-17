// undefined FUN_08035410(void)
// entry 0x8035410


undefined4 FUN_08035410(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc0) == '\0') {
    pbVar3 = (byte *)(param_1 + DAT_08035428);
    bVar1 = *pbVar3;
    bVar2 = 0x10;
  }
  else {
    pbVar3 = (byte *)(param_1 + DAT_08035460);
    bVar1 = *pbVar3;
    bVar2 = 0x20;
  }
  *pbVar3 = bVar1 | bVar2;
  FUN_0801cfc8(param_1,DAT_08035464,0,2);
  if (*(char *)(param_1 + 0x154) == '\x01') {
    *(undefined1 *)(param_1 + DAT_08035468) = 2;
  }
  return in_lr;
}


