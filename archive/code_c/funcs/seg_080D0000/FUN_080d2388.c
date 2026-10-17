// undefined FUN_080d2388(void)
// entry 0x80d2388


undefined4 FUN_080d2388(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(param_1 + 0x54);
    iVar6 = DAT_080d23f0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x54);
    iVar6 = 0xf00;
  }
  *(int *)(param_1 + 0x54) = iVar2 + iVar6;
  uVar3 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if ((uVar3 & 0xf) == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_080d23f4;
    uVar3 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54));
    if ((uVar3 & 0xf) == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d23f8);
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0xc);
      return in_lr;
    }
  }
  iVar2 = DAT_080d2484;
  iVar6 = DAT_080d2480;
  puVar1 = DAT_080d247c;
  uVar3 = DAT_080d2480 * *DAT_080d247c + DAT_080d2484;
  *(byte *)(param_1 + 0x12) = ((byte)(uVar3 >> 0x10) & 7) + 0x3c;
  uVar3 = iVar6 * (uVar3 & 0x7fffffff) + iVar2;
  *(uint *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + (((uVar3 & 0x7fffffff) >> 0x10 & 3) - 2) * 0x100;
  uVar3 = iVar6 * (uVar3 & 0x7fffffff) + iVar2;
  *puVar1 = uVar3 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = ((uVar3 & 0x7fffffff) >> 0x10 & 0x3f) + 0xc0;
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0xd);
  if ((*(ushort *)(DAT_080d2488 + 0x1d0) & 0x7f) == 2) {
    uVar5 = FUN_08007b84(param_1 + 0x54);
  }
  else {
    uVar5 = *(undefined4 *)(DAT_080d2488 + DAT_080d24b4);
  }
  *(undefined4 *)(param_1 + 0x74) = uVar5;
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d24b8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
  FUN_080d1dd0(param_1);
  return in_lr;
}


