// undefined FUN_080c21dc(void)
// entry 0x80c21dc


undefined4 FUN_080c21dc(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  FUN_0801cff0();
  iVar3 = *DAT_080c220c;
  iVar4 = *(int *)(iVar3 + 0x54);
  *(int *)(param_1 + 0x54) = iVar4;
  *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + DAT_080c2210;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  if ((*(byte *)(iVar3 + 10) & 0x10) == 0) {
    iVar3 = -*(int *)(param_1 + 0x5c);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x5c);
  }
  *(int *)(param_1 + 0x54) = iVar4 + iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (1 < *(byte *)(iVar5 + 0xc)) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c226c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    uVar2 = *DAT_080c2270 * DAT_080c2274 + DAT_080c2278;
    *DAT_080c2270 = uVar2 & 0x7fffffff;
    iVar3 = FUN_08129198((uVar2 & 0x7fffffff) >> 0x10,0xf);
    *(int *)(param_1 + 0x60) = (iVar3 + 4) * -0x40;
    *(undefined1 *)(param_1 + 0x12) = 0x40;
    FUN_080c1bd8(param_1);
  }
  return in_lr;
}


