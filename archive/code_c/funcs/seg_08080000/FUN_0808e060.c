// undefined FUN_0808e060(void)
// entry 0x808e060


undefined4 FUN_0808e060(int param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0xb9);
    *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0xba);
    iVar6 = DAT_0808e0b0;
    iVar8 = (uint)*(byte *)(param_1 + 0xd) * 2;
    *(undefined1 *)(param_1 + 0xb9) = *(undefined1 *)(iVar8 + DAT_0808e0b0);
    *(undefined1 *)(param_1 + 0xba) = *(undefined1 *)(iVar8 + iVar6 + 1);
    iVar6 = (int)*(short *)(param_1 + 0xbc);
    if (iVar6 == 0) {
      iVar6 = 1;
    }
    *(int *)(param_1 + 0xc0) = iVar6;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  puVar7 = (ushort *)(param_1 + 0xbc);
  if (*puVar7 != 0) {
    *puVar7 = *puVar7 - 1;
  }
  uVar3 = *puVar7;
  uVar4 = *(undefined2 *)(param_1 + 0xc0);
  bVar2 = *(byte *)(param_1 + 0xb9);
  iVar8 = FUN_08128fb8((uint)uVar3 *
                       ((bVar2 + 0x80 & 0xff) - (*(byte *)(param_1 + 0x12) + 0x80 & 0xff)),uVar4);
  iVar6 = DAT_0808e180;
  *(uint *)(param_1 + 0x54) =
       *(int *)(iVar5 + 0x54) +
       ((uint)bVar1 * 2 + -1) *
       (*(short *)((((uint)bVar2 - iVar8) * 0x1000000 + 0x40000000 >> 0x17) + DAT_0808e180) * 4 +
       0x3600);
  bVar1 = *(byte *)(param_1 + 0xba);
  iVar8 = FUN_08128fb8((uint)uVar3 *
                       ((bVar1 + 0x40 & 0xff) - (*(byte *)(param_1 + 0x13) + 0x40 & 0xff)),uVar4);
  *(int *)(param_1 + 0x58) =
       *(int *)(iVar5 + 0x58) + 0xc00 + *(short *)(((uint)bVar1 - iVar8 & 0xff) * 2 + iVar6) * 6;
  return in_lr;
}


