// undefined FUN_080099c4(void)
// entry 0x80099c4


void FUN_080099c4(void)

{
  int iVar1;
  ushort uVar2;
  ushort *puVar3;
  iVar1 = DAT_080099f4;
  if ((*(ushort *)(DAT_080099f4 + DAT_080099f8) >> 8 == 0) &&
     ((*(ushort *)(DAT_080099f4 + DAT_080099f8) & 0xff) == 0)) {
    puVar3 = (ushort *)(DAT_080099f4 + DAT_080099fc);
    if ((*puVar3 & 1) == 0) {
      uVar2 = *puVar3 | 1;
LAB_08009a12:
      *puVar3 = uVar2;
    }
  }
  else {
    puVar3 = (ushort *)(DAT_080099f4 + DAT_08009a3c);
    if ((*puVar3 & 1) != 0) {
      uVar2 = *puVar3 ^ 1;
      goto LAB_08009a12;
    }
  }
  if ((*(ushort *)(iVar1 + DAT_08009a40) >> 8 == 0) &&
     ((*(ushort *)(iVar1 + DAT_08009a40) & 0xff) == 2)) {
    puVar3 = (ushort *)(iVar1 + DAT_08009a3c);
    if ((*puVar3 & 2) == 0) {
      uVar2 = *puVar3 | 2;
LAB_08009a56:
      *puVar3 = uVar2;
    }
  }
  else {
    puVar3 = (ushort *)(iVar1 + DAT_08009a80);
    if ((*puVar3 & 2) != 0) {
      uVar2 = *puVar3 ^ 2;
      goto LAB_08009a56;
    }
  }
  if ((*(ushort *)(iVar1 + DAT_08009a84) >> 8 == 0) &&
     ((*(ushort *)(iVar1 + DAT_08009a84) & 0xff) == 3)) {
    puVar3 = (ushort *)(iVar1 + DAT_08009a80);
    if ((*puVar3 & 4) != 0) goto LAB_08009a9c;
    uVar2 = *puVar3 | 4;
  }
  else {
    puVar3 = (ushort *)(iVar1 + DAT_08009ac4);
    if ((*puVar3 & 4) == 0) goto LAB_08009a9c;
    uVar2 = *puVar3 ^ 4;
  }
  *puVar3 = uVar2;
LAB_08009a9c:
  if ((*(ushort *)(iVar1 + DAT_08009ac8) >> 8 == 0) &&
     ((*(ushort *)(iVar1 + DAT_08009ac8) & 0xff) == 4)) {
    puVar3 = (ushort *)(iVar1 + DAT_08009ac4);
    if ((*puVar3 & 8) != 0) {
      return;
    }
    uVar2 = *puVar3 | 8;
  }
  else {
    puVar3 = (ushort *)(iVar1 + DAT_08009ae4);
    if ((*puVar3 & 8) == 0) {
      return;
    }
    uVar2 = *puVar3 ^ 8;
  }
  *puVar3 = uVar2;
  return;
}


