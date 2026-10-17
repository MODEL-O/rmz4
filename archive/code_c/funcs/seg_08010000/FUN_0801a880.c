// undefined FUN_0801a880(void)
// entry 0x801a880


undefined4 FUN_0801a880(int *param_1)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  ushort uVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  pbVar6 = (byte *)(DAT_0801a98c + DAT_0801a990);
  bVar1 = *pbVar6;
  *pbVar6 = bVar1 + 1;
  if (0x5f < (byte)(bVar1 + 1)) {
    *pbVar6 = 0;
  }
  if (((uint)(*param_1 + DAT_0801a994) <= DAT_0801a998) &&
     (cVar3 = FUN_08129050(((char)*pbVar6 + -4) * 0x1000000 >> 0x18,0x18), cVar3 == '\0')) {
    FUN_08002b10(DAT_0801a99c);
  }
  iVar2 = DAT_0801a98c;
  pbVar6 = (byte *)(DAT_0801a98c + DAT_0801a9a0);
  bVar1 = *pbVar6;
  *pbVar6 = bVar1 + 1;
  if (0xbf < (byte)(bVar1 + 1)) {
    *pbVar6 = 0;
  }
  *(int *)(iVar2 + DAT_0801a9a4) = *(int *)(iVar2 + DAT_0801a9a4) + 1;
  *(short *)(iVar2 + DAT_0801a9a8) = *(short *)(iVar2 + DAT_0801a9a8) + 1;
  pcVar5 = (char *)(iVar2 + DAT_0801a9ac);
  cVar3 = *pcVar5;
  *pcVar5 = cVar3 + '\x01';
  if ((char)(cVar3 + '\x01') == ' ') {
    *pcVar5 = '\0';
  }
  pcVar5 = (char *)(iVar2 + DAT_0801a9b0);
  cVar3 = *pcVar5;
  *pcVar5 = cVar3 + '\x01';
  if ((char)(cVar3 + '\x01') == '\x19') {
    *pcVar5 = '\0';
  }
  if ((*(ushort *)(iVar2 + DAT_0801a9b4) >> 8 == 0xf) &&
     ((*(ushort *)(iVar2 + DAT_0801a9b4) & 0xff) == 0)) {
    bVar1 = *(byte *)(iVar2 + DAT_0801a9b8);
    if ((bVar1 & 1) == 0) {
      *(byte *)(iVar2 + DAT_0801a9b8) = bVar1 | 1;
      FUN_0800249c(0x9e,0);
      FUN_0800249c(0x9f,0);
      FUN_0800249c(0xa0,0);
      FUN_0800249c(0xa1,0);
      FUN_0800249c(0xaf,0);
    }
    FUN_080025d8(0x9e);
    FUN_080025d8(0x9f);
    FUN_080025d8(0xa0);
    FUN_080025d8(0xa1);
    FUN_080025d8(0xaf);
  }
  else {
    bVar1 = *(byte *)(DAT_0801aa30 + DAT_0801aa34);
    if ((bVar1 & 1) != 0) {
      *(byte *)(DAT_0801aa30 + DAT_0801aa34) = bVar1 ^ 1;
      FUN_08002624(0x9e);
      FUN_08002624(0x9f);
      FUN_08002624(0xa0);
      FUN_08002624(0xa1);
      FUN_08002624(0xaf);
    }
  }
  if ((*(ushort *)(DAT_0801aa30 + DAT_0801aa38) >> 8 == 0xf) &&
     ((uVar4 = *(ushort *)(DAT_0801aa30 + DAT_0801aa38) & 0xff, uVar4 == 3 || (uVar4 == 6)))) {
    bVar1 = *(byte *)(DAT_0801aa30 + DAT_0801aa34);
    if ((bVar1 & 2) == 0) {
      *(byte *)(DAT_0801aa30 + DAT_0801aa34) = bVar1 | 2;
      FUN_0800249c(0xb0,0);
    }
    FUN_080025d8(0xb0);
  }
  else {
    bVar1 = *(byte *)(DAT_0801aab0 + DAT_0801aab4);
    if ((bVar1 & 2) != 0) {
      *(byte *)(DAT_0801aab0 + DAT_0801aab4) = bVar1 ^ 2;
      FUN_08002624(0xb0);
    }
  }
  if ((*(ushort *)(DAT_0801aab0 + DAT_0801aab8) >> 8 == 0xf) &&
     ((*(ushort *)(DAT_0801aab0 + DAT_0801aab8) & 0xff) == 3)) {
    bVar1 = *(byte *)(DAT_0801aab0 + DAT_0801aab4);
    if ((bVar1 & 4) == 0) {
      *(byte *)(DAT_0801aab0 + DAT_0801aab4) = bVar1 | 4;
      FUN_0800249c(0xa4,0);
      FUN_0800249c(0xa5,0);
      FUN_0800249c(0xb1,0);
    }
    FUN_080025d8(0xa4);
    FUN_080025d8(0xa5);
    FUN_080025d8(0xb1);
  }
  else {
    bVar1 = *(byte *)(DAT_0801ab48 + DAT_0801ab4c);
    if ((bVar1 & 4) != 0) {
      *(byte *)(DAT_0801ab48 + DAT_0801ab4c) = bVar1 ^ 4;
      FUN_08002624(0xa4);
      FUN_08002624(0xa5);
      FUN_08002624(0xb1);
    }
  }
  if ((*(ushort *)(DAT_0801ab48 + DAT_0801ab50) >> 8 == 0xf) &&
     ((*(ushort *)(DAT_0801ab48 + DAT_0801ab50) & 0xff) == 4)) {
    bVar1 = *(byte *)(DAT_0801ab48 + DAT_0801ab4c);
    if ((bVar1 & 8) == 0) {
      *(byte *)(DAT_0801ab48 + DAT_0801ab4c) = bVar1 | 8;
      FUN_0800249c(0x9e,0);
      FUN_0800249c(0x9f,0);
      FUN_0800249c(0xa2,0);
      FUN_0800249c(0xa3,0);
    }
    FUN_080025d8(0x9e);
    FUN_080025d8(0x9f);
    FUN_080025d8(0xa2);
    FUN_080025d8(0xa3);
  }
  else {
    bVar1 = *(byte *)(DAT_0801abb8 + DAT_0801abbc);
    if ((bVar1 & 8) != 0) {
      *(byte *)(DAT_0801abb8 + DAT_0801abbc) = bVar1 ^ 8;
      FUN_08002624(0x9e);
      FUN_08002624(0x9f);
      FUN_08002624(0xa2);
      FUN_08002624(0xa3);
    }
  }
  pcVar5 = (char *)(DAT_0801abc0 + DAT_0801abc4);
  if (*pcVar5 == '\x01') {
    bVar1 = *(byte *)(DAT_0801abb8 + DAT_0801abbc);
    if ((bVar1 & 0x80) == 0) {
      *(byte *)(DAT_0801abb8 + DAT_0801abbc) = bVar1 | 0x80;
      FUN_0800249c(0xc9,800);
    }
    FUN_080025d8(0xc9);
  }
  else {
    bVar1 = *(byte *)(DAT_0801abf0 + DAT_0801abf4);
    if ((bVar1 & 0x80) != 0) {
      *(byte *)(DAT_0801abf0 + DAT_0801abf4) = bVar1 ^ 0x80;
      FUN_08002624(0xc9);
      *pcVar5 = -1;
    }
  }
  return in_lr;
}


