// undefined FUN_080158a8(void)
// entry 0x80158a8


undefined4 FUN_080158a8(void)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  short *psVar7;
  char *pcVar8;
  byte *pbVar9;
  undefined4 in_lr;
  
  iVar2 = DAT_08015964;
  *(int *)(DAT_08015964 + DAT_08015968) = *(int *)(DAT_08015964 + DAT_08015968) + 1;
  if ((*(byte *)(iVar2 + DAT_0801596c) & 1) != 0) {
    psVar7 = (short *)(iVar2 + DAT_08015970);
    if (*psVar7 != 0) {
      *psVar7 = *psVar7 + -0x10;
    }
  }
  uVar1 = *(ushort *)(iVar2 + DAT_08015974);
  if ((uVar1 >> 8 == 10) && ((uVar1 & 0xff) == 0)) {
    pcVar8 = (char *)(iVar2 + DAT_08015978);
    cVar3 = *pcVar8;
    *pcVar8 = cVar3 + '\x01';
    if ((char)(cVar3 + '\x01') == '\x10') {
      *pcVar8 = (char)uVar1;
    }
  }
  if ((*(byte *)(iVar2 + DAT_0801597c) & 0xf) == 2) {
    if ((*(ushort *)(iVar2 + DAT_08015974) >> 8 == 10) &&
       ((*(ushort *)(iVar2 + DAT_08015974) & 0xff) == 0)) {
      bVar6 = *(byte *)(iVar2 + DAT_08015980);
      if ((bVar6 & 1) == 0) {
        *(byte *)(iVar2 + DAT_08015980) = bVar6 | 1;
        FUN_0800249c(0x61,0);
        FUN_0800249c(99,0);
        FUN_0800249c(0x65,0);
      }
      FUN_080025d8(0x61);
      FUN_080025d8(99);
      FUN_080025d8(0x65);
    }
    else {
      bVar6 = *(byte *)(DAT_080159e8 + DAT_080159ec);
      if ((bVar6 & 1) != 0) {
        *(byte *)(DAT_080159e8 + DAT_080159ec) = bVar6 ^ 1;
        FUN_08002624(0x61);
        FUN_08002624(99);
        FUN_08002624(0x65);
      }
    }
    if ((*(ushort *)(DAT_080159e8 + DAT_080159f0) >> 8 == 10) &&
       ((*(ushort *)(DAT_080159e8 + DAT_080159f0) & 0xff) == 2)) {
      bVar6 = *(byte *)(DAT_080159e8 + DAT_080159ec);
      if ((bVar6 & 0x10) == 0) {
        *(byte *)(DAT_080159e8 + DAT_080159ec) = bVar6 | 0x10;
        FUN_0800249c(0x65,0);
      }
      FUN_080025d8(0x65);
    }
    else {
      bVar6 = *(byte *)(DAT_08015a14 + DAT_08015a18);
      if ((bVar6 & 0x10) != 0) {
        *(byte *)(DAT_08015a14 + DAT_08015a18) = bVar6 ^ 0x10;
        FUN_08002624(0x65);
      }
    }
  }
  else {
    if ((*(ushort *)(iVar2 + DAT_08015a80) >> 8 == 10) &&
       ((*(ushort *)(iVar2 + DAT_08015a80) & 0xff) == 0)) {
      bVar6 = *(byte *)(iVar2 + DAT_08015a84);
      if ((bVar6 & 1) == 0) {
        *(byte *)(iVar2 + DAT_08015a84) = bVar6 | 1;
        FUN_0800249c(0x60,0);
        FUN_0800249c(0x61,0);
        FUN_0800249c(0x62,0);
        FUN_0800249c(100,0);
      }
      FUN_080025d8(0x60);
      FUN_080025d8(0x61);
      FUN_080025d8(0x62);
      FUN_080025d8(100);
    }
    else {
      bVar6 = *(byte *)(DAT_08015af0 + DAT_08015af4);
      if ((bVar6 & 1) != 0) {
        *(byte *)(DAT_08015af0 + DAT_08015af4) = bVar6 ^ 1;
        FUN_08002624(0x60);
        FUN_08002624(0x61);
        FUN_08002624(0x62);
        FUN_08002624(100);
      }
    }
    if ((*(ushort *)(DAT_08015af0 + DAT_08015af8) >> 8 == 10) &&
       ((*(ushort *)(DAT_08015af0 + DAT_08015af8) & 0xff) == 2)) {
      bVar6 = *(byte *)(DAT_08015af0 + DAT_08015af4);
      if ((bVar6 & 0x10) == 0) {
        *(byte *)(DAT_08015af0 + DAT_08015af4) = bVar6 | 0x10;
        FUN_0800249c(100,0);
      }
      FUN_080025d8(100);
    }
    else {
      bVar6 = *(byte *)(DAT_08015b74 + DAT_08015b78);
      if ((bVar6 & 0x10) != 0) {
        *(byte *)(DAT_08015b74 + DAT_08015b78) = bVar6 ^ 0x10;
        FUN_08002624(100);
      }
    }
  }
  if ((*(ushort *)(DAT_08015b74 + DAT_08015b7c) >> 8 == 10) &&
     ((*(ushort *)(DAT_08015b74 + DAT_08015b7c) & 0xff) == 1)) {
    bVar6 = *(byte *)(DAT_08015b74 + DAT_08015b78);
    if ((bVar6 & 2) == 0) {
      *(byte *)(DAT_08015b74 + DAT_08015b78) = bVar6 | 2;
      FUN_0800249c(0x66,0);
      FUN_0800249c(0x67,0);
    }
    FUN_080025d8(0x66);
    FUN_080025d8(0x67);
    FUN_080025d8(0x67);
    FUN_080025d8(0x67);
    FUN_080025d8(0x67);
  }
  else {
    bVar6 = *(byte *)(DAT_08015bdc + DAT_08015be0);
    if ((bVar6 & 2) != 0) {
      *(byte *)(DAT_08015bdc + DAT_08015be0) = bVar6 ^ 2;
      FUN_08002624(0x66);
      FUN_08002624(0x67);
    }
  }
  if ((*(ushort *)(DAT_08015bdc + DAT_08015be4) >> 8 == 10) &&
     ((*(ushort *)(DAT_08015bdc + DAT_08015be4) & 0xff) == 3)) {
    bVar6 = *(byte *)(DAT_08015bdc + DAT_08015be0);
    if ((bVar6 & 4) == 0) {
      *(byte *)(DAT_08015bdc + DAT_08015be0) = bVar6 | 4;
      FUN_0800249c(0x6f,0);
    }
    FUN_080025d8(0x6f);
  }
  else {
    bVar6 = *(byte *)(DAT_08015c60 + DAT_08015c64);
    if ((bVar6 & 4) != 0) {
      *(byte *)(DAT_08015c60 + DAT_08015c64) = bVar6 ^ 4;
      FUN_08002624(0x6f);
    }
  }
  if ((*(ushort *)(DAT_08015c60 + DAT_08015c68) >> 8 == 10) &&
     ((*(ushort *)(DAT_08015c60 + DAT_08015c68) & 0xff) == 4)) {
    bVar6 = *(byte *)(DAT_08015c60 + DAT_08015c64);
    if ((bVar6 & 8) == 0) {
      *(byte *)(DAT_08015c60 + DAT_08015c64) = bVar6 | 8;
      FUN_0800249c(0x67,0);
      FUN_0800249c(0x70,0);
    }
    FUN_080025d8(0x67);
    FUN_080025d8(0x67);
    FUN_080025d8(0x67);
    FUN_080025d8(0x67);
    FUN_080025d8(0x70);
  }
  else {
    bVar6 = *(byte *)(DAT_08015d04 + DAT_08015d08);
    if ((bVar6 & 8) != 0) {
      *(byte *)(DAT_08015d04 + DAT_08015d08) = bVar6 ^ 8;
      FUN_08002624(0x67);
      FUN_08002624(0x70);
    }
  }
  if ((((*(ushort *)(DAT_08015d04 + DAT_08015d0c) >> 8 == 10) &&
       ((*(ushort *)(DAT_08015d04 + DAT_08015d0c) & 0xff) == 2)) &&
      (*(ushort *)(DAT_08015d04 + DAT_08015d10) >> 8 == 10)) &&
     ((*(ushort *)(DAT_08015d04 + DAT_08015d10) & 0xff) == 3)) {
    cVar3 = *(char *)(DAT_08015d04 + DAT_08015d14);
    if (cVar3 == '\0') {
      bVar6 = *(byte *)(DAT_08015d04 + DAT_08015d18);
      if ((bVar6 & 1) == 0) {
        *(byte *)(DAT_08015d04 + DAT_08015d18) = bVar6 | 1;
        FUN_0800249c(0x68,0);
        FUN_0800249c(0x6b,0);
      }
      FUN_080025d8(0x68);
      FUN_080025d8(0x6b);
    }
    else {
      if (cVar3 == '\x10') {
        pbVar9 = (byte *)(DAT_08015d04 + DAT_08015d40);
        bVar6 = *pbVar9;
        if ((bVar6 & 1) == 0) {
          if ((bVar6 & 2) == 0) {
            *pbVar9 = bVar6 | 2;
            FUN_0800249c(0x69,0);
            FUN_0800249c(0x6c,0);
          }
          FUN_080025d8(0x69);
          FUN_080025d8(0x6c);
          return in_lr;
        }
        FUN_08002624(0x68);
        FUN_08002624(0x6b);
        bVar5 = *pbVar9;
        bVar6 = 1;
      }
      else {
        if ((byte)(cVar3 - 0x20U) < 0x10) {
          pbVar9 = (byte *)(DAT_08015d04 + DAT_08015d94);
          bVar6 = *pbVar9;
          if ((bVar6 & 2) == 0) {
            if ((bVar6 & 4) == 0) {
              *pbVar9 = bVar6 | 4;
              FUN_0800249c(0x6d,0);
            }
            FUN_080025d8(0x6d);
          }
          else {
            FUN_08002624(0x6c);
            *pbVar9 = *pbVar9 ^ 2;
          }
          FUN_080025d8(0x69);
          return in_lr;
        }
        if (cVar3 == '0') {
          pbVar9 = (byte *)(DAT_08015d04 + DAT_08015de4);
          bVar6 = *pbVar9;
          if ((bVar6 & 4) != 0) {
            FUN_08002624(0x69);
            FUN_08002624(0x6d);
            *pbVar9 = *pbVar9 ^ 4;
            return in_lr;
          }
          if ((bVar6 & 0x18) == 0) {
            *pbVar9 = bVar6 | 8;
            FUN_0800249c(0x6a,0);
            FUN_0800249c(0x6e,0);
          }
          if ((*pbVar9 & 0x10) != 0) {
            return in_lr;
          }
          cVar3 = FUN_080025d8(0x6a);
          cVar4 = FUN_080025d8(0x6e);
          if (cVar3 == '\x03') {
            FUN_08002624(0x6a);
          }
          if (cVar4 == '\x03') {
            FUN_08002624(0x6e);
          }
          if (cVar3 != '\x03') {
            return in_lr;
          }
          if (cVar4 != '\x03') {
            return in_lr;
          }
          *pbVar9 = *pbVar9 ^ 8 | 0x10;
          return in_lr;
        }
        pbVar9 = (byte *)(DAT_08015d04 + DAT_08015ee8);
        if (*pbVar9 == 0) {
          return in_lr;
        }
        if ((*pbVar9 & 1) != 0) {
          FUN_08002624(0x68);
          FUN_08002624(0x6b);
          *pbVar9 = *pbVar9 ^ 1;
        }
        if ((*pbVar9 & 2) != 0) {
          FUN_08002624(0x69);
          FUN_08002624(0x6c);
          *pbVar9 = *pbVar9 ^ 2;
        }
        if ((*pbVar9 & 4) != 0) {
          FUN_08002624(0x69);
          FUN_08002624(0x6d);
          *pbVar9 = *pbVar9 ^ 4;
        }
        if ((*pbVar9 & 8) != 0) {
          FUN_08002624(0x6a);
          FUN_08002624(0x6e);
          *pbVar9 = *pbVar9 ^ 8;
        }
        bVar6 = *pbVar9;
        if ((bVar6 & 0x10) == 0) {
          return in_lr;
        }
        bVar5 = 0x10;
      }
      *pbVar9 = bVar5 ^ bVar6;
    }
  }
  else {
    pbVar9 = (byte *)(DAT_08015d04 + DAT_08015f84);
    if (*pbVar9 != 0) {
      if ((*pbVar9 & 1) != 0) {
        FUN_08002624(0x68);
        FUN_08002624(0x6b);
        *pbVar9 = *pbVar9 ^ 1;
      }
      if ((*pbVar9 & 2) != 0) {
        FUN_08002624(0x69);
        FUN_08002624(0x6c);
        *pbVar9 = *pbVar9 ^ 2;
      }
      if ((*pbVar9 & 4) != 0) {
        FUN_08002624(0x69);
        FUN_08002624(0x6d);
        *pbVar9 = *pbVar9 ^ 4;
      }
      if ((*pbVar9 & 8) != 0) {
        FUN_08002624(0x6a);
        FUN_08002624(0x6e);
        *pbVar9 = *pbVar9 ^ 8;
      }
      if ((*pbVar9 & 0x10) != 0) {
        *pbVar9 = *pbVar9 ^ 0x10;
      }
    }
  }
  return in_lr;
}


