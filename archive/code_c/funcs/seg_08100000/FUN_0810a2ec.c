// undefined FUN_0810a2ec(void)
// entry 0x810a2ec


undefined4 FUN_0810a2ec(int param_1)

{
  short sVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  iVar9 = *(int *)(DAT_0810a364 + iVar4);
  *(uint *)(param_1 + 0x54) = (uint)*(byte *)(param_1 + 0x10) * 0x800 + 0x2d00;
  *(undefined4 *)(param_1 + 0x58) = 0x2000;
  cVar2 = FUN_0802b608(iVar9);
  if (cVar2 != '\0') {
    sVar1 = *(short *)(iVar9 + 0xa4);
    uVar3 = FUN_0802b62c(iVar9);
    if ((short)(uVar3 & 0xff) < sVar1) {
      iVar5 = FUN_0802b62c(iVar9);
      uVar7 = ((uint)*(byte *)(iVar9 + 0xa4) - iVar5) + (uint)*(byte *)(param_1 + 0x10) * -4;
      uVar8 = uVar7 & 0xff;
      if (4 < (int)(uVar7 * 0x1000000) >> 0x18) {
        uVar8 = 4;
      }
      if ((int)(uVar8 * 0x1000000) < 0) {
        uVar8 = 0;
      }
      uVar8 = uVar8 * 0x1000000 + 0x4000000 >> 0x18;
      goto LAB_0810a388;
    }
  }
  uVar7 = (uint)*(byte *)(iVar9 + 0xa4) + (uint)*(byte *)(param_1 + 0x10) * -4;
  uVar8 = uVar7 & 0xff;
  if (4 < (int)(uVar7 * 0x1000000) >> 0x18) {
    uVar8 = 4;
  }
  if ((int)(uVar8 * 0x1000000) < 0) {
    uVar8 = 0;
  }
LAB_0810a388:
  FUN_0801cf00(param_1,(uint)(((int)(uVar8 << 0x18) >> 8) + DAT_0810a3c8) >> 0x10);
  FUN_0801cff0(param_1);
  if (*(char *)(DAT_0810a3cc + iVar4 + 2) == '\0') {
    if (0x100 < *DAT_0810a3f4) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x20000;
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810a3d0);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 0xc);
  }
  return in_lr;
}


