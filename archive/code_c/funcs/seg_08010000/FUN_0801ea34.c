// undefined FUN_0801ea34(void)
// entry 0x801ea34


undefined4 FUN_0801ea34(void)

{
  ushort uVar1;
  int *piVar2;
  undefined1 uVar3;
  char cVar4;
  byte bVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_lr;
  
  piVar2 = DAT_0801ea74;
  *(char *)(*DAT_0801ea74 + 0x14) = *(char *)(*DAT_0801ea74 + 0x14) + '\x01';
  iVar7 = *piVar2;
  *(uint *)(iVar7 + 0x10) = *(uint *)(iVar7 + 0x10) | 1 << (sbyte)piVar2[1];
  *(char *)(iVar7 + 0x15) = (char)piVar2[1];
  *(undefined1 *)(piVar2 + 5) = *(undefined1 *)((int)piVar2 + 7);
  iVar7 = FUN_08129120(piVar2[2],0x3c);
  iVar7 = iVar7 - *(int *)((uint)*(byte *)(piVar2 + 1) * 4 + DAT_0801ea78);
  if (iVar7 < 1) {
    uVar3 = 0x14;
  }
  else {
    if (iVar7 < 200) {
      cVar4 = FUN_08128fb8(iVar7 + 9,10);
      *(char *)((int)piVar2 + 0x15) = '\x14' - cVar4;
      goto LAB_0801ea96;
    }
    uVar3 = 0;
  }
  *(undefined1 *)((int)piVar2 + 0x15) = uVar3;
LAB_0801ea96:
  iVar7 = FUN_08128fb8((short)piVar2[3],*(ushort *)((int)piVar2 + 0x12) + 1);
  if (iVar7 == 0) {
    *(undefined1 *)((int)piVar2 + 0x16) = 0;
  }
  else {
    iVar7 = FUN_08128fb8(*(int *)((uint)*(byte *)(piVar2 + 1) * 4 + DAT_0801eacc) * 10,iVar7);
    if (iVar7 < 0xb) {
      cVar4 = '\x0f';
    }
    else if (iVar7 < 0x19) {
      cVar4 = '\x19' - (char)iVar7;
    }
    else {
      cVar4 = '\0';
    }
    *(char *)((int)piVar2 + 0x16) = cVar4;
  }
  uVar8 = (uint)*(ushort *)((int)piVar2 + 0xe);
  if (uVar8 == 0) {
    *(undefined1 *)((int)piVar2 + 0x17) = 0x14;
  }
  else if (uVar8 < 0x79) {
    cVar4 = FUN_08128fb8(uVar8 - 1,6);
    *(char *)((int)piVar2 + 0x17) = '\x14' - cVar4;
  }
  else {
    *(undefined1 *)((int)piVar2 + 0x17) = 0;
  }
  uVar1 = *(ushort *)((int)piVar2 + 0x12);
  if (uVar1 == 0) {
    cVar4 = '\x0f';
  }
  else if (uVar1 < 5) {
    cVar4 = (char)uVar1 * -3 + '\x0f';
  }
  else {
    cVar4 = '\0';
  }
  *(char *)(piVar2 + 6) = cVar4;
  bVar5 = *(byte *)(DAT_0801eb84 + DAT_0801eb88) & 0x10;
  if ((*(byte *)(DAT_0801eb84 + DAT_0801eb88) & 0x10) != 0) {
    bVar5 = 10;
  }
  *(byte *)((int)piVar2 + 0x19) = bVar5;
  iVar7 = (uint)*(byte *)((int)piVar2 + 0x11) - (uint)*(byte *)(piVar2 + 4);
  *(char *)((int)piVar2 + 0x1a) = (char)iVar7;
  if (0 < iVar7 * 0x1000000) {
    *(undefined1 *)((int)piVar2 + 0x1a) = 0;
  }
  *(char *)((int)piVar2 + 5) =
       *(char *)((int)piVar2 + 0x1a) +
       (char)piVar2[6] +
       *(char *)((int)piVar2 + 0x16) + *(char *)((int)piVar2 + 0x15) + (char)piVar2[5] +
       *(char *)((int)piVar2 + 0x17) + *(char *)((int)piVar2 + 0x19);
  *(short *)(*piVar2 + 0xc) = (short)*(char *)((int)piVar2 + 5) + *(short *)(*piVar2 + 0xc);
  iVar7 = FUN_08128fb8((int)*(short *)(*piVar2 + 0xc),*(undefined1 *)(*piVar2 + 0x14));
  cVar4 = '\0';
  for (piVar6 = DAT_0801eb8c; *piVar6 <= iVar7; piVar6 = piVar6 + 1) {
    cVar4 = cVar4 + '\x01';
  }
  *(char *)(*piVar2 + 1) = cVar4;
  FUN_0801ebf4();
  if (*(short *)((int)piVar2 + 0x1e) != 0) {
    *(byte *)(DAT_0801ebcc + 0x14) = *(byte *)(DAT_0801ebcc + 0x14) & 0xef;
  }
  if ((short)piVar2[7] != 0) {
    *(byte *)(DAT_0801ebcc + 0x14) = *(byte *)(DAT_0801ebcc + 0x14) & 0xdf;
  }
  return in_lr;
}


