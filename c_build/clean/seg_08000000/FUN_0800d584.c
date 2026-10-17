// undefined FUN_0800d584(void)
// entry 0x800d584


void FUN_0800d584(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 local_20 [2];
  
  iVar1 = DAT_0800d634;
  uVar2 = *(uint *)(param_1 + 0x5c);
  if (*(char *)(DAT_0800d634 + DAT_0800d638) != '\0') {
    *(int *)DAT_0800d63c = *(int *)DAT_0800d63c & ~(ushort)((uVar2 & 0xffff) << 8);
  }
  if (*(short *)(iVar1 + DAT_0800d640) != 0) {
    puVar4 = (ushort *)(((uVar2 & 0xffff) >> 4) * 2 + DAT_0800d644);
    local_20[0] = 0;
    FUN_08128be0(local_20,(*puVar4 & 0x1f00) * 8 + 0x6000000,DAT_0800d648);
    FUN_08128be0(*(int *)DAT_0800d64c + DAT_0800d650,(*puVar4 & 0x1f00) * 8 + DAT_0800d654,0x200);
  }
  iVar1 = DAT_0800d658;
  iVar3 = ((uVar2 & 0xffff) >> 4) * 4;
  *(short *)(iVar3 + DAT_0800d658) =
       (short)*(undefined4 *)(param_1 + 0x4c) +
       (short)((uint)(*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x34)) >> 8);
  *(short *)(iVar3 + iVar1 + 2) =
       (short)*(undefined4 *)(param_1 + 0x50) +
       (short)((uint)(*(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x38)) >> 8);
  return;
}


