// undefined FUN_0805a5dc(void)
// entry 0x805a5dc


undefined4 FUN_0805a5dc(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0xb8);
    FUN_08005784(param_1 + 0x74,DAT_0805a630);
    uVar3 = (bVar1 >> 4 & 1) + 1 & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    if (uVar3 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(undefined4 *)(param_1 + 0x5c) = 0x240;
    *(uint *)(param_1 + 0x68) = uVar3 * 2 + -1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x68) * *(int *)(param_1 + 0x5c);
  iVar2 = FUN_0805c3a8(param_1);
  if (0x1e000 < (iVar2 - *(int *)(param_1 + 0x54)) + 0x16800U) {
    *(undefined1 *)(param_1 + 0xe) = 4;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


