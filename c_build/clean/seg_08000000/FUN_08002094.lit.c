// undefined FUN_08002094(void)
// entry 0x8002094


void FUN_08002094(void)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  ushort *puVar5;
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
  
  piVar2 = 0x040000d4;
  local_30 = 0x001f001f;
  local_2c = 0x03e003e0;
  local_28 = 0x7c007c00;
  pbVar4 = (byte *)(0x03002ac0 + 0x400);
  bVar1 = *pbVar4;
  if (bVar1 == *(byte *)(0x03002ac0 + 0x00000401)) {
    if (bVar1 == 0x20) {
      (*(int *)0x040000d4) = 0x03002ac0;
      piVar2[1] = 0x5000000;
      piVar2[2] = 0x84000100;
    }
    else if (bVar1 < 0x20) {
      FUN_08002260(0x03002ac0,0x5000000,*pbVar4,&local_30);
    }
    else {
      local_24 = 0x40 - *pbVar4;
      local_20 = *pbVar4 - 0x21 | (*pbVar4 - 0x21) * 0x10000;
      FUN_080022a4(0x03002ac0,0x5000000,&local_24,&local_30);
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
    pbVar4 = (byte *)(0x03002ac0 + 0x00000401);
    local_20 = (uint)*pbVar4;
    if (local_20 < 0x21) {
      local_14 = 0;
    }
    else {
      local_20 = 0x40 - *pbVar4;
      local_14 = *pbVar4 - 0x21 | (*pbVar4 - 0x21) * 0x10000;
    }
    pbVar4 = (byte *)(0x03002ac0 + 0x00000402);
    local_1c = (uint)*pbVar4;
    if (local_1c < 0x21) {
      local_10 = 0;
    }
    else {
      local_1c = 0x40 - *pbVar4;
      local_10 = *pbVar4 - 0x21 | (*pbVar4 - 0x21) * 0x10000;
    }
    FUN_080022f4(0x03002ac0,0x5000000,&local_24,&local_30);
  }
  piVar2 = 0x040000d4;
  iVar3 = 0x03002ac0;
  puVar5 = (ushort *)(0x03002ac0 + 0x00000406);
  if (*puVar5 != 0) {
    local_c[0] = (undefined2)0x0000ffff;
    (*(int *)0x040000d4) = (int)local_c;
    piVar2[1] = *(ushort *)(iVar3 + 0x00000404) + 0x5000000;
    piVar2[2] = *puVar5 >> 1 | 0x81000000;
    *puVar5 = 0;
  }
  if (*(int *)(iVar3 + 0x408) != 0) {
    FUN_08128f7c();
  }
  return;
}


