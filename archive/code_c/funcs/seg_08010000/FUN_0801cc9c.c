// undefined FUN_0801cc9c(void)
// entry 0x801cc9c


undefined4 FUN_0801cc9c(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  FUN_080034a4(param_1 + 0x6c,*DAT_0801cd20);
  FUN_08002cb8(param_1 + 0x34,*DAT_0801cd24,param_1 + 0x54);
  *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 10) >> 4 & 1;
  bVar2 = (*(byte *)(param_1 + 10) >> 4 & 1) << 4;
  bVar1 = *(byte *)(param_1 + 0x4a);
  *(byte *)(param_1 + 0x4a) = bVar1 & 0xef | bVar2;
  *(byte *)(param_1 + 0x4d) = *(byte *)(param_1 + 10) >> 5 & 1;
  *(byte *)(param_1 + 0x4a) = bVar1 & 0xcf | bVar2 | (*(byte *)(param_1 + 10) >> 5 & 1) << 5;
  *(undefined1 *)(param_1 + 0x1e) = 0xff;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xbf | 8;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xd8;
  return in_lr;
}


