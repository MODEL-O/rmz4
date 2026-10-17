// undefined FUN_080131e8(void)
// entry 0x80131e8


undefined4 FUN_080131e8(int param_1)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar1 = DAT_08013244;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    uVar4 = *(uint *)(param_1 + 0x60) | *(uint *)(param_1 + 100);
    *(ushort *)(uVar2 * 2 + DAT_08013244) = (ushort)uVar4 | 0x44;
    *(undefined4 *)(uVar2 * 4 + iVar1 + 8) = 0;
    if ((*(byte *)(DAT_08013248 + DAT_0801324c) & 0xf) == 0) {
      FUN_08128be0(*DAT_08013250 + DAT_08013254,(uVar4 & 0x1f00) * 8 + 0x6000000,0x200);
    }
    else {
      FUN_08128be0(*DAT_080132b8 + DAT_080132bc,(uVar4 & 0x1f00) * 8 + 0x6000000,0x200);
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined2 *)(param_1 + 0x68) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  puVar3 = (ushort *)(param_1 + 0x68);
  if ((*(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x34)) * 0x10 + 0x1000 < (int)(uint)*puVar3) {
    *puVar3 = 0;
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x34);
  }
  *puVar3 = *puVar3 + 0x10;
  *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
  return in_lr;
}


