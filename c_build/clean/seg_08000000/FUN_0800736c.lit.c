// undefined FUN_0800736c(void)
// entry 0x800736c


void FUN_0800736c(int param_1,int param_2,short *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uVar2 = (uint)*(byte *)(*(int *)(*(int *)((uint)(*(byte *)(0x02000ab0 + 0x0002c010) >> 4) * 4
                                            + (*(byte *)(0x02000ab0 + 0x1d0) & 0x7f) * 8 +
                                           0x0882c5d4) + 0xc) + 2);
  iVar1 = (int)param_3[3];
  iVar4 = (uVar2 * 0xf * (param_2 + iVar1) + param_1) * 2 + 0x02000ab0 + 0x000007e4;
  iVar5 = 0x02000ab0 + 0x000007e4 + (uVar2 * 0xf * (param_3[1] + iVar1) + (int)*param_3) * 2;
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar4 = iVar4 + uVar2 * -0x1e;
      iVar5 = iVar5 + uVar2 * -0x1e;
      FUN_08000b30(iVar5,iVar4,(int)param_3[2] << 1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3[3]);
  }
  *(undefined2 *)(0x02000ab0 + 0x2c000) = 1;
  return;
}


