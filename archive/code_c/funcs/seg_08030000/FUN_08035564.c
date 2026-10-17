// undefined FUN_08035564(void)
// entry 0x8035564


undefined4 FUN_08035564(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  pbVar3 = (byte *)(param_1 + DAT_08035588);
  if ((*pbVar3 & 1) == 0) {
    bVar2 = *pbVar3 | 10;
    *pbVar3 = bVar2;
    if (*(char *)(param_1 + 0xc0) == '\x01') {
      bVar1 = 0x10;
    }
    else {
      bVar1 = 0x20;
    }
    *pbVar3 = bVar2 | bVar1;
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + DAT_080355c4) * 4 + DAT_080355c0)
                );
  }
  else {
    *(undefined1 *)(param_1 + 0xe) = 0;
    FUN_08033704(param_1);
  }
  return in_lr;
}


