// undefined FUN_080583dc(void)
// entry 0x80583dc


undefined4 FUN_080583dc(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(int *)(param_1 + 0x54) < *(int *)(DAT_08058400 + 0x38)) {
      *(undefined4 *)(param_1 + 0x5c) = DAT_08058404;
    }
    else if (*(int *)(DAT_08058400 + 0x38) < *(int *)(param_1 + 0x54)) {
      *(undefined4 *)(param_1 + 0x5c) = 0x300;
    }
    else {
      uVar2 = *DAT_08058450 * DAT_08058454 + DAT_08058458;
      *DAT_08058450 = uVar2 & 0x7fffffff;
      *(uint *)(param_1 + 0x5c) = (((uVar2 & 0x7fffffff) >> 0x10 & 2) - 1) * 0x300;
    }
    if (uVar4 == -(*(int *)(param_1 + 0x5c) >> 0x1f)) {
      FUN_0801cf00(param_1,DAT_0805845c);
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
    else {
      FUN_0801cf00(param_1,DAT_080584c0);
      *(undefined1 *)(param_1 + 0x12) = 1;
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if ((*(char *)(param_1 + 0x12) != '\0') && (*(char *)(param_1 + 0x73) == '\x03')) {
    FUN_0801cf00(param_1,DAT_080584c4);
    uVar4 = uVar4 + 1 & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    if (uVar4 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_0805854c) * 4 + DAT_08058548)) * 0x18 + DAT_08058550);
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  if (0x19000 < (uint)((iVar3 - *(int *)(param_1 + 0xcc)) + DAT_08058554)) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(undefined1 *)(param_1 + 0xe) = 1;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}


