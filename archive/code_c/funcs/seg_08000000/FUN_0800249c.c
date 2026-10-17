// undefined FUN_0800249c(void)
// entry 0x800249c


undefined4 FUN_0800249c(uint param_1,undefined2 param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  int *piVar6;
  short sVar7;
  int *piVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar9 = 0;
  uVar3 = (param_1 & 0xffff) + 1;
  puVar4 = DAT_08002564;
  do {
    if (*puVar4 == uVar3) {
      return in_lr;
    }
    puVar4 = puVar4 + 1;
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x10);
  iVar9 = 0;
  uVar2 = *DAT_08002564;
  puVar4 = DAT_08002564;
  while (uVar2 != 0) {
    puVar4 = puVar4 + 1;
    iVar9 = iVar9 + 1;
    if (0xf < iVar9) break;
    uVar2 = *puVar4;
  }
  if (iVar9 != 0x10) {
    piVar8 = (int *)(iVar9 * 0x14 + DAT_08002568);
    iVar5 = (param_1 & 0xffff) * 4;
    piVar6 = (int *)(iVar5 + DAT_0800256c);
    *piVar8 = *piVar6 + (int)piVar6;
    piVar8[1] = *(int *)(iVar5 + DAT_08002570);
    *(undefined2 *)(piVar8 + 4) = 0;
    *(undefined2 *)((int)piVar8 + 0x12) = param_2;
    FUN_080034a4(piVar8 + 2);
    FUN_080034b8(piVar8 + 2,0);
    iVar5 = *piVar8;
    bVar1 = *(byte *)(iVar5 + 1);
    sVar7 = ((ushort)*(byte *)(iVar5 + 2) - (ushort)bVar1) + 1;
    if ((DAT_08002574 & *(ushort *)((int)piVar8 + 0x12)) == 0) {
      FUN_08128be4(iVar5 + (int)sVar7 *
                           (uint)*(byte *)(*(char *)((int)piVar8 + 0xd) * 2 +
                                          *(int *)((uint)*(byte *)(piVar8 + 3) * 4 + piVar8[2])) * 2
                           + 4,
                   (uint)bVar1 * 2 + (uint)*(ushort *)((int)piVar8 + 0x12) + DAT_08002578,
                   DAT_0800257c & (int)sVar7);
    }
    else {
      FUN_08128be4(iVar5 + (int)sVar7 *
                           (uint)*(byte *)(*(char *)((int)piVar8 + 0xd) * 2 +
                                          *(int *)((uint)*(byte *)(piVar8 + 3) * 4 + piVar8[2])) * 2
                           + 4,
                   (bVar1 & 0xf) * 2 + (uint)*(ushort *)((int)piVar8 + 0x12) + DAT_080025cc,
                   DAT_080025d0 & (int)sVar7);
    }
    *(short *)(iVar9 * 2 + DAT_080025d4) = (short)uVar3;
  }
  return in_lr;
}


