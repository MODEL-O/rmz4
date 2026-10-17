// undefined FUN_0800e99c(void)
// entry 0x800e99c


void FUN_0800e99c(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  iVar3 = 0x0202e910;
  iVar4 = 0x02000ab0;
  if ((*(char *)(0x02000ab0 + 0x0002d024) == '\x01') &&
     (piVar7 = (int *)(0x02000ab0 + 0x0002d030), *piVar7 == 0)) {
    iVar4 = FUN_08101cf8(0x0202eb94);
    *piVar7 = iVar4;
  }
  else {
    pcVar6 = (char *)(0x02000ab0 + 0x0002d024);
    if ((*pcVar6 == '\x02') &&
       ((((*(ushort *)(0x0202e910 + 0x14) & 1) == 0 && ((*(ushort *)(0x0202e910 + 8) & 8) == 0))
        && (iVar5 = *(int *)(0x0202e910 + 0x284) + -1, *(int *)(0x0202e910 + 0x284) = iVar5,
           iVar5 == 0)))) {
      *(undefined1 *)(*(int *)(iVar4 + 0x0002d030) + 0xd) = 1;
      (*(int *)0x030032e0) = (*(int *)0x030032e0) | 0x80;
      *(undefined2 *)(iVar3 + 0x158) = 0x8000;
      *pcVar6 = '\0';
      *(undefined1 *)(iVar4 + 0x0002d02e) = 1;
    }
  }
  iVar4 = 0x02000ab0;
  if ((*(ushort *)(0x02000ab0 + 0x000007d6) >> 8 == 4) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d6) & 0xff) == 1)) {
    pcVar6 = (char *)(0x02000ab0 + 0x0002d029);
    cVar1 = *pcVar6;
    *pcVar6 = cVar1 + '\x01';
    if ((char)(cVar1 + '\x01') == '0') {
      *pcVar6 = '\0';
    }
  }
  if ((*(byte *)(iVar4 + 0x0002c010) & 0xf) == 2) {
    if ((*(ushort *)(iVar4 + 0x000007d4) >> 8 == 4) &&
       ((*(ushort *)(iVar4 + 0x000007d4) & 0xff) == 0)) {
      bVar2 = *(byte *)(iVar4 + 0x0002d028);
      if ((bVar2 & 1) == 0) {
        *(byte *)(iVar4 + 0x0002d028) = bVar2 | 1;
        FUN_0800249c(0x82,0);
      }
      FUN_080025d8(0x82);
    }
    else {
      bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
      if ((bVar2 & 1) != 0) {
        *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 ^ 1;
        FUN_08002624(0x82);
      }
    }
  }
  else if ((*(ushort *)(iVar4 + 0x000007d4) >> 8 == 4) &&
          ((*(ushort *)(iVar4 + 0x000007d4) & 0xff) == 0)) {
    bVar2 = *(byte *)(iVar4 + 0x0002d028);
    if ((bVar2 & 1) == 0) {
      *(byte *)(iVar4 + 0x0002d028) = bVar2 | 1;
      FUN_0800249c(0xc4,0);
    }
    FUN_080025d8(0xc4);
  }
  else {
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 1) != 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 ^ 1;
      FUN_08002624(0xc4);
    }
  }
  if ((*(ushort *)(0x02000ab0 + 0x000007d4) >> 8 == 4) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d4) & 0xff) == 3)) {
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 2) == 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 | 2;
      FUN_0800249c(0x7b,0);
    }
    FUN_080025d8(0x7b);
  }
  else {
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 2) != 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 ^ 2;
      FUN_08002624(0x7b);
    }
  }
  if ((*(ushort *)(0x02000ab0 + 0x000007d4) >> 8 == 4) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d4) & 0xff) == 4)) {
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 4) == 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 | 4;
      FUN_0800249c(0x7c,0);
    }
    FUN_080025d8(0x7c);
  }
  else {
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 4) != 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 ^ 4;
      FUN_08002624(0x7c);
    }
  }
  if ((*(ushort *)(0x02000ab0 + 0x000007d6) >> 8 == 4) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d6) & 0xff) == 5)) {
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 8) == 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 | 8;
      FUN_0800249c(0x7d,0);
    }
    FUN_080025d8(0x7d);
  }
  else {
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 8) != 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 ^ 8;
      FUN_08002624(0x7d);
    }
  }
  if ((*(ushort *)(0x02000ab0 + 0x000007d4) >> 8 == 4) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d4) & 0xff) == 6)) {
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 0x10) == 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 | 0x10;
      FUN_0800249c(0x7e,0);
      FUN_0800249c(0x7f,0);
      FUN_0800249c(0x83,0);
    }
    FUN_080025d8(0x7e);
    FUN_080025d8(0x7f);
    FUN_080025d8(0x83);
  }
  else {
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 0x10) != 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 ^ 0x10;
      FUN_08002624(0x7e);
      FUN_08002624(0x7f);
      FUN_08002624(0x83);
    }
  }
  if ((*(ushort *)(0x02000ab0 + 0x000007d6) >> 8 == 4) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d6) & 0xff) == 7)) {
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 0x20) == 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 | 0x20;
      FUN_0800249c(0x80,0);
      FUN_0800249c(0x81,0);
    }
    FUN_080025d8(0x80);
    FUN_080025d8(0x81);
  }
  else {
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 0x20) != 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 ^ 0x20;
      FUN_08002624(0x80);
      FUN_08002624(0x81);
    }
  }
  if ((((*(byte *)(0x02000ab0 + 0x0002c010) & 0xf) == 2) &&
      (*(ushort *)(0x02000ab0 + 0x000007d6) >> 8 == 4)) &&
     ((*(ushort *)(0x02000ab0 + 0x000007d6) & 0xff) == 1)) {
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 0x40) == 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 | 0x40;
      FUN_0800249c(199,0);
    }
    FUN_080025d8(199);
  }
  else {
    bVar2 = *(byte *)(0x02000ab0 + 0x0002d028);
    if ((bVar2 & 0x40) != 0) {
      *(byte *)(0x02000ab0 + 0x0002d028) = bVar2 ^ 0x40;
      FUN_08002624(199);
    }
  }
  return;
}


