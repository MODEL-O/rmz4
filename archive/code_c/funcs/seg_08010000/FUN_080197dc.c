// undefined FUN_080197dc(void)
// entry 0x80197dc


undefined4 FUN_080197dc(void)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  byte *pbVar7;
  ushort *puVar8;
  char *pcVar9;
  undefined4 in_lr;
  
  iVar4 = DAT_0801986c;
  puVar6 = (uint *)(DAT_0801986c + DAT_08019870);
  uVar5 = *puVar6;
  *puVar6 = uVar5 + 1;
  if (0x9f < uVar5 + 1) {
    *puVar6 = 0;
  }
  pbVar7 = (byte *)(iVar4 + DAT_08019874);
  bVar1 = *pbVar7;
  *pbVar7 = bVar1 + 1;
  if (0x1d < (byte)(bVar1 + 1)) {
    *pbVar7 = 0;
  }
  uVar2 = *(ushort *)(iVar4 + DAT_08019878);
  if ((uVar2 >> 8 == 0xe) && ((uVar2 & 0xff) == 0)) {
    uVar3 = *(ushort *)(iVar4 + DAT_0801987c);
    if ((uVar3 & 1) == 0) {
      *(ushort *)(iVar4 + DAT_0801987c) = uVar3 | 1;
      FUN_0800249c(0xb7,0);
      FUN_0800249c(0xb8,0);
      *(ushort *)(iVar4 + DAT_08019880) = uVar2 & 0xff;
    }
    puVar8 = (ushort *)(iVar4 + DAT_08019880);
    uVar3 = *puVar8;
    *puVar8 = uVar3 + 1;
    if (0x1f0 < (ushort)(uVar3 + 1)) {
      *puVar8 = uVar2 & 0xff;
    }
    FUN_080025d8(0xb7);
    FUN_080025d8(0xb8);
  }
  else {
    uVar2 = *(ushort *)(DAT_080198e0 + DAT_080198e4);
    if ((uVar2 & 1) != 0) {
      *(ushort *)(DAT_080198e0 + DAT_080198e4) = uVar2 ^ 1;
      FUN_08002624(0xb7);
      FUN_08002624(0xb8);
    }
  }
  if ((*(ushort *)(DAT_080198e0 + DAT_080198e8) >> 8 == 0xe) &&
     ((*(ushort *)(DAT_080198e0 + DAT_080198e8) & 0xff) == 1)) {
    uVar2 = *(ushort *)(DAT_080198e0 + DAT_080198e4);
    if ((uVar2 & 2) == 0) {
      *(ushort *)(DAT_080198e0 + DAT_080198e4) = uVar2 | 2;
      FUN_0800249c(0xb9,0);
    }
    FUN_080025d8(0xb9);
  }
  else {
    uVar2 = *(ushort *)(DAT_08019944 + DAT_08019948);
    if ((uVar2 & 2) != 0) {
      *(ushort *)(DAT_08019944 + DAT_08019948) = uVar2 ^ 2;
      FUN_08002624(0xb9);
    }
  }
  if ((*(ushort *)(DAT_08019944 + DAT_0801994c) >> 8 == 0xe) &&
     ((*(ushort *)(DAT_08019944 + DAT_0801994c) & 0xff) == 3)) {
    uVar2 = *(ushort *)(DAT_08019944 + DAT_08019948);
    if ((uVar2 & 4) == 0) {
      *(ushort *)(DAT_08019944 + DAT_08019948) = uVar2 | 4;
      FUN_0800249c(0xba,0);
    }
    FUN_080025d8(0xba);
  }
  else {
    uVar2 = *(ushort *)(DAT_080199a8 + DAT_080199ac);
    if ((uVar2 & 4) != 0) {
      *(ushort *)(DAT_080199a8 + DAT_080199ac) = uVar2 ^ 4;
      FUN_08002624(0xba);
    }
  }
  if ((*(ushort *)(DAT_080199a8 + DAT_080199b0) >> 8 == 0xe) &&
     ((*(ushort *)(DAT_080199a8 + DAT_080199b0) & 0xff) == 4)) {
    uVar2 = *(ushort *)(DAT_080199a8 + DAT_080199ac);
    if ((uVar2 & 8) == 0) {
      *(ushort *)(DAT_080199a8 + DAT_080199ac) = uVar2 | 8;
      FUN_0800249c(0xbb,0);
    }
    FUN_080025d8(0xbb);
  }
  else {
    uVar2 = *(ushort *)(DAT_08019a0c + DAT_08019a10);
    if ((uVar2 & 8) != 0) {
      *(ushort *)(DAT_08019a0c + DAT_08019a10) = uVar2 ^ 8;
      FUN_08002624(0xbb);
    }
  }
  if ((*(ushort *)(DAT_08019a0c + DAT_08019a14) >> 8 == 0xe) &&
     ((*(ushort *)(DAT_08019a0c + DAT_08019a14) & 0xff) == 5)) {
    uVar2 = *(ushort *)(DAT_08019a0c + DAT_08019a10);
    if ((uVar2 & 0x10) == 0) {
      *(ushort *)(DAT_08019a0c + DAT_08019a10) = uVar2 | 0x10;
      FUN_0800249c(0xbc,0);
    }
    FUN_080025d8(0xbc);
  }
  else {
    uVar2 = *(ushort *)(DAT_08019a70 + DAT_08019a74);
    if ((uVar2 & 0x10) != 0) {
      *(ushort *)(DAT_08019a70 + DAT_08019a74) = uVar2 ^ 0x10;
      FUN_08002624(0xbc);
    }
  }
  if ((*(ushort *)(DAT_08019a70 + DAT_08019a78) >> 8 == 0xe) &&
     ((*(ushort *)(DAT_08019a70 + DAT_08019a78) & 0xff) == 6)) {
    uVar2 = *(ushort *)(DAT_08019a70 + DAT_08019a74);
    if ((uVar2 & 0x20) == 0) {
      *(ushort *)(DAT_08019a70 + DAT_08019a74) = uVar2 | 0x20;
      FUN_0800249c(0xbd,0);
    }
    FUN_080025d8(0xbd);
  }
  else {
    uVar2 = *(ushort *)(DAT_08019ad4 + DAT_08019ad8);
    if ((uVar2 & 0x20) != 0) {
      *(ushort *)(DAT_08019ad4 + DAT_08019ad8) = uVar2 ^ 0x20;
      FUN_08002624(0xbd);
    }
  }
  if ((*(ushort *)(DAT_08019ad4 + DAT_08019adc) >> 8 == 0xe) &&
     ((*(ushort *)(DAT_08019ad4 + DAT_08019adc) & 0xff) == 7)) {
    uVar2 = *(ushort *)(DAT_08019ad4 + DAT_08019ad8);
    if ((uVar2 & 0x40) == 0) {
      *(ushort *)(DAT_08019ad4 + DAT_08019ad8) = uVar2 | 0x40;
      FUN_0800249c(0xbe,0);
    }
    FUN_080025d8(0xbe);
  }
  else {
    uVar2 = *(ushort *)(DAT_08019b38 + DAT_08019b3c);
    if ((uVar2 & 0x40) != 0) {
      *(ushort *)(DAT_08019b38 + DAT_08019b3c) = uVar2 ^ 0x40;
      FUN_08002624(0xbe);
    }
  }
  if ((*(ushort *)(DAT_08019b38 + DAT_08019b40) >> 8 == 0xe) &&
     ((*(ushort *)(DAT_08019b38 + DAT_08019b40) & 0xff) == 8)) {
    uVar2 = *(ushort *)(DAT_08019b38 + DAT_08019b3c);
    if ((uVar2 & 0x80) == 0) {
      *(ushort *)(DAT_08019b38 + DAT_08019b3c) = uVar2 | 0x80;
      FUN_0800249c(0xbf,0);
    }
    FUN_080025d8(0xbf);
  }
  else {
    uVar2 = *(ushort *)(DAT_08019ba0 + DAT_08019ba4);
    if ((uVar2 & 0x80) != 0) {
      *(ushort *)(DAT_08019ba0 + DAT_08019ba4) = uVar2 ^ 0x80;
      FUN_08002624(0xbf);
    }
  }
  if ((*(ushort *)(DAT_08019ba0 + DAT_08019ba8) >> 8 == 0xe) &&
     ((*(ushort *)(DAT_08019ba0 + DAT_08019ba8) & 0xff) == 9)) {
    uVar2 = *(ushort *)(DAT_08019ba0 + DAT_08019ba4);
    if ((uVar2 & 0x100) == 0) {
      *(ushort *)(DAT_08019ba0 + DAT_08019ba4) = uVar2 | 0x100;
      FUN_0800249c(0xc0,0);
    }
    FUN_080025d8(0xc0);
  }
  else {
    uVar2 = *(ushort *)(DAT_08019c0c + DAT_08019c10);
    if ((uVar2 & 0x100) != 0) {
      *(ushort *)(DAT_08019c0c + DAT_08019c10) = uVar2 ^ 0x100;
      FUN_08002624(0xc0);
    }
  }
  if ((*(ushort *)(DAT_08019c0c + DAT_08019c14) >> 8 == 0xe) &&
     ((*(ushort *)(DAT_08019c0c + DAT_08019c14) & 0xff) == 10)) {
    uVar2 = *(ushort *)(DAT_08019c0c + DAT_08019c10);
    if ((uVar2 & 0x200) == 0) {
      *(ushort *)(DAT_08019c0c + DAT_08019c10) = uVar2 | 0x200;
      FUN_0800249c(0xc3,0);
    }
    FUN_080025d8(0xc3);
  }
  else {
    uVar2 = *(ushort *)(DAT_08019c70 + DAT_08019c74);
    if ((uVar2 & 0x200) != 0) {
      *(ushort *)(DAT_08019c70 + DAT_08019c74) = uVar2 ^ 0x200;
      FUN_08002624(0xc3);
    }
  }
  pcVar9 = (char *)(DAT_08019c78 + DAT_08019c7c);
  if (*pcVar9 == '\0') {
    uVar2 = *(ushort *)(DAT_08019c70 + DAT_08019c74);
    if ((uVar2 & 0x800) == 0) {
      *(ushort *)(DAT_08019c70 + DAT_08019c74) = uVar2 | 0x800;
      FUN_0800249c(0xca,0x2e0);
    }
    FUN_080025d8(0xca);
  }
  else {
    uVar2 = *(ushort *)(DAT_08019cac + DAT_08019cb0);
    if ((uVar2 & 0x800) != 0) {
      *(ushort *)(DAT_08019cac + DAT_08019cb0) = uVar2 ^ 0x800;
      FUN_08002624(0xca);
      *pcVar9 = -1;
    }
  }
  return in_lr;
}


