// undefined FUN_081279a4(void)
// entry 0x81279a4


undefined4 FUN_081279a4(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)*(byte *)(param_1 + 8);
  pbVar1 = *(byte **)(param_1 + 0x2c);
  if (uVar2 != 0) {
    do {
      if (((*pbVar1 & 0x80) != 0) && ((*pbVar1 & 0x40) != 0)) {
        FUN_08127b1c(pbVar1);
        *pbVar1 = 0x80;
        pbVar1[0xf] = 2;
        pbVar1[0x13] = 0x40;
        pbVar1[0x19] = 0x16;
        pbVar1[0x24] = 1;
      }
      uVar2 = uVar2 - 1;
      pbVar1 = pbVar1 + 0x50;
    } while (0 < (int)uVar2);
  }
  return in_lr;
}


