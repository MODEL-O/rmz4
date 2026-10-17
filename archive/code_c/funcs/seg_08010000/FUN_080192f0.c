// undefined FUN_080192f0(void)
// entry 0x80192f0


undefined4 FUN_080192f0(int param_1)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_08019330;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    puVar3 = (ushort *)(uVar2 * 2 + DAT_08019330);
    *puVar3 = (ushort)DAT_08019334 & *puVar3 | 2;
    *(undefined4 *)(uVar2 * 4 + iVar1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0x618;
    *(undefined4 *)(param_1 + 0x44) = 0xc0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


