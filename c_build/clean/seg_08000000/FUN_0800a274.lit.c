// undefined FUN_0800a274(void)
// entry 0x800a274


void FUN_0800a274(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  iVar1 = 0x02000a0c;
  iVar4 = ((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 4;
  *(short *)(iVar4 + 0x02000a0c) = (short)*(undefined4 *)(param_1 + 0x34);
  *(ushort *)(iVar4 + iVar1 + 2) = *(ushort *)(param_1 + 0x10) >> 2;
  iVar1 = 0x0882d154;
  piVar2 = 0x08df2048;
  uVar3 = FUN_08129198(*(ushort *)(param_1 + 0x12) >> 3,6);
  iVar4 = 0x08df2728;
  FUN_08001ea4(*piVar2 + (uint)*(byte *)((uVar3 & 0xffff) + iVar1) * 0x14 + 0x08df2728,0x4000);
  uVar3 = FUN_08129198(*(ushort *)(param_1 + 0x12) >> 3,6);
  FUN_08002208(*piVar2 + (uint)*(byte *)((uVar3 & 0xffff) + iVar1) * 0x14 + iVar4 + 0xc,0);
  return;
}


