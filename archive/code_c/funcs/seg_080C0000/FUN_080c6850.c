// undefined FUN_080c6850(void)
// entry 0x80c6850


undefined4 FUN_080c6850(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x6200);
  *(undefined1 *)(param_1 + 0x12) = 8;
  uVar3 = DAT_080c68e8 * *DAT_080c68e4 + DAT_080c68ec;
  iVar2 = ((uVar3 & 0x7fffffff) >> 0x10 & 3) * 0x1c + DAT_080c68f0;
  uVar3 = DAT_080c68e8 * (uVar3 & 0x7fffffff) + DAT_080c68ec;
  *DAT_080c68e4 = uVar3 & 0x7fffffff;
  FUN_080d4c8c(param_1 + 0x54,iVar2,0,((uVar3 & 0x7fffffff) >> 0x10 & 1) << 4);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c68f4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080c6518(param_1);
  return in_lr;
}


