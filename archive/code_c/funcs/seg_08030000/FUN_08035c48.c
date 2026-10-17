// undefined FUN_08035c48(void)
// entry 0x8035c48


undefined4 FUN_08035c48(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc0) == '\0') {
    pbVar5 = (byte *)(param_1 + DAT_08035c60);
    bVar2 = *pbVar5;
    bVar4 = 0x10;
  }
  else {
    pbVar5 = (byte *)(param_1 + DAT_08035c90);
    bVar2 = *pbVar5;
    bVar4 = 0x20;
  }
  *pbVar5 = bVar2 | bVar4;
  FUN_0801cfc8(param_1,DAT_08035c94,1,2);
  if (*(char *)(param_1 + 0x154) == '\x03') {
    uVar3 = 3;
    iVar1 = 0x101;
  }
  else {
    if (*(char *)(param_1 + 0x154) != '\x02') {
      return in_lr;
    }
    uVar3 = 1;
    iVar1 = DAT_08035cac;
  }
  *(undefined1 *)(param_1 + iVar1) = uVar3;
  return in_lr;
}


