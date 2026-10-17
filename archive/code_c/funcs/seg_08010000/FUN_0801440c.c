// undefined FUN_0801440c(void)
// entry 0x801440c


undefined4 FUN_0801440c(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar9 = 0;
  iVar2 = FUN_08000a70(0x280);
  iVar4 = DAT_080144bc;
  if (iVar2 != 0) {
    *(int *)(DAT_080144bc + 0x174) = iVar2;
    *(undefined4 *)(iVar4 + 0x178) = DAT_080144c0;
    *(undefined4 *)(iVar4 + 0x17c) = DAT_080144c4;
    uVar3 = *(int *)(param_1 + 0x34) + DAT_080144c8;
    uVar6 = (uint)*(ushort *)(param_1 + 0x38) * 0x10000;
    puVar8 = (uint *)(iVar2 + 0x3c);
    do {
      *puVar8 = uVar3 & 0xffff | uVar6;
      uVar1 = DAT_080144d0;
      puVar8 = puVar8 + -1;
    } while (iVar2 <= (int)puVar8);
    iVar4 = *(int *)(param_1 + 0x34) + DAT_080144cc;
    puVar8 = (uint *)(iVar2 + 0x40);
    iVar2 = 0x8f;
    do {
      iVar9 = iVar9 + 0x40;
      iVar7 = (int)uVar6 >> 0x10;
      iVar5 = iVar7;
      if (iVar7 < 0) {
        iVar5 = iVar7 + 3;
      }
      *puVar8 = iVar7 << 0x10 |
                ((iVar4 * 0x10000 >> 0x10) + (iVar9 >> 8) + (iVar5 >> 2)) * 0x10000 >> 0x10 & uVar1;
      puVar8 = puVar8 + 1;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  FUN_08007638(param_1,param_2);
  return in_lr;
}


