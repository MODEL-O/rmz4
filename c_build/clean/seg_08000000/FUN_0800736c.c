// undefined FUN_0800736c(void)
// entry 0x800736c


void FUN_0800736c(int param_1,int param_2,short *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uVar2 = (uint)*(byte *)(*(int *)(*(int *)((uint)(*(byte *)(DAT_08007400 + DAT_08007408) >> 4) * 4
                                            + (*(byte *)(DAT_08007400 + 0x1d0) & 0x7f) * 8 +
                                           DAT_08007404) + 0xc) + 2);
  iVar1 = (int)param_3[3];
  iVar4 = (uVar2 * 0xf * (param_2 + iVar1) + param_1) * 2 + DAT_08007400 + DAT_0800740c;
  iVar5 = DAT_08007400 + DAT_0800740c + (uVar2 * 0xf * (param_3[1] + iVar1) + (int)*param_3) * 2;
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar4 = iVar4 + uVar2 * -0x1e;
      iVar5 = iVar5 + uVar2 * -0x1e;
      FUN_08000b30(iVar5,iVar4,(int)param_3[2] << 1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3[3]);
  }
  *(undefined2 *)(DAT_08007400 + 0x2c000) = 1;
  return;
}


