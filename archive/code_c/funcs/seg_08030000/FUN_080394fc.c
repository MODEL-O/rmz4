// undefined FUN_080394fc(void)
// entry 0x80394fc


undefined4 FUN_080394fc(int param_1)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  ushort *puVar6;
  uint uVar7;
  undefined4 in_lr;
  
  pbVar4 = (byte *)(param_1 + DAT_08039548);
  if (*pbVar4 == 0) {
    uVar1 = *(ushort *)(param_1 + 0x250);
    if ((uVar1 & 0x10) == 0) {
      if ((uVar1 & 0x20) == 0) {
        *pbVar4 = (byte)uVar1 & 0x20;
        return in_lr;
      }
      uVar3 = 1;
      puVar6 = (ushort *)(param_1 + 0x1d0);
      do {
        uVar1 = puVar6[uVar3];
        if ((uVar1 & 0x1000) != 0) {
          return in_lr;
        }
        if ((uVar1 & 0x10) != 0) {
          return in_lr;
        }
        bVar2 = (byte)uVar1 & 0x20;
        if ((uVar1 & 0x20) != 0) {
          uVar7 = uVar3 + 0xb;
          if (uVar7 <= uVar3) {
            return in_lr;
          }
          puVar5 = (undefined1 *)(param_1 + DAT_0803967c);
          do {
            if ((puVar6[uVar3] & 0x20) == 0) {
              *puVar6 = *puVar6 | 0x1000;
              *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 4;
              *puVar5 = 0x1c;
            }
            uVar3 = uVar3 + 1 & 0xff;
          } while (uVar3 < uVar7);
          return in_lr;
        }
        uVar3 = uVar3 + 1 & 0xff;
      } while (uVar3 < 0xb);
    }
    else {
      uVar3 = 1;
      puVar6 = (ushort *)(param_1 + 0x1d0);
      do {
        uVar1 = puVar6[uVar3];
        if ((uVar1 & 0x1000) != 0) {
          return in_lr;
        }
        if ((uVar1 & 0x20) != 0) {
          return in_lr;
        }
        bVar2 = (byte)uVar1 & 0x10;
        if ((uVar1 & 0x10) != 0) {
          uVar7 = uVar3 + 10;
          if (uVar7 <= uVar3) {
            return in_lr;
          }
          puVar5 = (undefined1 *)(param_1 + DAT_080395e4);
          do {
            if ((puVar6[uVar3] & 0x10) == 0) {
              *puVar6 = *puVar6 | 0x1000;
              *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 4;
              *puVar5 = 0x1c;
            }
            uVar3 = uVar3 + 1 & 0xff;
          } while (uVar3 < uVar7);
          return in_lr;
        }
        uVar3 = uVar3 + 1 & 0xff;
      } while (uVar3 < 10);
    }
    *(byte *)(param_1 + DAT_08039694) = bVar2;
  }
  else {
    *pbVar4 = *pbVar4 - 1;
    *(ushort *)(param_1 + 0x1d0) = *(ushort *)(param_1 + 0x1d0) | 0x1000;
    if ((*(ushort *)(param_1 + DAT_0803954c) & 0x30) == 0) {
      *pbVar4 = 0;
    }
    else {
      *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 8;
    }
  }
  return in_lr;
}


