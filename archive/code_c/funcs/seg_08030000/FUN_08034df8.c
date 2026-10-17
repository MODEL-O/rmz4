// undefined FUN_08034df8(void)
// entry 0x8034df8


undefined4 FUN_08034df8(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  pbVar3 = (byte *)(param_1 + DAT_08034e1c);
  if ((*pbVar3 & 1) == 0) {
    bVar2 = *pbVar3 | 8;
    *pbVar3 = bVar2;
    if (*(char *)(param_1 + 0xc0) == '\x01') {
      bVar1 = 0x10;
    }
    else {
      bVar1 = 0x20;
    }
    *pbVar3 = bVar2 | bVar1;
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + DAT_08034e54) * 4 + DAT_08034e50)
                );
  }
  else {
    *(undefined1 *)(param_1 + 0xe) = 0;
    FUN_08033704(param_1);
  }
  return in_lr;
}


