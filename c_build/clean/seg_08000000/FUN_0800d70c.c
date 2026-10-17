// undefined FUN_0800d70c(void)
// entry 0x800d70c


void FUN_0800d70c(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 local_20 [2];
  
  iVar1 = DAT_0800d7bc;
  uVar2 = *(uint *)(param_1 + 0x5c);
  if (*(char *)(DAT_0800d7bc + DAT_0800d7c0) != '\0') {
    *(int *)DAT_0800d7c4 = *(int *)DAT_0800d7c4 & ~(ushort)((uVar2 & 0xffff) << 8);
  }
  if (*(short *)(iVar1 + DAT_0800d7c8) != 0) {
    puVar4 = (ushort *)(((uVar2 & 0xffff) >> 4) * 2 + DAT_0800d7cc);
    local_20[0] = 0;
    FUN_08128be0(local_20,(*puVar4 & 0x1f00) * 8 + 0x6000000,DAT_0800d7d0);
    FUN_08128be0(*(int *)DAT_0800d7d4 + DAT_0800d7d8,(*puVar4 & 0x1f00) * 8 + DAT_0800d7dc,0x200);
  }
  iVar1 = DAT_0800d7e0;
  iVar3 = ((uVar2 & 0xffff) >> 4) * 4;
  *(short *)(iVar3 + DAT_0800d7e0) =
       (short)*(undefined4 *)(param_1 + 0x4c) +
       (short)((uint)(*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x34)) >> 8);
  *(short *)(iVar3 + iVar1 + 2) =
       (short)*(undefined4 *)(param_1 + 0x50) +
       (short)((uint)(*(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x38)) >> 8);
  return;
}


