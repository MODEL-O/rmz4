// undefined FUN_080c2798(void)
// entry 0x80c2798


undefined4 FUN_080c2798(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  iVar5 = *(int *)(iVar2 + 0x28);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(byte *)(iVar2 + 0xc) < 2) {
    FUN_0801cff0(param_1);
    if (*(char *)(iVar2 + 0xbe) == '\0') {
      iVar3 = *(int *)(param_1 + 0xb4) + 0x80;
    }
    else {
      iVar3 = *(int *)(param_1 + 0xb4) + 0x100;
    }
    *(int *)(param_1 + 0xb4) = iVar3;
    iVar7 = *(int *)(iVar5 + 0x54);
    iVar3 = DAT_080c2854;
    if ((*(byte *)(iVar5 + 10) & 0x10) != 0) {
      iVar3 = 0xc00;
    }
    iVar8 = *(int *)(iVar5 + 0x58) + DAT_080c2858;
    iVar6 = *(int *)(iVar2 + 0xb8);
    iVar2 = *(int *)(iVar2 + 0xc0);
    iVar5 = FUN_08128fb8(*(int *)(param_1 + 0xb4) * iVar2,0x1000);
    if (iVar5 <= iVar6 - iVar8) {
      iVar2 = FUN_08128fb8(iVar5 << 0xd,iVar2);
      *(uint *)(param_1 + 0x54) = iVar2 * ((bVar1 >> 4 & 1) * 2 + -1) + iVar7 + iVar3;
      *(int *)(param_1 + 0x58) = iVar8 + iVar5;
      return in_lr;
    }
  }
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c285c);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
  FUN_080c2890(param_1);
  return in_lr;
}


