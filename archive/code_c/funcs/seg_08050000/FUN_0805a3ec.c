// undefined FUN_0805a3ec(void)
// entry 0x805a3ec


undefined4 FUN_0805a3ec(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar2 = (uint)*(byte *)(param_1 + 0xcf);
  if (uVar2 != 0xff) {
    *(char *)(param_1 + 0x4c) = (char)(uVar2 & 1);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar2 & 1) << 4);
    if ((*(byte *)(param_1 + 0xcf) & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    iVar3 = FUN_0805c3a8(param_1);
    *(uint *)(param_1 + 0x54) = iVar3 + (uVar2 * 2 + -1) * -0xf000 + 0x7800;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb4) + DAT_0805a47c;
    *(undefined1 *)(param_1 + 0xcf) = 0xff;
  }
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)(DAT_0805a480 + 4));
  return in_lr;
}


