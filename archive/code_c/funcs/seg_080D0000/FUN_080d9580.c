// undefined FUN_080d9580(void)
// entry 0x80d9580


undefined4 FUN_080d9580(int param_1)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 in_lr;
  
  piVar9 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d95cc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar9 + 4);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801ceec(param_1);
  FUN_0801cf00(param_1,DAT_080d95d0);
  FUN_0801cff0(param_1);
  iVar8 = DAT_080d96c8;
  iVar7 = DAT_080d96c4;
  puVar6 = DAT_080d96c0;
  iVar5 = DAT_080d9660;
  iVar11 = DAT_080d965c;
  puVar4 = DAT_080d9658;
  iVar3 = DAT_080d961c;
  iVar12 = DAT_080d9618;
  puVar2 = DAT_080d9614;
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 1) {
    uVar10 = DAT_080d965c * *DAT_080d9658 + DAT_080d9660;
    iVar12 = ((uVar10 & 0x7fffffff) >> 0x10 & 0xf) + 0x20;
    *(int *)(param_1 + 100) = iVar12;
    uVar10 = iVar11 * (uVar10 & 0x7fffffff) + iVar5;
    *puVar4 = uVar10 & 0x7fffffff;
    *(uint *)(param_1 + 0x68) = (uVar10 & 0x7fffffff) >> 0x10 & 0xf;
    *(int *)(param_1 + 0x5c) = iVar12 * 0x10;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      uVar10 = DAT_080d9618 * *DAT_080d9614 + DAT_080d961c;
      iVar11 = ((uVar10 & 0x7fffffff) >> 0x10 & 0xf) + 0x10;
      *(int *)(param_1 + 100) = iVar11;
      *(int *)(param_1 + 0x5c) = iVar11 * 0x10;
      uVar10 = iVar12 * (uVar10 & 0x7fffffff) + iVar3;
      *puVar2 = uVar10 & 0x7fffffff;
      iVar12 = ((uVar10 & 0x7fffffff) >> 0x10 & 0xf) + 0x1c;
      *(int *)(param_1 + 0x68) = iVar12;
      *(int *)(param_1 + 0x60) = iVar12 * 0x10;
    }
  }
  else if (bVar1 == 2) {
    uVar10 = DAT_080d96c4 * *DAT_080d96c0 + DAT_080d96c8;
    iVar12 = ((uVar10 & 0x7fffffff) >> 0x10 & 0xf) + 0x10;
    *(int *)(param_1 + 100) = iVar12;
    *(int *)(param_1 + 0x5c) = iVar12 * 0x10;
    uVar10 = iVar7 * (uVar10 & 0x7fffffff) + iVar8;
    *puVar6 = uVar10 & 0x7fffffff;
    iVar12 = -0x1c - ((uVar10 & 0x7fffffff) >> 0x10 & 0xf);
    *(int *)(param_1 + 0x68) = iVar12;
    *(int *)(param_1 + 0x60) = iVar12 * 0x10;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    *(int *)(param_1 + 100) = -*(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
  }
  FUN_080d94b0(param_1);
  return in_lr;
}


