// undefined FUN_0805e634(void)
// entry 0x805e634


undefined4 FUN_0805e634(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar2 = DAT_0805e758;
  iVar1 = DAT_0805e754;
  iVar6 = DAT_0805e750;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08001d30(DAT_0805e750 + DAT_0805e754,
                 ((uint)*(ushort *)(DAT_0805e758 + 0xaa) -
                 (uint)(*(ushort *)(DAT_0805e750 + DAT_0805e754 + 6) >> 6)) * 0x20 + 0x10000);
    iVar4 = DAT_0805e760;
    iVar3 = DAT_0805e75c;
    FUN_08002208(iVar6 + DAT_0805e75c,
                 ((uint)*(ushort *)(DAT_0805e760 + 0xaa) - (uint)*(byte *)(iVar6 + DAT_0805e75c + 7)
                 ) * 0x20 + 0x200);
    FUN_08001d30(iVar1 + 0x6b8,
                 ((uint)*(ushort *)(iVar2 + 0xac) - (uint)(*(ushort *)(iVar1 + 0x6be) >> 6)) * 0x20
                 + 0x10000);
    FUN_08002208(iVar3 + 0x6b8,
                 ((uint)*(ushort *)(iVar4 + 0xac) - (uint)*(byte *)(iVar3 + 0x6bf)) * 0x20 + 0x200);
    if (*(int *)(param_1 + 0xcc) == 0) {
      uVar7 = DAT_0805e768 * *DAT_0805e764 + DAT_0805e76c;
      *DAT_0805e764 = uVar7 & 0x7fffffff;
      iVar6 = FUN_080c5400(param_1,(uVar7 & 0x7fffffff) >> 0x10 & 3);
      *(int *)(param_1 + 0xcc) = iVar6;
    }
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0805e774) * 4 +
                               DAT_0805e770)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_0805e778) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  iVar6 = *(int *)(param_1 + 0xcc);
  if (iVar6 != 0) {
    if (*(byte *)(iVar6 + 0xc) < 3) {
      if (*(char *)(iVar6 + 0xd) != '\x01') {
        return in_lr;
      }
    }
    else {
      *(int *)(param_1 + 0xcc) = 0;
    }
  }
  cVar5 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar5;
  if (cVar5 == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


