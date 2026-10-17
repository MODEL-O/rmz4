// undefined FUN_080165a8(void)
// entry 0x80165a8


undefined4 FUN_080165a8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  undefined4 in_lr;
  undefined4 local_1c [2];
  
  iVar1 = DAT_0801662c;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    puVar4 = (ushort *)(uVar2 * 2 + DAT_0801662c);
    uVar3 = *(uint *)(param_1 + 100) | DAT_08016630;
    *puVar4 = (ushort)uVar3;
    *(undefined4 *)(uVar2 * 4 + iVar1 + 8) = 0;
    FUN_08128be0(*DAT_08016634 + DAT_08016638,(uVar3 & 0x1f00) * 8 + 0x6000000,0x200);
    local_1c[0] = DAT_0801663c;
    FUN_08128be0(local_1c,(*puVar4 & 0x1f00) * 8 + DAT_08016640,0x1000200);
    *(undefined4 *)(param_1 + 0x4c) = 0xf0;
    *(undefined4 *)(param_1 + 0x50) = 0xe0;
    *(undefined4 *)(param_1 + 0x44) = 0x80;
    *(undefined4 *)(param_1 + 0x48) = 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


