// undefined FUN_0800a52c(void)
// entry 0x800a52c


undefined4 FUN_0800a52c(void)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_lr;
  
  iVar5 = DAT_0800a590;
  piVar6 = (int *)(DAT_0800a590 + DAT_0800a594);
  if (*piVar6 == 0) {
    iVar2 = FUN_080ebe18(1);
    *piVar6 = iVar2;
  }
  if (*(ushort *)(iVar5 + DAT_0800a598) >> 8 == 1) {
    if ((((*(ushort *)(iVar5 + DAT_0800a598) & 0xff) == 0) &&
        (*(ushort *)(iVar5 + DAT_0800a59c) >> 8 == 1)) &&
       ((*(ushort *)(iVar5 + DAT_0800a59c) & 0xff) == 1)) {
      if (*(byte *)(iVar5 + DAT_0800a5a0) < 3) {
        *(char *)(iVar5 + DAT_0800a640) = *(char *)(iVar5 + DAT_0800a640) + '\x01';
      }
      else {
        cVar4 = *(char *)(iVar5 + DAT_0800a5a4);
        if ((*(ushort *)(iVar5 + DAT_0800a5a8) & 0x3f) == 0) {
          cVar4 = cVar4 + '\x01';
        }
        *(char *)(iVar5 + DAT_0800a5a4) = cVar4;
      }
      iVar5 = DAT_0800a644;
      if (*(char *)(DAT_0800a644 + DAT_0800a640) == '@') {
        *(char *)(DAT_0800a644 + DAT_0800a640) = '\0';
      }
    }
    if ((*(ushort *)(iVar5 + DAT_0800a648) >> 8 != 1) ||
       ((*(ushort *)(iVar5 + DAT_0800a648) & 0xff) != 3)) goto LAB_0800a608;
    if (*(ushort *)(iVar5 + DAT_0800a64c) >> 8 == 1) {
      if ((*(ushort *)(iVar5 + DAT_0800a64c) & 0xff) == 2) {
        pcVar3 = (char *)(iVar5 + DAT_0800a650);
        cVar4 = *pcVar3;
        *pcVar3 = cVar4 + '\x01';
        if ((char)(cVar4 + '\x01') == '\x1a') {
          *pcVar3 = '\0';
        }
      }
      goto LAB_0800a608;
    }
  }
  else {
LAB_0800a608:
    if ((*(ushort *)(iVar5 + DAT_0800a64c) >> 8 == 1) &&
       ((*(ushort *)(iVar5 + DAT_0800a64c) & 0xff) == 2)) {
      bVar1 = *(byte *)(iVar5 + DAT_0800a654);
      if ((bVar1 & 1) == 0) {
        *(byte *)(iVar5 + DAT_0800a654) = bVar1 | 1;
        FUN_0800249c(0xc,0);
      }
      FUN_080025d8(0xc);
      goto LAB_0800a674;
    }
  }
  bVar1 = *(byte *)(DAT_0800a6bc + DAT_0800a6c0);
  if ((bVar1 & 1) != 0) {
    *(byte *)(DAT_0800a6bc + DAT_0800a6c0) = bVar1 ^ 1;
    FUN_08002624(0xc);
  }
LAB_0800a674:
  if (((*(ushort *)(DAT_0800a6bc + DAT_0800a6c4) >> 8 == 1) &&
      ((*(ushort *)(DAT_0800a6bc + DAT_0800a6c4) & 0xff) == 3)) &&
     ((*(byte *)(DAT_0800a6bc + DAT_0800a6c8) & 1) != 0)) {
    bVar1 = *(byte *)(DAT_0800a6bc + DAT_0800a6c0);
    if ((bVar1 & 2) == 0) {
      *(byte *)(DAT_0800a6bc + DAT_0800a6c0) = bVar1 | 2;
      FUN_0800249c(0xd,0);
    }
    FUN_080025d8(0xd);
  }
  else {
    bVar1 = *(byte *)(DAT_0800a6bc + DAT_0800a6ec);
    if ((bVar1 & 2) != 0) {
      *(byte *)(DAT_0800a6bc + DAT_0800a6ec) = bVar1 ^ 2;
      FUN_08002624(0xd);
    }
  }
  return in_lr;
}


