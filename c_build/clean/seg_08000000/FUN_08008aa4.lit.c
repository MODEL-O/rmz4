// undefined FUN_08008aa4(void)
// entry 0x8008aa4


undefined4 FUN_08008aa4(uint param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  iVar2 = 0x02000ab0;
  if (*(short *)(0x02000ab0 + 0x1d0) == 4) {
    iVar3 = FUN_08129050(param_1 + 0xffff1000,0x3c000);
    param_1 = iVar3 + 0xf000;
  }
  if (((uint)((int)param_1 >> 0xc) < 0x771) && ((uint)((int)param_2 >> 0xc) <= 0x000004f5)) {
    uVar1 = *(ushort *)
             ((uint)((ushort *)(iVar2 + 0x7e0))
                    [((int)param_2 >> 0xc) * (uint)*(ushort *)(iVar2 + 0x7e0) +
                     ((int)param_1 >> 0xc) + 2] * 2 + *(int *)(iVar2 + 0x1b8));
    iVar3 = FUN_08128f84(param_1 & 0x00000fff,param_2 & 0x00000fff,
                         *(undefined4 *)((uVar1 & 0xf) * 4 + 0x0882b0d4));
    if (iVar3 == 0) {
LAB_08008b58:
      uVar4 = FUN_08009370(param_1,param_2);
      puVar6 = 0x02000028;
      if ((uVar4 & 0x2000) == 0) goto LAB_08008b6a;
    }
    else if ((uVar1 & 0x2000) == 0) {
      if ((uVar1 & 0x4000) == 0) goto LAB_08008b58;
      puVar6 = (undefined4 *)(iVar2 + 0x0002c004);
    }
    else {
      puVar6 = (undefined4 *)(iVar2 + 0x0002c008);
    }
    uVar5 = *puVar6;
  }
  else {
LAB_08008b6a:
    uVar5 = 0;
  }
  return uVar5;
}


