// undefined FUN_08082708(void)
// entry 0x8082708


undefined4 FUN_08082708(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0xbe) = 0;
    FUN_0801cf00(param_1,DAT_08082758);
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar4 = DAT_080827d4;
  if (*(byte *)(param_1 + 0x13) < 9) {
    FUN_08005784(param_1 + 0x74,
                 (uint)*(byte *)((uint)*(byte *)(param_1 + 0x13) + DAT_080827d4) * 0x18 +
                 DAT_080827d8);
    *(undefined1 *)(param_1 + 0xbe) = *(undefined1 *)((uint)*(byte *)(param_1 + 0x13) + iVar4);
  }
  else {
    FUN_08005784(param_1 + 0x74,DAT_0808275c);
    *(undefined1 *)(param_1 + 0xbe) = 4;
  }
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  uVar2 = FUN_0808368c(param_1,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
  if ((uVar2 & 1) != 0) {
    FUN_08002b10(DAT_080827dc);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  if ((uVar2 & 2) != 0) {
    bVar1 = *(byte *)(param_1 + 10);
    bVar5 = ~(bVar1 >> 4) & 1;
    if (bVar5 == 0) {
      bVar1 = bVar1 & 0xef;
    }
    else {
      bVar1 = bVar1 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4c) = bVar5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar5 << 4;
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
  }
  if ((*(char *)(param_1 + 0x12) == '\0') || (*(char *)(param_1 + 0x73) != '\x03')) {
    if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
      iVar4 = FUN_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      iVar4 = *(int *)(param_1 + 0x58) - iVar4;
    }
    else {
      iVar4 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      iVar4 = iVar4 - *(int *)(param_1 + 0x58);
    }
    if (iVar4 <= DAT_080828f4) {
      iVar4 = *(int *)(param_1 + 0x5c) * 0xf0;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      *(int *)(param_1 + 0x5c) = iVar4 >> 8;
      iVar4 = *(int *)(param_1 + 0x60) * 0xf0;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      *(int *)(param_1 + 0x60) = iVar4 >> 8;
    }
    FUN_0801cff0(param_1);
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    bVar1 = *(byte *)(param_1 + 10);
    if ((bVar1 & 0x20) == 0) {
      iVar3 = *(int *)(param_1 + 0x58);
      iVar4 = DAT_08082848;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x58);
      iVar4 = 0x2f00;
    }
    *(int *)(param_1 + 0x58) = iVar3 + iVar4;
    bVar5 = ~(bVar1 >> 5) & 1;
    if (bVar5 == 0) {
      bVar1 = bVar1 & 0xdf;
    }
    else {
      bVar1 = bVar1 | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4d) = bVar5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | bVar5 << 5;
    FUN_08005784(param_1 + 0x74,DAT_0808288c);
    FUN_0801cf00(param_1,0x1600);
    *(undefined1 *)(param_1 + 0xbe) = 0;
    FUN_0801cff0(param_1);
  }
  return in_lr;
}


