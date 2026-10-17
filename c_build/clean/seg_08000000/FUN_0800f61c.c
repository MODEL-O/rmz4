// undefined FUN_0800f61c(void)
// entry 0x800f61c


void FUN_0800f61c(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  iVar2 = DAT_0800f6ac;
  piVar1 = DAT_0800f6a4;
  uVar3 = *(uint *)(param_1 + 0x5c);
  if ((*(ushort *)(DAT_0800f69c + DAT_0800f6a0) >> 8 == 4) &&
     ((*(ushort *)(DAT_0800f69c + DAT_0800f6a0) & 0xff) == 5)) {
    pbVar5 = (byte *)(DAT_0800f69c + DAT_0800f6a8);
    FUN_08001ea4(*(int *)DAT_0800f6a4 + (uint)*pbVar5 * 0x14 + DAT_0800f6ac,0x4000);
    FUN_08002208(*piVar1 + (uint)*pbVar5 * 0x14 + iVar2 + 0xc,0);
  }
  iVar2 = DAT_0800f6b0;
  iVar4 = ((uVar3 & 0xffff) >> 4) * 4;
  *(undefined2 *)(iVar4 + DAT_0800f6b0) = 0;
  *(short *)(iVar4 + iVar2 + 2) =
       (short)((uint)(*(int *)(param_1 + 0x38) * *(int *)(param_1 + 0x48)) >> 8);
  return;
}


