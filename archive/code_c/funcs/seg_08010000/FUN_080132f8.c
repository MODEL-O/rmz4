// undefined FUN_080132f8(void)
// entry 0x80132f8


undefined4 FUN_080132f8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_08013354;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    uVar3 = *(uint *)(param_1 + 0x60) | *(uint *)(param_1 + 100);
    *(ushort *)(uVar2 * 2 + DAT_08013354) = (ushort)uVar3 | 0x44;
    *(undefined4 *)(uVar2 * 4 + iVar1 + 8) = 0;
    FUN_08128be0(*DAT_08013358 + DAT_0801335c,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
  return in_lr;
}


