// undefined FUN_0800d830(void)
// entry 0x800d830


void FUN_0800d830(void)

{
  byte bVar1;
  if ((*(byte *)(DAT_0800d87c + DAT_0800d880) & 0xf) == 0) {
    if ((*(ushort *)(DAT_0800d87c + DAT_0800d884) >> 8 == 3) &&
       ((*(ushort *)(DAT_0800d87c + DAT_0800d884) & 0xff) == 0)) {
      bVar1 = *(byte *)(DAT_0800d87c + DAT_0800d888);
      if ((bVar1 & 0x10) == 0) {
        *(byte *)(DAT_0800d87c + DAT_0800d888) = bVar1 | 0x10;
        FUN_0800249c(0xab,0);
      }
      FUN_080025d8(0xab);
    }
    else {
      bVar1 = *(byte *)(DAT_0800d8f0 + DAT_0800d8f4);
      if ((bVar1 & 0x10) != 0) {
        *(byte *)(DAT_0800d8f0 + DAT_0800d8f4) = bVar1 ^ 0x10;
        FUN_08002624(0xab);
      }
    }
    if ((*(ushort *)(DAT_0800d8f0 + DAT_0800d8f8) >> 8 == 3) &&
       ((*(ushort *)(DAT_0800d8f0 + DAT_0800d8f8) & 0xff) == 1)) {
      bVar1 = *(byte *)(DAT_0800d8f0 + DAT_0800d8f4);
      if ((bVar1 & 1) == 0) {
        *(byte *)(DAT_0800d8f0 + DAT_0800d8f4) = bVar1 | 1;
        FUN_0800249c(0x1c,0);
        FUN_0800249c(0xaa,0);
      }
      FUN_080025d8(0x1c);
      FUN_080025d8(0xaa);
    }
    else {
      bVar1 = *(byte *)(DAT_0800d968 + DAT_0800d96c);
      if ((bVar1 & 1) != 0) {
        *(byte *)(DAT_0800d968 + DAT_0800d96c) = bVar1 ^ 1;
        FUN_08002624(0x1c);
        FUN_08002624(0xaa);
      }
    }
  }
  if ((*(ushort *)(DAT_0800d968 + DAT_0800d970) >> 8 == 3) &&
     ((*(ushort *)(DAT_0800d968 + DAT_0800d970) & 0xff) == 3)) {
    bVar1 = *(byte *)(DAT_0800d968 + DAT_0800d96c);
    if ((bVar1 & 2) == 0) {
      *(byte *)(DAT_0800d968 + DAT_0800d96c) = bVar1 | 2;
      FUN_0800249c(0x1d,0);
      FUN_0800249c(0x1e,0);
    }
    FUN_080025d8(0x1d);
    FUN_080025d8(0x1e);
  }
  else {
    bVar1 = *(byte *)(DAT_0800d9ec + DAT_0800d9f0);
    if ((bVar1 & 2) != 0) {
      *(byte *)(DAT_0800d9ec + DAT_0800d9f0) = bVar1 ^ 2;
      FUN_08002624(0x1d);
      FUN_08002624(0x1e);
    }
  }
  if ((*(ushort *)(DAT_0800d9ec + DAT_0800d9f4) >> 8 == 3) &&
     ((*(ushort *)(DAT_0800d9ec + DAT_0800d9f4) & 0xff) == 4)) {
    bVar1 = *(byte *)(DAT_0800d9ec + DAT_0800d9f0);
    if ((bVar1 & 4) == 0) {
      *(byte *)(DAT_0800d9ec + DAT_0800d9f0) = bVar1 | 4;
      FUN_0800249c(0x1f,0);
      FUN_0800249c(0x20,0);
      FUN_0800249c(0x21,0);
    }
    FUN_080025d8(0x1f);
    FUN_080025d8(0x20);
    FUN_080025d8(0x21);
  }
  else {
    bVar1 = *(byte *)(DAT_0800da68 + DAT_0800da6c);
    if ((bVar1 & 4) != 0) {
      *(byte *)(DAT_0800da68 + DAT_0800da6c) = bVar1 ^ 4;
      FUN_08002624(0x1f);
      FUN_08002624(0x20);
      FUN_08002624(0x21);
    }
  }
  if ((*(ushort *)(DAT_0800da68 + DAT_0800da70) >> 8 == 3) &&
     ((*(ushort *)(DAT_0800da68 + DAT_0800da70) & 0xff) == 5)) {
    bVar1 = *(byte *)(DAT_0800da68 + DAT_0800da6c);
    if ((bVar1 & 8) == 0) {
      *(byte *)(DAT_0800da68 + DAT_0800da6c) = bVar1 | 8;
      FUN_0800249c(0x22,0);
      FUN_0800249c(0x23,0);
    }
    FUN_080025d8(0x22);
    FUN_080025d8(0x23);
  }
  else {
    bVar1 = *(byte *)(DAT_0800dac0 + DAT_0800dac4);
    if ((bVar1 & 8) != 0) {
      *(byte *)(DAT_0800dac0 + DAT_0800dac4) = bVar1 ^ 8;
      FUN_08002624(0x22);
      FUN_08002624(0x23);
    }
  }
  if ((*(ushort *)(DAT_0800dac0 + DAT_0800dac8) >> 8 == 3) &&
     ((*(ushort *)(DAT_0800dac0 + DAT_0800dac8) & 0xff) == 3)) {
    *(byte *)(DAT_0800dac0 + DAT_0800dacc) = *(byte *)(DAT_0800dac0 + DAT_0800dacc) + 1 & 7;
  }
  return;
}


