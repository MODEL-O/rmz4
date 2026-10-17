// undefined FUN_0801702c(void)
// entry 0x801702c


undefined4 FUN_0801702c(void)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 in_lr;
  
  piVar3 = DAT_080170dc;
  if ((*(ushort *)(DAT_0801705c + DAT_08017060) >> 8 == 0xb) &&
     ((*(ushort *)(DAT_0801705c + DAT_08017060) & 0xff) == 0xd)) {
    bVar1 = *(byte *)(DAT_0801705c + DAT_08017064);
    if (bVar1 < 0x13) {
      iVar5 = 1;
      if (bVar1 < 8) {
        iVar5 = 0;
      }
    }
    else {
      iVar5 = 3;
      if (bVar1 < 0x1b) {
        iVar5 = 2;
      }
    }
    iVar5 = iVar5 * 0x14 + DAT_080170e0;
    FUN_08001ea4(*DAT_080170dc + iVar5,0x4000);
    FUN_08002208(*piVar3 + iVar5 + 0xc,0);
    iVar4 = DAT_080170f0;
    iVar5 = DAT_080170ec;
    puVar6 = (ushort *)(DAT_080170e4 + DAT_080170e8);
    uVar2 = *puVar6;
    if (uVar2 < 0x3e) {
      FUN_08001ea4(*piVar3 + (uint)*(byte *)((uint)(uVar2 >> 1) + DAT_080170ec) * 0x14 +
                             DAT_080170f0,0x4000);
      FUN_08002208(*piVar3 + (uint)*(byte *)((uint)(*puVar6 >> 1) + iVar5) * 0x14 + iVar4 + 0xc,0);
    }
    else {
      FUN_08001ea4(*piVar3 + DAT_08017118,0x4000);
      FUN_08002208(*piVar3 + DAT_0801711c,0);
    }
  }
  return in_lr;
}


