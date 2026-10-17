// undefined FUN_08008534(void)
// entry 0x8008534


undefined4 FUN_08008534(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  iVar2 = 0x02000ab0;
  if (*(short *)(0x02000ab0 + 0x1d0) == 4) {
    iVar1 = FUN_08129050(param_1 + 0xffff1000,0x3c000);
    param_1 = iVar1 + 0xf000;
  }
  uVar4 = (int)param_2 >> 0xc;
  if (0x0000077f < (uint)((int)param_1 >> 0xc)) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar6 = 0;
    uVar5 = param_2;
    if (uVar4 <= 0x000004ff) {
      do {
        uVar4 = (uint)*(ushort *)
                       ((uint)((ushort *)(iVar2 + 0x7e0))
                              [uVar4 * *(ushort *)(iVar2 + 0x7e0) + ((int)param_1 >> 0xc) + 2] * 2 +
                       (*(int *)0x02000c68));
        iVar1 = FUN_08128f88(param_1 & 0x00000fff,uVar5 & 0x00000fff,0x00000fff,
                             *(undefined4 *)((uVar4 & 0xf) * 4 + 0x0882b0d4));
        if ((iVar1 != 0) && (uVar4 != 0x0000800f)) break;
        if ((uVar6 & 1) == 0) {
          uVar5 = ((int)(uVar5 + 0x1000) >> 0xc) * 0x1000 - 1;
        }
        else {
          uVar5 = uVar5 + 1;
        }
        uVar4 = (int)uVar5 >> 0xc;
        uVar6 = uVar6 + 1;
        iVar1 = 0x7fffffff;
        if (0x7f < (int)uVar6) goto LAB_08008630;
      } while (uVar4 <= 0x000004ff);
    }
    iVar1 = 0x7fffffff;
    if ((int)uVar6 < 0x80) {
      iVar2 = FUN_08007db4(param_1,uVar5);
      if (0 < iVar2) {
        uVar3 = 0;
        goto LAB_0800863c;
      }
      iVar1 = uVar5 + iVar2;
    }
LAB_08008630:
    uVar3 = FUN_08009688(param_1,param_2,iVar1);
  }
LAB_0800863c:
  return uVar3;
}


