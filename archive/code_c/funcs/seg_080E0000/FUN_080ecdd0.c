// undefined FUN_080ecdd0(void)
// entry 0x80ecdd0


undefined4 FUN_080ecdd0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_080ece40;
  if ((*(byte *)(DAT_080ece44 + DAT_080ece40) & 0xf) == 1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    iVar2 = DAT_080ece48;
    FUN_08005760(param_1 + 0x74,DAT_080ece48,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (0x60 < *(byte *)(DAT_080ece4c + iVar1)) {
      FUN_08005784(param_1 + 0x74,iVar2 + -0x30);
    }
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ece50);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
    FUN_080ecefc(param_1);
  }
  else {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ece78);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080ecf58(param_1);
  }
  return in_lr;
}


