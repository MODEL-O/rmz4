// undefined FUN_080adc78(void)
// entry 0x80adc78


undefined4 FUN_080adc78(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar1 != 0) {
    if (*(ushort *)(DAT_080adcf8 + 0xc) <= DAT_080adcfc) {
      *(ushort *)(DAT_080adcf8 + 0xc) = *(ushort *)(DAT_080adcf8 + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080add00);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  iVar3 = *(int *)(*DAT_080add04 + 0x54) - *(int *)(param_1 + 0x54) >> 8;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (iVar3 < 0x191) {
    iVar3 = *(int *)(*DAT_080add04 + 0x58) - *(int *)(param_1 + 0x58) >> 8;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (iVar3 < 0x191) {
      return in_lr;
    }
  }
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080add00);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  return in_lr;
}


