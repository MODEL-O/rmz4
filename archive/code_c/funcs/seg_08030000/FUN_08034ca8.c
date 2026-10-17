// undefined FUN_08034ca8(void)
// entry 0x8034ca8


undefined4 FUN_08034ca8(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc0) == '\0') {
    pbVar5 = (byte *)(param_1 + DAT_08034cc0);
    bVar2 = *pbVar5;
    bVar4 = 0x10;
  }
  else {
    pbVar5 = (byte *)(param_1 + DAT_08034d08);
    bVar2 = *pbVar5;
    bVar4 = 0x20;
  }
  *pbVar5 = bVar2 | bVar4;
  uVar6 = (uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70));
  if (uVar6 != DAT_08034d0c) {
    if (uVar6 == 0x900) {
      FUN_0801cfc8(param_1,DAT_08034d0c,(short)*(char *)(param_1 + 0x71),
                   (short)*(char *)(param_1 + 0x72));
    }
    else {
      FUN_0801cfc8(param_1,DAT_08034d0c,0,1);
    }
  }
  if (*(char *)(param_1 + 0x154) == '\x03') {
    uVar3 = 3;
    iVar1 = 0x101;
  }
  else {
    if (*(char *)(param_1 + 0x154) != '\x02') {
      return in_lr;
    }
    uVar3 = 1;
    iVar1 = DAT_08034d40;
  }
  *(undefined1 *)(param_1 + iVar1) = uVar3;
  return in_lr;
}


