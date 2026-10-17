// undefined FUN_08007db4(void)
// entry 0x8007db4


undefined4 FUN_08007db4(uint param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  iVar6 = 0x02000ab0;
  if (*(short *)(0x02000ab0 + 0x1d0) == 4) {
    iVar3 = FUN_08129050(param_1 + 0xffff1000,0x3c000);
    param_1 = iVar3 + 0xf000;
  }
  uVar2 = 0x0000800f;
  iVar3 = 0;
  uVar7 = param_2;
  while( true ) {
    uVar1 = *(ushort *)
             ((uint)((ushort *)(iVar6 + 0x7e0))
                    [(uint)*(ushort *)(iVar6 + 0x7e0) * ((int)uVar7 >> 0xc) + ((int)param_1 >> 0xc)
                     + 2] * 2 + (*(int *)0x02000c68));
    uVar4 = uVar1 & 0xf;
    uVar8 = uVar7;
    if (((uVar1 & 0xf) == 0) || (uVar1 == uVar2)) break;
    if (uVar4 == 1) {
      uVar8 = (0xfffff000 & uVar7) - 1;
    }
    else {
      iVar5 = FUN_08128f88(param_1 & 0x00000fff,uVar7 & 0x00000fff,0x00000fff,
                           *(undefined4 *)(uVar4 * 4 + 0x0882b0d4));
      if ((iVar5 == 0) || (uVar8 = uVar7 + iVar5, ((uVar7 ^ uVar8) & 0x1000) == 0)) break;
    }
    iVar3 = iVar3 + 1;
    uVar7 = uVar8;
    if (0xf < iVar3) break;
  }
  if (iVar3 < 0x10) {
    iVar6 = FUN_08009420(param_1,uVar8);
    iVar6 = iVar6 - param_2;
  }
  else {
    iVar6 = 1;
  }
  return iVar6;
}


