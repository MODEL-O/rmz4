// undefined FUN_080d21ac(void)
// entry 0x80d21ac


undefined4 FUN_080d21ac(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar3 = DAT_080d2278;
  iVar2 = DAT_080d2274;
  puVar1 = DAT_080d2270;
  *DAT_080d2270 = DAT_080d2274 * *DAT_080d2270 + DAT_080d2278 & 0x7fffffff;
  FUN_0801cf00(param_1,0x1b);
  uVar4 = *puVar1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
  uVar4 = iVar2 * (iVar2 * uVar4 + iVar3 & 0x7fffffff) + iVar3;
  *(uint *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) + (((uVar4 & 0x7fffffff) >> 0x10 & 3) - 2) * 0x100;
  uVar4 = iVar2 * (uVar4 & 0x7fffffff) + iVar3;
  *puVar1 = uVar4 & 0x7fffffff;
  *(uint *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + (((uVar4 & 0x7fffffff) >> 0x10 & 7) - 4) * 0x100;
  piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d227c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 4);
  FUN_080d1dd0(param_1);
  return in_lr;
}


