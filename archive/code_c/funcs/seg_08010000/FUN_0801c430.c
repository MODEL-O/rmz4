// undefined FUN_0801c430(void)
// entry 0x801c430


undefined4 FUN_0801c430(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_0801c480;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    uVar3 = *(uint *)(param_1 + 100);
    *(ushort *)(uVar2 * 2 + DAT_0801c480) = (ushort)uVar3 | 0x47;
    *(undefined4 *)(uVar2 * 4 + iVar1 + 8) = 0;
    FUN_08128be0(*DAT_0801c484 + DAT_0801c488,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


