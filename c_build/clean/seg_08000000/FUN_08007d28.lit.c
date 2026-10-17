// undefined FUN_08007d28(void)
// entry 0x8007d28


undefined4 FUN_08007d28(uint param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  iVar3 = 0x02000ab0;
  if (*(short *)(0x02000ab0 + 0x1d0) == 4) {
    iVar2 = FUN_08129050(param_1 + 0xffff1000,0x3c000);
    param_1 = iVar2 + 0xf000;
  }
  puVar4 = (ushort *)(iVar3 + 0x7e0);
  uVar1 = *(ushort *)
           ((uint)puVar4[((int)param_2 >> 0xc) * (uint)*puVar4 + ((int)param_1 >> 0xc) + 2] * 2 +
           *(int *)(iVar3 + 0x1b8));
  uVar5 = (uint)uVar1;
  if (((uVar1 & 0xf) == 0) ||
     (((uVar5 & 0xf) != 1 &&
      (iVar3 = FUN_08128f84(0x00000fff & param_1,param_2 & 0x00000fff,
                            *(undefined4 *)((uVar5 & 0xf) * 4 + 0x0882b0d4)), iVar3 == 0)))) {
    uVar5 = 0;
  }
  return uVar5;
}


