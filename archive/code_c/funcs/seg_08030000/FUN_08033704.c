// undefined FUN_08033704(void)
// entry 0x8033704


undefined4 FUN_08033704(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  pbVar3 = (byte *)(param_1 + DAT_08033738);
  if ((*pbVar3 & 1) != 0) {
    *(undefined1 *)(param_1 + DAT_0803373c) = 4;
  }
  bVar1 = *pbVar3;
  *pbVar3 = bVar1 | 10;
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    bVar2 = 0x10;
  }
  else {
    bVar2 = 0x20;
  }
  *pbVar3 = bVar1 | 10 | bVar2;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + DAT_08033764) * 4 + DAT_08033760));
  return in_lr;
}


