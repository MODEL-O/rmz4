// undefined FUN_08017458(void)
// entry 0x8017458


undefined4 FUN_08017458(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar1 = DAT_080174e8;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    uVar4 = *(uint *)(param_1 + 100);
    *(ushort *)(uVar2 * 2 + DAT_080174e8) = (ushort)uVar4 | 0x47;
    *(undefined4 *)(uVar2 * 4 + iVar1 + 8) = 0;
    FUN_08128be0(*DAT_080174ec + DAT_080174f0,(uVar4 & 0x1f00) * 8 + 0x6000000,0x200);
    *(undefined2 *)(param_1 + 0x6e) = 0;
    *(undefined2 *)(param_1 + 0x6c) = 0;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    *(undefined2 *)(param_1 + 0x68) = 0;
    uVar3 = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x7c) = uVar3;
    *(undefined4 *)(param_1 + 0x78) = uVar3;
    *(undefined4 *)(param_1 + 0x74) = uVar3;
    *(undefined4 *)(param_1 + 0x70) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(short *)(param_1 + 0x68) = *(short *)(param_1 + 0x68) + 1;
  *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + 2;
  *(short *)(param_1 + 0x6c) = *(short *)(param_1 + 0x6c) + 4;
  *(short *)(param_1 + 0x6e) = *(short *)(param_1 + 0x6e) + 8;
  return in_lr;
}


