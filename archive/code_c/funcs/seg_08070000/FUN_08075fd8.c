// undefined FUN_08075fd8(void)
// entry 0x8075fd8


undefined4 FUN_08075fd8(int param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08076024);
    FUN_08005784(param_1 + 0x74,DAT_08076028);
    bVar3 = *(byte *)(param_1 + 0xda) + 1 & 1;
    *(byte *)(param_1 + 0xda) = bVar3;
    if (bVar3 == 0) {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*DAT_08076050 + 0x54);
      *(undefined1 *)(param_1 + 0xd) = 0x11;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (*(int *)(param_1 + 0xcc) < *(int *)(*DAT_0807602c + 0x54)) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 200) + DAT_08076030;
    }
    else {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xc4) + 0x5000;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + DAT_08076168;
    *(undefined4 *)(param_1 + 0x60) = 0;
    bVar3 = 0;
    do {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x20;
      bVar3 = bVar3 + 1;
    } while (bVar3 < 0x30);
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0x30;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x13) != '\0') {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar6 = *(int *)(param_1 + 0xd0);
    iVar5 = FUN_08129198(iVar6,6);
    *(int *)(param_1 + 0xd0) = iVar6 + 1;
    iVar2 = DAT_08076170;
    iVar6 = DAT_0807616c;
    if (iVar5 == 0) {
      iVar5 = *(short *)(DAT_0807616c + 0xc0) * 0x14;
      local_1c = *(int *)(param_1 + 0x54) + iVar5;
      local_18 = *(int *)(param_1 + 0x58) + *(short *)(DAT_0807616c + 0x40) * 0x14 + DAT_08076170;
      FUN_080cbfd4(param_1,&local_1c,2,'0' - *(char *)(param_1 + 0x13));
      local_1c = *(int *)(param_1 + 0x54) + *(short *)(iVar6 + 0x140) * 0x14;
      local_18 = *(int *)(param_1 + 0x58) + iVar5 + iVar2;
      FUN_080cbfd4(param_1,&local_1c,2,*(char *)(param_1 + 0x13) + 'P');
    }
  }
  iVar6 = *DAT_08076174;
  *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(iVar6 + 0x54);
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar6 + 0x54);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (bVar1) {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar3;
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar6 = *(int *)(param_1 + 0x60) + -0x20;
    *(int *)(param_1 + 0x60) = iVar6;
    if (iVar6 < 1) {
      if (*(char *)(param_1 + 0xda) != '\0') {
        FUN_08002b10(0xda);
      }
      *(undefined1 *)(param_1 + 0x12) = 0x20;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    cVar4 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar4;
    if ((cVar4 == -1) && (*(char *)(param_1 + 0xda) != '\0')) {
      *(undefined1 *)(param_1 + 0xd) = 0x13;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


