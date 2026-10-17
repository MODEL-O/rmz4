// undefined FUN_080186f4(void)
// entry 0x80186f4


undefined4 FUN_080186f4(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  undefined4 in_lr;
  
  iVar1 = DAT_080187a0;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar3 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    uVar4 = *(uint *)(param_1 + 100);
    *(ushort *)(uVar3 * 2 + DAT_080187a0) = (ushort)uVar4 | 0x45;
    *(undefined4 *)(uVar3 * 4 + iVar1 + 8) = 0;
    FUN_08128be0(*DAT_080187a4 + DAT_080187a8,(uVar4 & 0x1f00) * 8 + 0x6000000,0x200);
    *(undefined2 *)(param_1 + 0x6e) = 0;
    *(undefined2 *)(param_1 + 0x6c) = 0;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    *(undefined2 *)(param_1 + 0x68) = 0;
    puVar2 = DAT_080187ac;
    *DAT_080187ac = (short)DAT_080187b0;
    puVar2[1] = (short)DAT_080187b4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  puVar5 = (ushort *)(param_1 + 0x68);
  if ((*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x34)) * 0x10 + 0x1000 < (int)(uint)*puVar5) {
    *puVar5 = 0;
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x34);
  }
  *puVar5 = *puVar5 + 8;
  *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + 4;
  *(short *)(param_1 + 0x6c) = *(short *)(param_1 + 0x6c) + 8;
  *(short *)(param_1 + 0x6e) = *(short *)(param_1 + 0x6e) + 0xc;
  return in_lr;
}


