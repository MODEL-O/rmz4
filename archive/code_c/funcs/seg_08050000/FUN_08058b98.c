// undefined FUN_08058b98(void)
// entry 0x8058b98


undefined4 FUN_08058b98(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(DAT_08058bf4);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    FUN_0801cf00(param_1,DAT_08058bf8);
    uVar3 = (uint)*(byte *)(param_1 + 0xc0);
    *(char *)(param_1 + 0x4c) = (char)(uVar3 & 1);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar3 & 1) << 4);
    if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(uint *)(param_1 + 0x5c) = (uVar3 * -2 + 1) * 0x200;
    *(uint *)(param_1 + 100) = (uVar3 * 2 + -1) * 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_08058c94) * 4 + DAT_08058c90)) * 0x18 + DAT_08058c98);
  iVar2 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar2;
  if ((int)(iVar2 * (uVar3 * -2 + 1)) < 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  if ((*(int *)(param_1 + 0x5c) == 0) && (*(int *)(param_1 + 0x2c) == 0)) {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


