// undefined FUN_0806f3d4(void)
// entry 0x806f3d4


undefined4 FUN_0806f3d4(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  bVar2 = bVar1 & 1;
  FUN_0801cdbc();
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
  *(undefined2 *)(param_1 + 0x50) = 0xea;
  *(undefined2 *)(param_1 + 0x52) = 0xea;
  return in_lr;
}


