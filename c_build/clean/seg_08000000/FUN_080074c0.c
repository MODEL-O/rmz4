// undefined FUN_080074c0(void)
// entry 0x80074c0


void FUN_080074c0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  iVar4 = *(int *)((uint)(*(byte *)(DAT_08007550 + DAT_08007558) >> 4) * 4 +
                   (*(byte *)(DAT_08007550 + 0x1d0) & 0x7f) * 8 + DAT_08007554);
  iVar3 = *(int *)(iVar4 + 8);
  iVar3 = *(int *)(iVar3 + 8) + iVar3 + (param_3 & 0xffff) * 300;
  uVar2 = (uint)*(byte *)(*(int *)(iVar4 + 0xc) + 2);
  iVar4 = (param_2 * uVar2 * 0xf * 10 + param_1 * 0xf) * 2 + DAT_08007550 + DAT_0800755c;
  uVar5 = 0;
  do {
    FUN_08000b30(iVar3,iVar4,0x1e);
    iVar4 = iVar4 + uVar2 * 0x1e;
    iVar3 = iVar3 + 0x1e;
    uVar1 = uVar5 * 0x10000 + 0x10000;
    uVar5 = uVar1 >> 0x10;
  } while ((int)uVar1 >> 0x10 < 10);
  *(undefined2 *)(DAT_08007550 + 0x2c000) = 1;
  return;
}


