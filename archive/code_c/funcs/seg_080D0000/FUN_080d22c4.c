// undefined FUN_080d22c4(void)
// entry 0x80d22c4


undefined4 FUN_080d22c4(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0xd);
  iVar3 = DAT_080d2350;
  iVar2 = DAT_080d234c;
  puVar1 = DAT_080d2348;
  uVar4 = DAT_080d234c * *DAT_080d2348 + DAT_080d2350;
  *(byte *)(param_1 + 0x12) = ((byte)(uVar4 >> 0x10) & 7) + 0x3c;
  uVar4 = iVar2 * (uVar4 & 0x7fffffff) + iVar3;
  *(uint *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + (((uVar4 & 0x7fffffff) >> 0x10 & 3) - 2) * 0x100;
  uVar4 = iVar2 * (uVar4 & 0x7fffffff) + iVar3;
  *puVar1 = uVar4 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = ((uVar4 & 0x7fffffff) >> 0x10 & 0x3f) + 0xc0;
  if ((*(ushort *)(DAT_080d2354 + 0x1d0) & 0x7f) == 2) {
    uVar5 = FUN_08007b84(param_1 + 0x54);
  }
  else {
    uVar5 = *(undefined4 *)(DAT_080d2354 + DAT_080d2380);
  }
  *(undefined4 *)(param_1 + 0x74) = uVar5;
  piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d2384);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 4);
  FUN_080d1dd0(param_1);
  return in_lr;
}


