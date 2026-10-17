// undefined FUN_0800816c(void)
// entry 0x800816c


undefined4 FUN_0800816c(uint param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  iVar5 = 0x02000ab0;
  if (*(short *)(0x02000ab0 + 0x1d0) == 4) {
    iVar3 = FUN_08129050(param_1 + 0xffff1000,0x3c000);
    param_1 = iVar3 + 0xf000;
  }
  uVar2 = 0x00000fff;
  iVar3 = 0;
  puVar6 = (ushort *)(iVar5 + 0x7e0);
  uVar7 = param_1;
  while( true ) {
    uVar1 = *(ushort *)
             ((uint)puVar6[(uint)*puVar6 * ((int)param_2 >> 0xc) + ((int)uVar7 >> 0xc) + 2] * 2 +
             *(int *)(iVar5 + 0x1b8));
    uVar8 = uVar7;
    if (((uVar1 & 0xf) == 0) || ((uVar1 & 0x8400) != 0)) break;
    if ((uVar1 & 0xf) == 1) {
      uVar8 = (0xfffff000 & uVar7) - 1;
    }
    else {
      iVar4 = FUN_08128f84(param_2 & uVar2,uVar7 & uVar2,
                           *(undefined4 *)((uVar1 & 0xf) * 4 + 0x0882b154));
      if ((iVar4 == 0) || (uVar8 = uVar7 + iVar4, ((uVar7 ^ uVar8) & 0x1000) == 0)) break;
    }
    iVar3 = iVar3 + 1;
    uVar7 = uVar8;
    if (0xf < iVar3) break;
  }
  if (iVar3 < 0x10) {
    iVar5 = FUN_08009544(uVar8,param_2);
    iVar5 = iVar5 - param_1;
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}


