// undefined FUN_08002364(void)
// entry 0x8002364


void FUN_08002364(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  iVar2 = 0x020008a0;
  iVar7 = 0;
  piVar5 = (int *)(0x020008a0 + 0x20);
  piVar6 = piVar5;
  do {
    if ((*(short *)(iVar7 * 2 + iVar2) != 0) && ((short)piVar5[4] == 0)) {
      iVar3 = *piVar5;
      bVar1 = *(byte *)(iVar3 + 1);
      sVar4 = ((ushort)*(byte *)(iVar3 + 2) - (ushort)bVar1) + 1;
      if ((0x000001ff & *(ushort *)((int)piVar5 + 0x12)) == 0) {
        FUN_08128be4(iVar3 + (int)sVar4 *
                             (uint)*(byte *)(*(char *)((int)piVar5 + 0xd) * 2 +
                                            *(int *)((uint)*(byte *)(piVar5 + 3) * 4 + piVar5[2])) *
                             2 + 4,
                     (uint)bVar1 * 2 + (uint)*(ushort *)((int)piVar5 + 0x12) + 0x03002ac0,
                     0x001fffff & (int)sVar4);
      }
      else {
        FUN_08128be4(iVar3 + (int)sVar4 *
                             (uint)*(byte *)(*(char *)((int)piVar6 + 0xd) * 2 +
                                            *(int *)((uint)*(byte *)(piVar6 + 3) * 4 + piVar6[2])) *
                             2 + 4,
                     (bVar1 & 0xf) * 2 + (uint)*(ushort *)((int)piVar6 + 0x12) + 0x03002ac0,
                     0x001fffff & (int)sVar4);
      }
    }
    piVar5 = piVar5 + 5;
    piVar6 = piVar6 + 5;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x10);
  return;
}


