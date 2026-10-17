// undefined FUN_080d12dc(void)
// entry 0x80d12dc


undefined4 FUN_080d12dc(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  FUN_0801cf00(param_1,0xc);
  *(undefined4 *)(param_1 + 0x5c) = 0x200;
  iVar3 = DAT_080d1364;
  iVar2 = DAT_080d1360;
  puVar1 = DAT_080d135c;
  uVar4 = DAT_080d1360 * *DAT_080d135c + DAT_080d1364;
  *(uint *)(param_1 + 0x60) = ((uVar4 & 0x7fffffff) >> 0x10 & 0xff) + 0x400;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x54);
  uVar4 = iVar2 * (uVar4 & 0x7fffffff) + iVar3;
  *(char *)(param_1 + 0x12) = (char)(uVar4 >> 0x10);
  uVar4 = iVar2 * (uVar4 & 0x7fffffff) + iVar3;
  *puVar1 = uVar4 & 0x7fffffff;
  *(char *)(param_1 + 0x13) = (char)(uVar4 >> 0x10);
  *(undefined4 *)(param_1 + 0x78) = 0x80;
  piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d1368);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 4);
  FUN_080d108c(param_1);
  return in_lr;
}


