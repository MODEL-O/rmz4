// undefined FUN_08127fc4(void)
// entry 0x8127fc4


undefined4 FUN_08127fc4(int param_1)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if ((*(short *)(param_1 + 0x24) != 0) &&
     (sVar2 = *(short *)(param_1 + 0x26) + -1, *(short *)(param_1 + 0x26) = sVar2,
     uVar5 = DAT_08128004, sVar2 == 0)) {
    *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x24);
    uVar1 = *(ushort *)(param_1 + 0x28);
    if ((uVar1 & 2) == 0) {
      uVar3 = uVar1 - 0x10;
      *(short *)(param_1 + 0x28) = (short)uVar3;
      if ((int)((uVar3 & uVar5) * 0x10000) < 1) {
        uVar5 = (uint)*(byte *)(param_1 + 8);
        pbVar4 = *(byte **)(param_1 + 0x2c);
        if (uVar5 != 0) {
          do {
            FUN_08127388(param_1,pbVar4);
            if ((*(ushort *)(param_1 + 0x28) & 1) == 0) {
              *pbVar4 = (byte)*(ushort *)(param_1 + 0x28) & 1;
            }
            uVar5 = uVar5 - 1;
            pbVar4 = pbVar4 + 0x50;
          } while (0 < (int)uVar5);
        }
        if ((*(ushort *)(param_1 + 0x28) & 1) == 0) {
          uVar5 = 0x80000000;
        }
        else {
          uVar5 = *(uint *)(param_1 + 4) | 0x80000000;
        }
        *(uint *)(param_1 + 4) = uVar5;
        *(undefined2 *)(param_1 + 0x24) = 0;
        return in_lr;
      }
    }
    else {
      uVar3 = uVar1 + 0x10;
      *(short *)(param_1 + 0x28) = (short)uVar3;
      if (0xff < (uVar3 & uVar5)) {
        *(undefined2 *)(param_1 + 0x28) = 0x100;
        *(undefined2 *)(param_1 + 0x24) = 0;
      }
    }
    uVar5 = (uint)*(byte *)(param_1 + 8);
    pbVar4 = *(byte **)(param_1 + 0x2c);
    if (uVar5 != 0) {
      do {
        if ((*pbVar4 & 0x80) != 0) {
          pbVar4[0x13] = (byte)(*(ushort *)(param_1 + 0x28) >> 2);
          *pbVar4 = *pbVar4 | 3;
        }
        uVar5 = uVar5 - 1;
        pbVar4 = pbVar4 + 0x50;
      } while (0 < (int)uVar5);
    }
  }
  return in_lr;
}


