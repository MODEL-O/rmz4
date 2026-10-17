// undefined FUN_080964c0(void)
// entry 0x80964c0


undefined4 FUN_080964c0(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 in_lr;
  undefined1 auStack_30 [4];
  int local_2c;
  int local_28;
  int local_24;
  
  FUN_08129258(auStack_30,DAT_080965a0,4);
  iVar2 = DAT_080965ac;
  puVar1 = DAT_080965a4;
  uVar7 = *(byte *)(param_1 + 10) >> 4 & 1;
  uVar3 = DAT_080965a8 * *DAT_080965a4 + DAT_080965ac;
  *DAT_080965a4 = uVar3 & 0x7fffffff;
  uVar3 = ((uVar3 & 0x7fffffff) >> 0x10 & 3) + 0x10;
  if (uVar3 != 0) {
    local_24 = (uVar7 * 2 + -1) * -0x400;
    do {
      iVar8 = *(int *)(param_1 + 0x54) + local_24;
      uVar4 = DAT_080965a8 * *puVar1 + iVar2;
      uVar9 = uVar4 & 0x7fffffff;
      *puVar1 = uVar9;
      iVar5 = FUN_08129198((uVar4 & 0x7fffffff) >> 0x10,0x38);
      local_2c = iVar8 + (iVar5 + -0x1c) * 0x100;
      uVar4 = DAT_080965a8 * uVar9 + iVar2;
      *puVar1 = uVar4 & 0x7fffffff;
      local_28 = *(int *)(param_1 + 0x58) +
                 ((uVar4 & 0x7fffffff) >> 0x10 & 0x3f) * 0x100 + DAT_080965b0;
      FUN_080e03d8(&local_2c,auStack_30[uVar3 & 3],uVar7);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080965b4);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 0x10);
  return in_lr;
}


