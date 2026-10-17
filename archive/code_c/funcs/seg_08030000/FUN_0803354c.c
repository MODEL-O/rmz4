// undefined FUN_0803354c(void)
// entry 0x803354c


undefined4 FUN_0803354c(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc0) == '\0') {
    pbVar3 = (byte *)(param_1 + DAT_08033564);
    bVar1 = *pbVar3;
    bVar2 = 0x10;
  }
  else {
    pbVar3 = (byte *)(param_1 + DAT_08033588);
    bVar1 = *pbVar3;
    bVar2 = 0x20;
  }
  *pbVar3 = bVar1 | bVar2;
  if (*(char *)(param_1 + 0xfc) == '\x01') {
    FUN_0801cf00(param_1,DAT_0803358c);
  }
  else if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_080335c8
          ) {
    FUN_0801cfc8(param_1,DAT_080335cc,0,2);
  }
  if (*(char *)(param_1 + 0x154) == '\x01') {
    *(undefined1 *)(param_1 + DAT_080335d0) = 2;
  }
  return in_lr;
}


