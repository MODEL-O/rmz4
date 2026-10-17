// undefined FUN_08013bc4(void)
// entry 0x8013bc4


undefined4 FUN_08013bc4(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  piVar3 = DAT_08013edc;
  iVar2 = DAT_08013c38;
  piVar1 = DAT_08013c30;
  if ((*(ushort *)(DAT_08013c24 + DAT_08013c28) >> 8 == 8) &&
     ((*(ushort *)(DAT_08013c24 + DAT_08013c28) & 0xff) == 2)) {
    if (DAT_08013c2c < *(int *)(DAT_08013c24 + 0x54)) {
      pbVar6 = (byte *)(DAT_08013c24 + DAT_08013ee0);
      FUN_08001ea4((int)DAT_08013edc + *DAT_08013edc + (0x2e - (uint)(*pbVar6 >> 1)) * 0x14,0x4000);
      FUN_08002208((int)piVar3 + *piVar3 + (0x2e - (uint)(*pbVar6 >> 1)) * 0x14 + 0xc,0);
    }
    else {
      pbVar6 = (byte *)(DAT_08013c24 + DAT_08013c34);
      FUN_08001ea4(*DAT_08013c30 + (uint)(*pbVar6 >> 1) * 0x14 + DAT_08013c38,0x4000);
      FUN_08002208(*piVar1 + (uint)(*pbVar6 >> 1) * 0x14 + iVar2 + 0xc,0);
    }
  }
  iVar5 = DAT_08013ef4;
  iVar4 = DAT_08013eec;
  iVar2 = DAT_08013ee4;
  piVar1 = DAT_08013edc;
  if ((*(ushort *)(DAT_08013ee4 + DAT_08013ee8) >> 8 == 8) &&
     ((*(ushort *)(DAT_08013ee4 + DAT_08013ee8) & 0xff) == 6)) {
    pbVar6 = (byte *)(DAT_08013ee4 + DAT_08013ef0);
    FUN_08001ea4(*DAT_08013edc + (uint)*(byte *)((uint)*pbVar6 + DAT_08013eec) * 0x14 + DAT_08013ef4
                 ,0x4000);
    FUN_08002208(*piVar1 + (uint)*(byte *)((uint)*pbVar6 + iVar4) * 0x14 + iVar5 + 0xc,0);
    pbVar6 = (byte *)(iVar2 + DAT_08013ef8);
    iVar5 = iVar5 + 0xb4;
    FUN_08001ea4(*piVar1 + (uint)*(byte *)((uint)*pbVar6 + iVar4) * 0x14 + iVar5,0x4000);
    FUN_08002208(*piVar1 + (uint)*(byte *)((uint)*pbVar6 + iVar4) * 0x14 + iVar5 + 0xc,0);
  }
  iVar5 = DAT_08013f04;
  iVar4 = DAT_08013eec;
  iVar2 = DAT_08013ee4;
  piVar1 = DAT_08013edc;
  if ((*(ushort *)(DAT_08013ee4 + DAT_08013efc) >> 8 == 8) &&
     ((*(ushort *)(DAT_08013ee4 + DAT_08013efc) & 0xff) == 7)) {
    pbVar6 = (byte *)(DAT_08013ee4 + DAT_08013f00);
    FUN_08001ea4(*DAT_08013edc + (uint)*(byte *)((uint)*pbVar6 + DAT_08013eec) * 0x14 + DAT_08013f04
                 ,0x4000);
    FUN_08002208(*piVar1 + (uint)*(byte *)((uint)*pbVar6 + iVar4) * 0x14 + iVar5 + 0xc,0);
    pbVar6 = (byte *)(iVar2 + DAT_08013f08);
    FUN_08001ea4(*piVar1 + (uint)*(byte *)((uint)*pbVar6 + iVar4) * 0x14 + iVar5 + 0xb4,0x4000);
    FUN_08002208(*piVar1 + (uint)*(byte *)((uint)*pbVar6 + iVar4) * 0x14 + iVar5 + 0xb4 + 0xc,0);
    pbVar6 = (byte *)(iVar2 + DAT_08013f0c);
    FUN_08001ea4(*piVar1 + (uint)*(byte *)((uint)*pbVar6 + iVar4) * 0x14 + iVar5 + 0x168,0x4000);
    FUN_08002208(*piVar1 + (uint)*(byte *)((uint)*pbVar6 + iVar4) * 0x14 + iVar5 + 0x168 + 0xc,0);
  }
  iVar4 = DAT_08013f14;
  iVar2 = DAT_08013eec;
  piVar1 = DAT_08013edc;
  if ((*(ushort *)(DAT_08013ee4 + DAT_08013ee8) >> 8 == 8) &&
     ((*(ushort *)(DAT_08013ee4 + DAT_08013ee8) & 0xff) == 8)) {
    pbVar6 = (byte *)(DAT_08013ee4 + DAT_08013f10);
    FUN_08001ea4(*DAT_08013edc + (uint)*(byte *)((uint)*pbVar6 + DAT_08013eec) * 0x14 + DAT_08013f14
                 ,0x4000);
    FUN_08002208(*piVar1 + (uint)*(byte *)((uint)*pbVar6 + iVar2) * 0x14 + iVar4 + 0xc,0);
  }
  iVar5 = DAT_08013f1c;
  iVar4 = DAT_08013eec;
  iVar2 = DAT_08013ee4;
  piVar1 = DAT_08013edc;
  if ((*(ushort *)(DAT_08013ee4 + DAT_08013efc) >> 8 == 8) &&
     ((*(ushort *)(DAT_08013ee4 + DAT_08013efc) & 0xff) == 0xb)) {
    pbVar6 = (byte *)(DAT_08013ee4 + DAT_08013f18);
    FUN_08001ea4(*DAT_08013edc + (uint)*(byte *)((uint)*pbVar6 + DAT_08013eec) * 0x14 + DAT_08013f1c
                 ,0x4000);
    FUN_08002208(*piVar1 + (uint)*(byte *)((uint)*pbVar6 + iVar4) * 0x14 + iVar5 + 0xc,0);
    pbVar6 = (byte *)(iVar2 + DAT_08013f20);
    iVar5 = iVar5 + 0xb4;
    FUN_08001ea4(*piVar1 + (uint)*(byte *)((uint)*pbVar6 + iVar4) * 0x14 + iVar5,0x4000);
    FUN_08002208(*piVar1 + (uint)*(byte *)((uint)*pbVar6 + iVar4) * 0x14 + iVar5 + 0xc,0);
  }
  return in_lr;
}


