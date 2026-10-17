// undefined FUN_08002094(void)
// entry 0x8002094


undefined4 FUN_08002094(void)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  ushort *puVar5;
  undefined4 in_lr;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  undefined2 local_c [2];
  
  piVar2 = DAT_080020e4;
  local_30 = DAT_080020d4;
  local_2c = DAT_080020d8;
  local_28 = DAT_080020dc;
  pbVar4 = (byte *)(DAT_080020d0 + 0x400);
  bVar1 = *pbVar4;
  if (bVar1 == *(byte *)(DAT_080020d0 + DAT_080020e0)) {
    if (bVar1 == 0x20) {
      *DAT_080020e4 = DAT_080020d0;
      piVar2[1] = 0x5000000;
      piVar2[2] = DAT_080020e8;
    }
    else if (bVar1 < 0x20) {
      FUN_08002260(DAT_080020d0,0x5000000,*pbVar4,&local_30);
    }
    else {
      local_24 = 0x40 - *pbVar4;
      local_20 = *pbVar4 - 0x21 | (*pbVar4 - 0x21) * 0x10000;
      FUN_080022a4(DAT_080020d0,0x5000000,&local_24,&local_30);
    }
  }
  else {
    if (bVar1 < 0x21) {
      local_24 = (uint)*pbVar4;
      local_18 = 0;
    }
    else {
      local_24 = 0x40 - *pbVar4;
      local_18 = *pbVar4 - 0x21 | (*pbVar4 - 0x21) * 0x10000;
    }
    pbVar4 = (byte *)(DAT_080020d0 + DAT_08002158);
    local_20 = (uint)*pbVar4;
    if (local_20 < 0x21) {
      local_14 = 0;
    }
    else {
      local_20 = 0x40 - *pbVar4;
      local_14 = *pbVar4 - 0x21 | (*pbVar4 - 0x21) * 0x10000;
    }
    pbVar4 = (byte *)(DAT_080020d0 + DAT_08002180);
    local_1c = (uint)*pbVar4;
    if (local_1c < 0x21) {
      local_10 = 0;
    }
    else {
      local_1c = 0x40 - *pbVar4;
      local_10 = *pbVar4 - 0x21 | (*pbVar4 - 0x21) * 0x10000;
    }
    FUN_080022f4(DAT_080021f4,0x5000000,&local_24,&local_30);
  }
  piVar2 = DAT_08002200;
  iVar3 = DAT_080021f4;
  puVar5 = (ushort *)(DAT_080021f4 + DAT_080021f8);
  if (*puVar5 != 0) {
    local_c[0] = (undefined2)DAT_080021fc;
    *DAT_08002200 = (int)local_c;
    piVar2[1] = *(ushort *)(iVar3 + DAT_08002204) + 0x5000000;
    piVar2[2] = *puVar5 >> 1 | 0x81000000;
    *puVar5 = 0;
  }
  if (*(int *)(iVar3 + 0x408) != 0) {
    FUN_08128f7c();
  }
  return in_lr;
}


