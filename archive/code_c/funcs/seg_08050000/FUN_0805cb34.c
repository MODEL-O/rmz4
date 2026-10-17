// undefined FUN_0805cb34(void)
// entry 0x805cb34


undefined4 FUN_0805cb34(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xbb) * 4 + DAT_0805cb70) +
                   (uint)*(byte *)(param_1 + 0xbc));
  if (*(char *)(param_1 + 0xf) == '\0') {
    bVar2 = false;
    if (*(int *)(param_1 + 0xcc) == 0) {
      iVar3 = FUN_080c3eb4(param_1);
      *(int *)(param_1 + 0xcc) = iVar3;
      if (iVar3 != 0) goto LAB_0805cb76;
    }
    else {
      bVar2 = true;
LAB_0805cb76:
      if (!bVar2) {
        iVar4 = *(int *)(param_1 + 0xb4) + *(short *)((uint)bVar1 * 2 + DAT_0805cc34) + DAT_0805cc38
        ;
        *(int *)(param_1 + 0x5c) = iVar4;
        iVar3 = -1;
        if (*(int *)(param_1 + 0x58) < iVar4) {
          iVar3 = 1;
        }
        *(int *)(param_1 + 100) = iVar3;
        *(int *)(param_1 + 0x60) = iVar3 * 0x300;
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
        goto LAB_0805cbc8;
      }
    }
    *(undefined1 *)(param_1 + 0xe) = 3;
    *(undefined1 *)(param_1 + 0xf) = 0;
    FUN_08128f80(param_1,*(undefined4 *)(DAT_0805cb90 + 0xc));
  }
  else {
LAB_0805cbc8:
    FUN_0801cff0(param_1);
    FUN_08005784(param_1 + 0x74,
                 *(int *)(*(char *)(param_1 + 0x71) * 4 +
                         *(int *)((uint)*(ushort *)
                                         ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0805cc40) * 4 +
                                 DAT_0805cc3c)) +
                 (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_0805cc44) +
                                (int)*(char *)(param_1 + 0x71)) * 0x18);
    iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar3;
    if (-1 < *(int *)(param_1 + 100) * (iVar3 - *(int *)(param_1 + 0x5c))) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x5c);
      *(undefined1 *)(param_1 + 0xe) = 2;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}


