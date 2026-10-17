// undefined FUN_0800864c(void)
// entry 0x800864c


undefined4 FUN_0800864c(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  iVar3 = 0x02000ab0;
  if (*(short *)(0x02000ab0 + 0x1d0) == 4) {
    iVar1 = FUN_08129050(param_1 + 0xffff1000,0x3c000);
    param_1 = iVar1 + 0xf000;
  }
  iVar1 = 0x0882b0d4;
  uVar4 = (int)param_2 >> 0xc;
  uVar5 = 0;
  if (uVar4 <= 0x000004ff) {
    do {
      uVar4 = (uint)*(ushort *)
                     ((uint)((ushort *)(iVar3 + 0x7e0))
                            [uVar4 * *(ushort *)(iVar3 + 0x7e0) + ((int)param_1 >> 0xc) + 2] * 2 +
                     (*(int *)0x02000c68));
      iVar2 = FUN_08128f88(param_1 & 0x00000fff,param_2 & 0x00000fff,0x00000fff,
                           *(undefined4 *)((uVar4 & 0xf) * 4 + iVar1));
      if ((iVar2 != 0) && (uVar4 != 0x0000800f)) break;
      if ((uVar5 & 1) == 0) {
        param_2 = ((int)(param_2 + 0x1000) >> 0xc) * 0x1000 - 1;
      }
      else {
        param_2 = param_2 + 1;
      }
      uVar4 = (int)param_2 >> 0xc;
      uVar5 = uVar5 + 1;
      iVar2 = 0x7fffffff;
      if (0x7f < (int)uVar5) goto LAB_08008738;
    } while (uVar4 <= 0x000004ff);
  }
  iVar2 = 0x7fffffff;
  if ((int)uVar5 < 0x80) {
    iVar3 = FUN_08007e98(param_1,param_2);
    if (iVar3 < 1) {
      iVar2 = param_2 + iVar3;
    }
    else {
      iVar2 = 0;
    }
  }
LAB_08008738:
  return iVar2;
}


