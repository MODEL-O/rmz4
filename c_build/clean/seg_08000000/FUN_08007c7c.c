// undefined FUN_08007c7c(void)
// entry 0x8007c7c


undefined4 FUN_08007c7c(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  iVar2 = DAT_08007cb8;
  if (*(short *)(DAT_08007cb8 + 0x1d0) == 4) {
    iVar1 = FUN_08129050(param_1 + DAT_08007cbc,0x3c000);
    param_1 = iVar1 + 0xf000;
  }
  uVar4 = DAT_08007cc4;
  if (((uint)((int)param_1 >> 0xc) < 0x771) && ((uint)((int)param_2 >> 0xc) <= DAT_08007cc0)) {
    puVar3 = (ushort *)(iVar2 + 0x7e0);
    uVar4 = (uint)*(ushort *)
                   ((uint)puVar3[((int)param_2 >> 0xc) * (uint)*puVar3 + ((int)param_1 >> 0xc) + 2]
                    * 2 + *(int *)(iVar2 + 0x1b8));
    iVar2 = FUN_08128f84(param_1 & DAT_08007d1c,param_2 & DAT_08007d1c,
                         *(undefined4 *)((uVar4 & 0xf) * 4 + DAT_08007d18));
    if (iVar2 == 0) {
      uVar4 = FUN_08009370(param_1,param_2);
      uVar4 = uVar4 & 0xffff;
    }
  }
  return uVar4;
}


