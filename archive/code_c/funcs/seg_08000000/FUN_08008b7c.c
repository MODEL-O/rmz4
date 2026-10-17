// undefined FUN_08008b7c(void)
// entry 0x8008b7c


undefined8 FUN_08008b7c(uint param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar2 = DAT_08008c00;
  if (*(short *)(DAT_08008c00 + 0x1d0) == 4) {
    iVar3 = FUN_08129050(param_1 + DAT_08008c04,0x3c000);
    param_1 = iVar3 + 0xf000;
  }
  if (((uint)((int)param_1 >> 0xc) < 0x771) && ((uint)((int)param_2 >> 0xc) <= DAT_08008c08)) {
    uVar1 = *(ushort *)
             ((uint)((ushort *)(iVar2 + 0x7e0))
                    [((int)param_2 >> 0xc) * (uint)*(ushort *)(iVar2 + 0x7e0) +
                     ((int)param_1 >> 0xc) + 2] * 2 + *(int *)(iVar2 + 0x1b8));
    iVar3 = FUN_08128f84(DAT_08008c10 & param_1,param_2 & DAT_08008c10,
                         *(undefined4 *)((uVar1 & 0xf) * 4 + DAT_08008c0c));
    if ((iVar3 != 0) &&
       ((iVar3 = DAT_08008c14, (uVar1 & 0x2000) != 0 ||
        (iVar3 = DAT_08008c2c, (uVar1 & 0x4000) != 0)))) {
      uVar4 = *(undefined4 *)(iVar2 + iVar3);
      goto LAB_08008c32;
    }
  }
  uVar4 = 0;
LAB_08008c32:
  return CONCAT44(in_lr,uVar4);
}


