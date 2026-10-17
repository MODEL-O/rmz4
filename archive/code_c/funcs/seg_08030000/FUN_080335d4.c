// undefined FUN_080335d4(void)
// entry 0x80335d4


undefined4 FUN_080335d4(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc0) == '\0') {
    pbVar5 = (byte *)(param_1 + DAT_080335ec);
    bVar2 = *pbVar5;
    bVar4 = 0x10;
  }
  else {
    pbVar5 = (byte *)(param_1 + DAT_08033610);
    bVar2 = *pbVar5;
    bVar4 = 0x20;
  }
  *pbVar5 = bVar2 | bVar4;
  if (*(char *)(param_1 + 0xfc) == '\x01') {
    FUN_0801cf00(param_1,DAT_08033614);
  }
  else if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_08033648
          ) {
    FUN_0801cfc8(param_1,DAT_0803364c,1,4);
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
    iVar1 = DAT_08033664;
  }
  *(undefined1 *)(param_1 + iVar1) = uVar3;
  return in_lr;
}


