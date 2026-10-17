// undefined FUN_08037e40(void)
// entry 0x8037e40


undefined4 FUN_08037e40(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  pbVar3 = (byte *)(param_1 + DAT_08037e70);
  if ((*pbVar3 & 1) != 0) {
    *(undefined1 *)(param_1 + DAT_08037e74) = 2;
  }
  bVar1 = *pbVar3;
  *pbVar3 = bVar1 | 8;
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    bVar2 = 0x10;
  }
  else {
    bVar2 = 0x20;
  }
  *pbVar3 = bVar1 | 8 | bVar2;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + DAT_08037e9c) * 4 + DAT_08037e98));
  return in_lr;
}


