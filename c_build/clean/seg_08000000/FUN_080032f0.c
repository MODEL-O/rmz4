// undefined FUN_080032f0(void)
// entry 0x80032f0


void FUN_080032f0(int param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  puVar6 = (uint *)(DAT_08003378 + 0x400);
  puVar4 = (uint *)*puVar6;
  if (puVar4 < puVar6) {
    uVar5 = ((*(int **)(param_1 + 8))[1] - *(int *)(param_2 + 0xc)) * 0x100 >> 0x10;
    if ((uVar5 + 0x40 < 0xe0) &&
       (uVar3 = (**(int **)(param_1 + 8) - *(int *)(param_2 + 8)) * 0x100 >> 0x10,
       uVar3 + 0x80 <= DAT_0800337c)) {
      uVar2 = *(uint *)(param_1 + 0xc);
      *puVar4 = uVar2;
      *puVar4 = uVar2 | uVar5 & 0xff | (uint)(*(byte *)(param_1 + 0xd) >> 6) << 0xe |
                        (uVar3 & DAT_08003380) << 0x10 | (uint)*(byte *)(param_1 + 0x12) << 0x1c |
                        (uint)*(byte *)(param_1 + 0x13) << 0x1d |
                        (uint)(*(byte *)(param_1 + 0xf) >> 6) << 0x1e;
      uVar1 = *(ushort *)(param_1 + 0x10);
      *(ushort *)(puVar4 + 1) = uVar1;
      *(ushort *)(puVar4 + 1) = uVar1 | *(ushort *)(param_1 + 0x10) & 0x3ff;
      *puVar6 = (uint)(puVar4 + 2);
    }
  }
  return;
}


