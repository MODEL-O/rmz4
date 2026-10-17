// undefined FUN_08007d28(void)
// entry 0x8007d28


undefined8 FUN_08007d28(uint param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar3 = DAT_08007d9c;
  if (*(short *)(DAT_08007d9c + 0x1d0) == 4) {
    iVar2 = FUN_08129050(param_1 + DAT_08007da0,0x3c000);
    param_1 = iVar2 + 0xf000;
  }
  puVar4 = (ushort *)(iVar3 + 0x7e0);
  uVar1 = *(ushort *)
           ((uint)puVar4[((int)param_2 >> 0xc) * (uint)*puVar4 + ((int)param_1 >> 0xc) + 2] * 2 +
           *(int *)(iVar3 + 0x1b8));
  uVar5 = (uint)uVar1;
  if (((uVar1 & 0xf) == 0) ||
     (((uVar5 & 0xf) != 1 &&
      (iVar3 = FUN_08128f84(DAT_08007da8 & param_1,param_2 & DAT_08007da8,
                            *(undefined4 *)((uVar5 & 0xf) * 4 + DAT_08007da4)), iVar3 == 0)))) {
    uVar5 = 0;
  }
  return CONCAT44(in_lr,uVar5);
}


