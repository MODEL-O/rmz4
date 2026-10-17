// undefined FUN_0801b184(void)
// entry 0x801b184


undefined4 FUN_0801b184(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  ushort *puVar6;
  int *piVar7;
  undefined4 in_lr;
  
  iVar3 = DAT_0801b2b8;
  iVar4 = DAT_0801b1f0;
  if ((*(char *)(DAT_0801b1f0 + DAT_0801b1f4) == '\x01') &&
     (piVar7 = (int *)(DAT_0801b1f0 + DAT_0801b1f8), *piVar7 == 0)) {
    *(undefined2 *)(DAT_0801b1fc + 0xce) = 0x360;
    puVar6 = (ushort *)(DAT_0801b200 + 0xce);
    *puVar6 = 7;
    FUN_08001d30(DAT_0801b204,(0x360 - (uint)(*(ushort *)(DAT_0801b204 + 6) >> 6)) * 0x20 + 0x10000)
    ;
    FUN_08002208(DAT_0801b208,((uint)*puVar6 - (uint)*(byte *)(DAT_0801b208 + 7)) * 0x20 + 0x200);
    iVar4 = FUN_08101cf8(iVar4 + DAT_0801b20c);
    *piVar7 = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 0x54) = *(int *)(iVar4 + 0x54) + DAT_0801b210;
    }
  }
  else {
    pcVar5 = (char *)(DAT_0801b2b8 + DAT_0801b2bc);
    if ((*pcVar5 == '\x02') &&
       ((iVar4 = *(int *)(DAT_0801b2b8 + DAT_0801b2c0) + -1,
        *(int *)(DAT_0801b2b8 + DAT_0801b2c0) = iVar4, iVar4 == 0 ||
        ((*(ushort *)(DAT_0801b2c4 + 8) & 0x10) != 0)))) {
      *(undefined1 *)(*(int *)(iVar3 + DAT_0801b2c8) + 0xd) = 1;
      *pcVar5 = '\0';
    }
  }
  iVar4 = DAT_0801b2b8;
  *(short *)(DAT_0801b2b8 + DAT_0801b2cc) = *(short *)(DAT_0801b2b8 + DAT_0801b2cc) + 1;
  if (*(ushort *)(iVar4 + DAT_0801b2d0) >> 8 == 0x10) {
    if ((*(ushort *)(iVar4 + DAT_0801b2d0) & 0xff) == 6) {
      pcVar5 = (char *)(iVar4 + DAT_0801b2d4);
      cVar1 = *pcVar5;
      *pcVar5 = cVar1 + '\x01';
      if ((char)(cVar1 + '\x01') == '\b') {
        *pcVar5 = '\0';
      }
    }
    if ((*(ushort *)(iVar4 + DAT_0801b2d0) >> 8 == 0x10) &&
       ((*(ushort *)(iVar4 + DAT_0801b2d0) & 0xff) == 0)) {
      bVar2 = *(byte *)(iVar4 + DAT_0801b2d8);
      if ((bVar2 & 1) == 0) {
        *(byte *)(iVar4 + DAT_0801b2d8) = bVar2 | 1;
        FUN_0800249c(0x8a,0);
      }
      FUN_080025d8(0x8a);
      goto LAB_0801b2f8;
    }
  }
  bVar2 = *(byte *)(DAT_0801b35c + DAT_0801b360);
  if ((bVar2 & 1) != 0) {
    *(byte *)(DAT_0801b35c + DAT_0801b360) = bVar2 ^ 1;
    FUN_08002624(0x8a);
  }
LAB_0801b2f8:
  if ((*(ushort *)(DAT_0801b35c + DAT_0801b364) >> 8 == 0x10) &&
     ((*(ushort *)(DAT_0801b35c + DAT_0801b364) & 0xff) == 1)) {
    bVar2 = *(byte *)(DAT_0801b35c + DAT_0801b360);
    if ((bVar2 & 2) == 0) {
      *(byte *)(DAT_0801b35c + DAT_0801b360) = bVar2 | 2;
      FUN_0800249c(0x8b,0);
      FUN_0800249c(0x8c,0);
      FUN_0800249c(0x8d,0);
      FUN_0800249c(0x8e,0);
    }
    FUN_080025d8(0x8b);
    FUN_080025d8(0x8c);
    FUN_080025d8(0x8d);
    FUN_080025d8(0x8e);
  }
  else {
    bVar2 = *(byte *)(DAT_0801b3d0 + DAT_0801b3d4);
    if ((bVar2 & 2) != 0) {
      *(byte *)(DAT_0801b3d0 + DAT_0801b3d4) = bVar2 ^ 2;
      FUN_08002624(0x8b);
      FUN_08002624(0x8c);
      FUN_08002624(0x8d);
      FUN_08002624(0x8e);
    }
  }
  if ((*(ushort *)(DAT_0801b3d0 + DAT_0801b3d8) >> 8 == 0x10) &&
     ((*(ushort *)(DAT_0801b3d0 + DAT_0801b3d8) & 0xff) == 2)) {
    bVar2 = *(byte *)(DAT_0801b3d0 + DAT_0801b3d4);
    if ((bVar2 & 4) == 0) {
      *(byte *)(DAT_0801b3d0 + DAT_0801b3d4) = bVar2 | 4;
      FUN_0800249c(0x8f,0);
    }
    FUN_080025d8(0x8f);
  }
  else {
    bVar2 = *(byte *)(DAT_0801b440 + DAT_0801b444);
    if ((bVar2 & 4) != 0) {
      *(byte *)(DAT_0801b440 + DAT_0801b444) = bVar2 ^ 4;
      FUN_08002624(0x8f);
    }
  }
  if ((*(ushort *)(DAT_0801b440 + DAT_0801b448) >> 8 == 0x10) &&
     ((*(ushort *)(DAT_0801b440 + DAT_0801b448) & 0xff) == 3)) {
    bVar2 = *(byte *)(DAT_0801b440 + DAT_0801b444);
    if ((bVar2 & 8) == 0) {
      *(byte *)(DAT_0801b440 + DAT_0801b444) = bVar2 | 8;
      FUN_0800249c(0x90,0);
      FUN_0800249c(0x93,0);
    }
    FUN_080025d8(0x90);
    FUN_080025d8(0x93);
  }
  else {
    bVar2 = *(byte *)(DAT_0801b4a8 + DAT_0801b4ac);
    if ((bVar2 & 8) != 0) {
      *(byte *)(DAT_0801b4a8 + DAT_0801b4ac) = bVar2 ^ 8;
      FUN_08002624(0x90);
      FUN_08002624(0x93);
    }
  }
  if ((*(ushort *)(DAT_0801b4a8 + DAT_0801b4b0) >> 8 == 0x10) &&
     ((*(ushort *)(DAT_0801b4a8 + DAT_0801b4b0) & 0xff) == 5)) {
    bVar2 = *(byte *)(DAT_0801b4a8 + DAT_0801b4ac);
    if ((bVar2 & 0x10) == 0) {
      *(byte *)(DAT_0801b4a8 + DAT_0801b4ac) = bVar2 | 0x10;
      FUN_0800249c(0x91,0);
    }
    FUN_080025d8(0x91);
  }
  else {
    bVar2 = *(byte *)(DAT_0801b50c + DAT_0801b510);
    if ((bVar2 & 0x10) != 0) {
      *(byte *)(DAT_0801b50c + DAT_0801b510) = bVar2 ^ 0x10;
      FUN_08002624(0x91);
    }
  }
  if ((*(ushort *)(DAT_0801b50c + DAT_0801b514) >> 8 == 0x10) &&
     ((*(ushort *)(DAT_0801b50c + DAT_0801b514) & 0xff) == 7)) {
    bVar2 = *(byte *)(DAT_0801b50c + DAT_0801b510);
    if ((bVar2 & 0x20) == 0) {
      *(byte *)(DAT_0801b50c + DAT_0801b510) = bVar2 | 0x20;
      FUN_0800249c(0x92,0);
    }
    FUN_080025d8(0x92);
  }
  else {
    bVar2 = *(byte *)(DAT_0801b588 + DAT_0801b58c);
    if ((bVar2 & 0x20) != 0) {
      *(byte *)(DAT_0801b588 + DAT_0801b58c) = bVar2 ^ 0x20;
      FUN_08002624(0x92);
    }
  }
  if ((((*(ushort *)(DAT_0801b588 + DAT_0801b590) >> 8 == 0x10) &&
       ((*(ushort *)(DAT_0801b588 + DAT_0801b590) & 0xff) == 6)) &&
      (*(ushort *)(DAT_0801b588 + DAT_0801b594) >> 8 == 0x10)) &&
     ((*(ushort *)(DAT_0801b588 + DAT_0801b594) & 0xff) == 8)) {
    bVar2 = *(byte *)(DAT_0801b588 + DAT_0801b58c);
    if ((bVar2 & 0x40) == 0) {
      *(byte *)(DAT_0801b588 + DAT_0801b58c) = bVar2 | 0x40;
      FUN_0800249c(0xc6,0);
    }
    FUN_080025d8(0xc6);
  }
  else {
    bVar2 = *(byte *)(DAT_0801b588 + DAT_0801b5b8);
    if ((bVar2 & 0x40) != 0) {
      *(byte *)(DAT_0801b588 + DAT_0801b5b8) = bVar2 ^ 0x40;
      FUN_08002624(0xc6);
    }
  }
  return in_lr;
}


