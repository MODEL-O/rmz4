// undefined FUN_08018474(void)
// entry 0x8018474


undefined4 FUN_08018474(void)

{
  byte bVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  ushort *puVar5;
  short *psVar6;
  undefined4 in_lr;
  
  if ((*(char *)(DAT_0801849c + DAT_080184a0) == '\0') &&
     (*(char *)(DAT_0801849c + DAT_080184a4) != '\0')) {
    *(char *)(DAT_0801849c + DAT_080184a0) = '\x01';
    FUN_08002b10(0x17c);
  }
  else if (*(char *)(DAT_08018550 + DAT_08018554) != '\0') {
    if (*(char *)(DAT_08018550 + DAT_08018558) == '\0') {
      *(char *)(DAT_08018550 + DAT_08018554) = '\0';
      FUN_08002b5c(0x17c);
    }
  }
  iVar2 = DAT_08018550;
  *(undefined1 *)(DAT_08018550 + DAT_08018558) = 0;
  puVar5 = (ushort *)(iVar2 + DAT_0801855c);
  if ((*puVar5 != 0) && (iVar4 = *puVar5 - 1, *puVar5 = (ushort)iVar4, iVar4 * 0x10000 < 0)) {
    *puVar5 = (ushort)DAT_08018560;
  }
  if ((*(ushort *)(iVar2 + DAT_08018564) >> 8 == 0xc) &&
     ((*(ushort *)(iVar2 + DAT_08018564) & 0xff) == 4)) {
    bVar1 = *(byte *)(iVar2 + DAT_08018568);
    if ((bVar1 & 1) == 0) {
      *(byte *)(iVar2 + DAT_08018568) = bVar1 | 1;
      FUN_0800249c(0x3b,0);
      FUN_0800249c(0x3c,0);
      FUN_0800249c(0x3d,0);
      FUN_0800249c(0x3e,0);
    }
    FUN_080025d8(0x3b);
    FUN_080025d8(0x3c);
    FUN_080025d8(0x3d);
    FUN_080025d8(0x3e);
  }
  else {
    bVar1 = *(byte *)(DAT_080185d4 + DAT_080185d8);
    if ((bVar1 & 1) != 0) {
      *(byte *)(DAT_080185d4 + DAT_080185d8) = bVar1 ^ 1;
      FUN_08002624(0x3b);
      FUN_08002624(0x3c);
      FUN_08002624(0x3d);
      FUN_08002624(0x3e);
    }
  }
  if ((*(ushort *)(DAT_080185d4 + DAT_080185dc) >> 8 == 0xc) &&
     ((*(ushort *)(DAT_080185d4 + DAT_080185dc) & 0xff) == 5)) {
    bVar1 = *(byte *)(DAT_080185d4 + DAT_080185d8);
    if ((bVar1 & 2) == 0) {
      *(byte *)(DAT_080185d4 + DAT_080185d8) = bVar1 | 2;
      FUN_0800249c(0x42,0);
    }
    FUN_080025d8(0x42);
  }
  else {
    bVar1 = *(byte *)(DAT_08018628 + DAT_0801862c);
    if ((bVar1 & 2) != 0) {
      *(byte *)(DAT_08018628 + DAT_0801862c) = bVar1 ^ 2;
      FUN_08002624(0x42);
    }
  }
  iVar2 = DAT_08018628;
  if ((*(byte *)(DAT_08018628 + DAT_08018630) & 1) != 0) {
    psVar6 = (short *)(DAT_08018628 + DAT_08018634);
    if (*psVar6 != 0) {
      if (*psVar6 < DAT_08018638) {
        sVar3 = *psVar6 + 1;
      }
      else {
        sVar3 = *psVar6 + 0x10;
      }
      *psVar6 = sVar3;
    }
  }
  if ((*(byte *)(iVar2 + DAT_08018668) & 2) != 0) {
    psVar6 = (short *)(iVar2 + DAT_0801866c);
    if (*psVar6 != 0) {
      if (*psVar6 < DAT_08018670) {
        sVar3 = *psVar6 + 1;
      }
      else {
        sVar3 = *psVar6 + 0x10;
      }
      *psVar6 = sVar3;
    }
  }
  return in_lr;
}


