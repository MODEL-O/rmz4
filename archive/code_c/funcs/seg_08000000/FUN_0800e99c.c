// undefined FUN_0800e99c(void)
// entry 0x800e99c


undefined4 FUN_0800e99c(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 in_lr;
  
  iVar3 = DAT_0800eaa8;
  iVar4 = DAT_0800eaa0;
  if ((*(char *)(DAT_0800e9c0 + DAT_0800e9c4) == '\x01') &&
     (piVar7 = (int *)(DAT_0800e9c0 + DAT_0800e9c8), *piVar7 == 0)) {
    iVar4 = FUN_08101cf8(DAT_0800e9cc);
    *piVar7 = iVar4;
  }
  else {
    pcVar6 = (char *)(DAT_0800eaa0 + DAT_0800eaa4);
    if ((*pcVar6 == '\x02') &&
       ((((*(ushort *)(DAT_0800eaa8 + 0x14) & 1) == 0 && ((*(ushort *)(DAT_0800eaa8 + 8) & 8) == 0))
        && (iVar5 = *(int *)(DAT_0800eaa8 + 0x284) + -1, *(int *)(DAT_0800eaa8 + 0x284) = iVar5,
           iVar5 == 0)))) {
      *(undefined1 *)(*(int *)(iVar4 + DAT_0800eaac) + 0xd) = 1;
      *DAT_0800eab0 = *DAT_0800eab0 | 0x80;
      *(undefined2 *)(iVar3 + 0x158) = 0x8000;
      *pcVar6 = '\0';
      *(undefined1 *)(iVar4 + DAT_0800eab4) = 1;
    }
  }
  iVar4 = DAT_0800eaa0;
  if ((*(ushort *)(DAT_0800eaa0 + DAT_0800eab8) >> 8 == 4) &&
     ((*(ushort *)(DAT_0800eaa0 + DAT_0800eab8) & 0xff) == 1)) {
    pcVar6 = (char *)(DAT_0800eaa0 + DAT_0800eabc);
    cVar1 = *pcVar6;
    *pcVar6 = cVar1 + '\x01';
    if ((char)(cVar1 + '\x01') == '0') {
      *pcVar6 = '\0';
    }
  }
  if ((*(byte *)(iVar4 + DAT_0800eac0) & 0xf) == 2) {
    if ((*(ushort *)(iVar4 + DAT_0800eac4) >> 8 == 4) &&
       ((*(ushort *)(iVar4 + DAT_0800eac4) & 0xff) == 0)) {
      bVar2 = *(byte *)(iVar4 + DAT_0800eac8);
      if ((bVar2 & 1) == 0) {
        *(byte *)(iVar4 + DAT_0800eac8) = bVar2 | 1;
        FUN_0800249c(0x82,0);
      }
      FUN_080025d8(0x82);
    }
    else {
      bVar2 = *(byte *)(DAT_0800eaec + DAT_0800eaf0);
      if ((bVar2 & 1) != 0) {
        *(byte *)(DAT_0800eaec + DAT_0800eaf0) = bVar2 ^ 1;
        FUN_08002624(0x82);
      }
    }
  }
  else if ((*(ushort *)(iVar4 + DAT_0800eb2c) >> 8 == 4) &&
          ((*(ushort *)(iVar4 + DAT_0800eb2c) & 0xff) == 0)) {
    bVar2 = *(byte *)(iVar4 + DAT_0800eb30);
    if ((bVar2 & 1) == 0) {
      *(byte *)(iVar4 + DAT_0800eb30) = bVar2 | 1;
      FUN_0800249c(0xc4,0);
    }
    FUN_080025d8(0xc4);
  }
  else {
    bVar2 = *(byte *)(DAT_0800eb8c + DAT_0800eb90);
    if ((bVar2 & 1) != 0) {
      *(byte *)(DAT_0800eb8c + DAT_0800eb90) = bVar2 ^ 1;
      FUN_08002624(0xc4);
    }
  }
  if ((*(ushort *)(DAT_0800eb8c + DAT_0800eb94) >> 8 == 4) &&
     ((*(ushort *)(DAT_0800eb8c + DAT_0800eb94) & 0xff) == 3)) {
    bVar2 = *(byte *)(DAT_0800eb8c + DAT_0800eb90);
    if ((bVar2 & 2) == 0) {
      *(byte *)(DAT_0800eb8c + DAT_0800eb90) = bVar2 | 2;
      FUN_0800249c(0x7b,0);
    }
    FUN_080025d8(0x7b);
  }
  else {
    bVar2 = *(byte *)(DAT_0800ebec + DAT_0800ebf0);
    if ((bVar2 & 2) != 0) {
      *(byte *)(DAT_0800ebec + DAT_0800ebf0) = bVar2 ^ 2;
      FUN_08002624(0x7b);
    }
  }
  if ((*(ushort *)(DAT_0800ebec + DAT_0800ebf4) >> 8 == 4) &&
     ((*(ushort *)(DAT_0800ebec + DAT_0800ebf4) & 0xff) == 4)) {
    bVar2 = *(byte *)(DAT_0800ebec + DAT_0800ebf0);
    if ((bVar2 & 4) == 0) {
      *(byte *)(DAT_0800ebec + DAT_0800ebf0) = bVar2 | 4;
      FUN_0800249c(0x7c,0);
    }
    FUN_080025d8(0x7c);
  }
  else {
    bVar2 = *(byte *)(DAT_0800ec50 + DAT_0800ec54);
    if ((bVar2 & 4) != 0) {
      *(byte *)(DAT_0800ec50 + DAT_0800ec54) = bVar2 ^ 4;
      FUN_08002624(0x7c);
    }
  }
  if ((*(ushort *)(DAT_0800ec50 + DAT_0800ec58) >> 8 == 4) &&
     ((*(ushort *)(DAT_0800ec50 + DAT_0800ec58) & 0xff) == 5)) {
    bVar2 = *(byte *)(DAT_0800ec50 + DAT_0800ec54);
    if ((bVar2 & 8) == 0) {
      *(byte *)(DAT_0800ec50 + DAT_0800ec54) = bVar2 | 8;
      FUN_0800249c(0x7d,0);
    }
    FUN_080025d8(0x7d);
  }
  else {
    bVar2 = *(byte *)(DAT_0800ecd0 + DAT_0800ecd4);
    if ((bVar2 & 8) != 0) {
      *(byte *)(DAT_0800ecd0 + DAT_0800ecd4) = bVar2 ^ 8;
      FUN_08002624(0x7d);
    }
  }
  if ((*(ushort *)(DAT_0800ecd0 + DAT_0800ecd8) >> 8 == 4) &&
     ((*(ushort *)(DAT_0800ecd0 + DAT_0800ecd8) & 0xff) == 6)) {
    bVar2 = *(byte *)(DAT_0800ecd0 + DAT_0800ecd4);
    if ((bVar2 & 0x10) == 0) {
      *(byte *)(DAT_0800ecd0 + DAT_0800ecd4) = bVar2 | 0x10;
      FUN_0800249c(0x7e,0);
      FUN_0800249c(0x7f,0);
      FUN_0800249c(0x83,0);
    }
    FUN_080025d8(0x7e);
    FUN_080025d8(0x7f);
    FUN_080025d8(0x83);
  }
  else {
    bVar2 = *(byte *)(DAT_0800ed4c + DAT_0800ed50);
    if ((bVar2 & 0x10) != 0) {
      *(byte *)(DAT_0800ed4c + DAT_0800ed50) = bVar2 ^ 0x10;
      FUN_08002624(0x7e);
      FUN_08002624(0x7f);
      FUN_08002624(0x83);
    }
  }
  if ((*(ushort *)(DAT_0800ed4c + DAT_0800ed54) >> 8 == 4) &&
     ((*(ushort *)(DAT_0800ed4c + DAT_0800ed54) & 0xff) == 7)) {
    bVar2 = *(byte *)(DAT_0800ed4c + DAT_0800ed50);
    if ((bVar2 & 0x20) == 0) {
      *(byte *)(DAT_0800ed4c + DAT_0800ed50) = bVar2 | 0x20;
      FUN_0800249c(0x80,0);
      FUN_0800249c(0x81,0);
    }
    FUN_080025d8(0x80);
    FUN_080025d8(0x81);
  }
  else {
    bVar2 = *(byte *)(DAT_0800edc4 + DAT_0800edc8);
    if ((bVar2 & 0x20) != 0) {
      *(byte *)(DAT_0800edc4 + DAT_0800edc8) = bVar2 ^ 0x20;
      FUN_08002624(0x80);
      FUN_08002624(0x81);
    }
  }
  if ((((*(byte *)(DAT_0800edc4 + DAT_0800edcc) & 0xf) == 2) &&
      (*(ushort *)(DAT_0800edc4 + DAT_0800edd0) >> 8 == 4)) &&
     ((*(ushort *)(DAT_0800edc4 + DAT_0800edd0) & 0xff) == 1)) {
    bVar2 = *(byte *)(DAT_0800edc4 + DAT_0800edc8);
    if ((bVar2 & 0x40) == 0) {
      *(byte *)(DAT_0800edc4 + DAT_0800edc8) = bVar2 | 0x40;
      FUN_0800249c(199,0);
    }
    FUN_080025d8(199);
  }
  else {
    bVar2 = *(byte *)(DAT_0800edc4 + DAT_0800edf4);
    if ((bVar2 & 0x40) != 0) {
      *(byte *)(DAT_0800edc4 + DAT_0800edf4) = bVar2 ^ 0x40;
      FUN_08002624(199);
    }
  }
  return in_lr;
}


