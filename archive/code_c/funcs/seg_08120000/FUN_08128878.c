// undefined FUN_08128878(void)
// entry 0x8128878


undefined4 FUN_08128878(int param_1,ushort param_2,byte param_3)

{
  byte *pbVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x34) == DAT_081288e8) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    uVar2 = (uint)*(byte *)(param_1 + 8);
    pbVar1 = *(byte **)(param_1 + 0x2c);
    uVar3 = 1;
    if (uVar2 != 0) {
      do {
        if ((((param_2 & uVar3) != 0) && ((*pbVar1 & 0x80) != 0)) &&
           (pbVar1[0x17] = param_3, param_3 == 0)) {
          FUN_08128858(pbVar1);
        }
        uVar2 = uVar2 - 1;
        pbVar1 = pbVar1 + 0x50;
        uVar3 = uVar3 << 1;
      } while (0 < (int)uVar2);
    }
    *(int *)(param_1 + 0x34) = DAT_081288e8;
  }
  return in_lr;
}


