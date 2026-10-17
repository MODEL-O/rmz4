// undefined FUN_0800a52c(void)
// entry 0x800a52c


void FUN_0800a52c(void)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  iVar5 = 0x02000ab0;
  piVar6 = (int *)(0x02000ab0 + 0x0002d034);
  if (*piVar6 == 0) {
    iVar2 = FUN_080ebe18(1);
    *piVar6 = iVar2;
  }
  if (*(ushort *)(iVar5 + 0x000007d4) >> 8 == 1) {
    if ((((*(ushort *)(iVar5 + 0x000007d4) & 0xff) == 0) &&
        (*(ushort *)(iVar5 + 0x000007d6) >> 8 == 1)) &&
       ((*(ushort *)(iVar5 + 0x000007d6) & 0xff) == 1)) {
      if (*(byte *)(iVar5 + 0x0002d024) < 3) {
        *(char *)(iVar5 + 0x0002d02c) = *(char *)(iVar5 + 0x0002d02c) + '\x01';
      }
      else {
        cVar4 = *(char *)(iVar5 + 0x0002d02c);
        if ((*(ushort *)(iVar5 + 0x0002d048) & 0x3f) == 0) {
          cVar4 = cVar4 + '\x01';
        }
        *(char *)(iVar5 + 0x0002d02c) = cVar4;
      }
      iVar5 = 0x02000ab0;
      if (*(char *)(0x02000ab0 + 0x0002d02c) == '@') {
        *(char *)(0x02000ab0 + 0x0002d02c) = '\0';
      }
    }
    if ((*(ushort *)(iVar5 + 0x000007d4) >> 8 != 1) ||
       ((*(ushort *)(iVar5 + 0x000007d4) & 0xff) != 3)) goto LAB_0800a608;
    if (*(ushort *)(iVar5 + 0x000007d6) >> 8 == 1) {
      if ((*(ushort *)(iVar5 + 0x000007d6) & 0xff) == 2) {
        pcVar3 = (char *)(iVar5 + 0x0002d02f);
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
    if ((*(ushort *)(iVar5 + 0x000007d6) >> 8 == 1) &&
       ((*(ushort *)(iVar5 + 0x000007d6) & 0xff) == 2)) {
      bVar1 = *(byte *)(iVar5 + 0x0002d028);
      if ((bVar1 & 1) == 0) {
        *(byte *)(iVar5 + 0x0002d028) = bVar1 | 1;
        FUN_0800249c(0xc,0);
      }
      FUN_080025d8(0xc);
      goto LAB_0800a674;
    }
  }
  bVar1 = *(byte *)(0x02000ab0 + 0x0002d028);
  if ((bVar1 & 1) != 0) {
    *(byte *)(0x02000ab0 + 0x0002d028) = bVar1 ^ 1;
    FUN_08002624(0xc);
  }
LAB_0800a674:
  if (((*(ushort *)(0x02000ab0 + 0x000007d4) >> 8 == 1) &&
      ((*(ushort *)(0x02000ab0 + 0x000007d4) & 0xff) == 3)) &&
     ((*(byte *)(0x02000ab0 + 0x0002d025) & 1) != 0)) {
    bVar1 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar1 & 2) == 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar1 | 2;
      FUN_0800249c(0xd,0);
    }
    FUN_080025d8(0xd);
  }
  else {
    bVar1 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar1 & 2) != 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar1 ^ 2;
      FUN_08002624(0xd);
    }
  }
  return;
}


