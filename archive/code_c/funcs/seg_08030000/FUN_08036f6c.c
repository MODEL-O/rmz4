// undefined FUN_08036f6c(void)
// entry 0x8036f6c


undefined4 FUN_08036f6c(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc0) == '\0') {
    pbVar3 = (byte *)(param_1 + DAT_08036f84);
    bVar1 = *pbVar3;
    bVar2 = 0x10;
  }
  else {
    pbVar3 = (byte *)(param_1 + DAT_08036fbc);
    bVar1 = *pbVar3;
    bVar2 = 0x20;
  }
  *pbVar3 = bVar1 | bVar2;
  FUN_0801cfc8(param_1,DAT_08036fc0,0,2);
  if (*(char *)(param_1 + 0x154) == '\x01') {
    *(undefined1 *)(param_1 + DAT_08036fc4) = 2;
  }
  return in_lr;
}


