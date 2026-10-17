// undefined FUN_080d1108(void)
// entry 0x80d1108


undefined4 FUN_080d1108(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  FUN_0801cf00(param_1,0xd);
  iVar3 = DAT_080d11a0;
  iVar2 = DAT_080d119c;
  puVar1 = DAT_080d1198;
  uVar5 = DAT_080d119c * *DAT_080d1198 + DAT_080d11a0;
  *(uint *)(param_1 + 0x5c) = 0x40 - ((uVar5 & 0x7fffffff) >> 0x10 & 0x7f);
  uVar5 = iVar2 * (uVar5 & 0x7fffffff) + iVar3;
  *(uint *)(param_1 + 0x60) = ((uVar5 & 0x7fffffff) >> 0x10 & 0x1f) + 0xc0;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x54);
  uVar5 = iVar2 * (uVar5 & 0x7fffffff) + iVar3;
  *(char *)(param_1 + 0x12) = (char)(uVar5 >> 0x10);
  uVar5 = iVar2 * (uVar5 & 0x7fffffff) + iVar3;
  *puVar1 = uVar5 & 0x7fffffff;
  *(char *)(param_1 + 0x13) = (char)(uVar5 >> 0x10);
  *(undefined4 *)(param_1 + 0x78) = 0x80;
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d11a4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
  FUN_080d108c(param_1);
  return in_lr;
}


