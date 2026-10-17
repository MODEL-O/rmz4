// undefined FUN_080dd10c(void)
// entry 0x80dd10c


undefined4 FUN_080dd10c(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_080dd154);
  FUN_0801cff0(param_1);
  uVar6 = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar6;
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 1) {
    iVar4 = 0x800;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_080dd184;
    goto LAB_080dd1e4;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar3 = *(int *)(param_1 + 0x58);
      iVar8 = DAT_080dd170;
      iVar4 = DAT_080dd16c;
LAB_080dd192:
      *(int *)(param_1 + 0x58) = iVar3 + iVar8;
      goto LAB_080dd1e4;
    }
  }
  else {
    if (bVar1 == 2) {
      iVar4 = 0xe00;
      iVar3 = *(int *)(param_1 + 0x58);
      iVar8 = DAT_080dd198;
      goto LAB_080dd192;
    }
    if (bVar1 == 3) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_080dd1f8;
    }
  }
  uVar7 = DAT_080dd200 * *DAT_080dd1fc + DAT_080dd204;
  iVar4 = (0x10 - ((uVar7 & 0x7fffffff) >> 0x10 & 0x1f)) * 0x100;
  iVar8 = *(int *)(param_1 + 0x58) + DAT_080dd208;
  uVar7 = DAT_080dd200 * (uVar7 & 0x7fffffff) + DAT_080dd204;
  *DAT_080dd1fc = uVar7 & 0x7fffffff;
  *(uint *)(param_1 + 0x58) = iVar8 + ((uVar7 & 0x7fffffff) >> 0x10 & 0x1f) * 0x100;
LAB_080dd1e4:
  if ((*(byte *)(iVar2 + 10) & 0x10) == 0) {
    iVar4 = *(int *)(param_1 + 0x54) + iVar4;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x54) - iVar4;
  }
  *(int *)(param_1 + 0x54) = iVar4;
  *(undefined1 *)(param_1 + 0x12) = 0;
  piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080dd23c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 4);
  FUN_080dcdd8(param_1);
  return in_lr;
}


