// undefined FUN_080181a8(void)
// entry 0x80181a8


undefined4 FUN_080181a8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 in_lr;
  undefined4 local_20 [2];
  
  uVar2 = *(uint *)(param_1 + 0x5c);
  if (*(short *)(DAT_08018244 + DAT_08018248) != 0) {
    puVar4 = (ushort *)(((uVar2 & 0xffff) >> 4) * 2 + DAT_08018254);
    FUN_08128be0(*DAT_0801824c + DAT_08018250,(*puVar4 & 0x1f00) * 8 + 0x6000000,0x200);
    local_20[0] = 0;
    FUN_08128be0(local_20,(*puVar4 & 0x1f00) * 8 + DAT_08018258,0x1000200);
  }
  iVar1 = DAT_0801825c;
  iVar3 = ((uVar2 & 0xffff) >> 4) * 4;
  *(short *)(iVar3 + DAT_0801825c) =
       (short)*(undefined4 *)(param_1 + 0x4c) +
       (short)((uint)(*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x34)) >> 8);
  *(short *)(iVar3 + iVar1 + 2) =
       (short)*(undefined4 *)(param_1 + 0x50) +
       (short)((uint)(*(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x38)) >> 8);
  return in_lr;
}


