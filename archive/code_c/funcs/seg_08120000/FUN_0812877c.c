// undefined FUN_0812877c(void)
// entry 0x812877c


undefined4 FUN_0812877c(int param_1,ushort param_2,undefined2 param_3)

{
  uint uVar1;
  byte *pbVar2;
  ushort uVar3;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x34) == DAT_081287ec) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    uVar1 = (uint)*(byte *)(param_1 + 8);
    pbVar2 = *(byte **)(param_1 + 0x2c);
    uVar3 = 1;
    if (uVar1 != 0) {
      do {
        if (((param_2 & uVar3) != 0) && ((*pbVar2 & 0x80) != 0)) {
          pbVar2[0xb] = (byte)((ushort)param_3 >> 8);
          pbVar2[0xd] = (byte)param_3;
          *pbVar2 = *pbVar2 | 0xc;
        }
        uVar1 = uVar1 - 1;
        pbVar2 = pbVar2 + 0x50;
        uVar3 = uVar3 << 1;
      } while (0 < (int)uVar1);
    }
    *(int *)(param_1 + 0x34) = DAT_081287ec;
  }
  return in_lr;
}


