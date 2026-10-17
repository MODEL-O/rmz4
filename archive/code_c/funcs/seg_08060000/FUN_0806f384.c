// undefined FUN_0806f384(void)
// entry 0x806f384


undefined4 FUN_0806f384(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  bVar2 = bVar1 & 1;
  FUN_0801cc9c();
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 0x4c) = bVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar2 << 4;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  return in_lr;
}


