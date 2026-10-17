// undefined FUN_0801f4a4(void)
// entry 0x801f4a4


undefined4 FUN_0801f4a4(void)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  FUN_08006e94();
  iVar7 = DAT_0801f5f8;
  FUN_08027584(DAT_0801f5f8);
  FUN_08002348();
  iVar3 = DAT_0801f600;
  piVar2 = DAT_0801f5fc;
  if ((*(ushort *)(iVar7 + -8) & 8) == 0) {
    if ((*(uint *)(*DAT_0801f5fc + 0x10) & 2) != 0) {
      pbVar1 = (byte *)(DAT_0801f600 + 5);
      *(byte *)(DAT_0801f600 + 4) = *(byte *)(DAT_0801f600 + 4) & 0x7f;
      *(byte *)(iVar3 + 5) = *pbVar1 & 0xe0 | 0x20;
    }
    iVar7 = DAT_0801f600;
    if ((*(uint *)(*piVar2 + 0x10) & 4) != 0) {
      *(byte *)(DAT_0801f600 + 6) = *(byte *)(DAT_0801f600 + 6) | 1;
      *(byte *)(iVar7 + 4) = *(byte *)(iVar7 + 4) & 0x7f;
      *(byte *)(iVar7 + 5) = *(byte *)(iVar7 + 5) & 0xe0;
    }
    uVar4 = DAT_0801f604;
    bVar5 = 0;
    uVar6 = 3;
    do {
      if ((1 << uVar6 & *(uint *)(*piVar2 + 0x10)) != 0) {
        bVar5 = bVar5 + 1;
      }
      uVar6 = uVar6 + 1 & 0xff;
    } while (uVar6 < 0xb);
    if (3 < bVar5) {
      *(byte *)(DAT_0801f600 + 6) = *(byte *)(DAT_0801f600 + 6) | 0x20;
    }
    if ((*(uint *)(*piVar2 + 0x10) & 0x800) != 0) {
      *(byte *)(DAT_0801f600 + 6) = *(byte *)(DAT_0801f600 + 6) | 0x40;
    }
    iVar7 = *piVar2;
    if ((*(uint *)(iVar7 + 0x10) & 0x1000) != 0) {
      *(byte *)(DAT_0801f600 + 6) = *(byte *)(DAT_0801f600 + 6) | 0x80;
    }
    if ((*(uint *)(iVar7 + 0x10) & 0x7f8) == 0x7f8) {
      *(byte *)(DAT_0801f600 + 7) = *(byte *)(DAT_0801f600 + 7) | 1;
    }
    if ((*(uint *)(iVar7 + 0x10) & 0x2000) != 0) {
      *(byte *)(DAT_0801f600 + 7) = *(byte *)(DAT_0801f600 + 7) | 2;
    }
    if ((*(uint *)(iVar7 + 0x10) & 0x4000) != 0) {
      *(byte *)(DAT_0801f600 + 7) = *(byte *)(DAT_0801f600 + 7) | 4;
    }
    if ((*(uint *)(iVar7 + 0x10) & 0x8000) != 0) {
      *(byte *)(DAT_0801f600 + 7) = *(byte *)(DAT_0801f600 + 7) | 8;
    }
    FUN_0801e918(uVar4);
  }
  else {
    FUN_0801e878(*(undefined1 *)(iVar7 + -0x10),DAT_0801f630);
  }
  iVar7 = DAT_0801f634 + DAT_0801f638 + -0x60;
  FUN_080382e4(*(undefined4 *)(DAT_0801f634 + DAT_0801f638),iVar7);
  FUN_08038354(iVar7);
  return in_lr;
}


