// undefined FUN_0801cdbc(void)
// entry 0x801cdbc


undefined4 FUN_0801cdbc(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  FUN_080034a4(param_1 + 0x6c,*DAT_0801ce4c);
  FUN_08002d94(param_1 + 0x34,*DAT_0801ce50,param_1 + 0x54);
  *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 10) >> 4 & 1;
  bVar2 = (*(byte *)(param_1 + 10) >> 4 & 1) << 4;
  bVar1 = *(byte *)(param_1 + 0x4a);
  *(byte *)(param_1 + 0x4a) = bVar1 & 0xef | bVar2;
  *(byte *)(param_1 + 0x4d) = *(byte *)(param_1 + 10) >> 5 & 1;
  *(byte *)(param_1 + 0x4a) = bVar1 & 0xcf | bVar2 | (*(byte *)(param_1 + 10) >> 5 & 1) << 5;
  *(undefined1 *)(param_1 + 0x1e) = 0xff;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0x100;
  *(undefined2 *)(param_1 + 0x52) = 0x100;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x48;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xd9 | 1;
  return in_lr;
}


