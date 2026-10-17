// undefined FUN_080ade10(void)
// entry 0x80ade10


undefined4 FUN_080ade10(int param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xd) != '\0') &&
     ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0 ||
       (iVar6 = *(ushort *)(param_1 + 0xbc) - 1, *(ushort *)(param_1 + 0xbc) = (ushort)iVar6,
       iVar6 * 0x10000 - DAT_080ade60 == 0)) || ((*(uint *)(param_1 + 0x8c) & 4) != 0)))) {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ade64);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    FUN_080adfbc(param_1);
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) goto LAB_080adf5a;
    FUN_08002b10(0x13a);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
        iVar6 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
        *(int *)(param_1 + 0x5c) = iVar6;
        if (iVar6 < DAT_080adfac) {
          *(int *)(param_1 + 0x5c) = DAT_080adfac;
        }
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
        iVar6 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
        *(int *)(param_1 + 0x60) = iVar6;
        if ((CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) ==
             DAT_080adfb0) && (iVar6 < 0)) {
          FUN_0801cf00(param_1,DAT_080adfb0 + 1);
          *(undefined4 *)(param_1 + 0x68) = 0xfffffffc;
        }
        if (*(int *)(param_1 + 0x60) < -0x80) {
          *(undefined4 *)(param_1 + 0x60) = 0xffffff80;
        }
      }
      goto LAB_080adf5a;
    }
    if (bVar1 != 0) goto LAB_080adf5a;
    puVar7 = (ushort *)(param_1 + 0xbe);
    *(ushort *)(param_1 + 0x50) = *puVar7;
    *(ushort *)(param_1 + 0x52) = *puVar7;
    uVar2 = *puVar7;
    *puVar7 = uVar2 + 4;
    if ((ushort)(uVar2 + 4) < 0x100) goto LAB_080adf5a;
    FUN_0801cc9c(param_1);
    FUN_0801cf00(param_1,DAT_080aded8);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_080adedc,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined1 *)(param_1 + 0x12) = 8;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080adf5a:
  FUN_0801cff0(param_1);
  uVar5 = FUN_0801fb14(DAT_080adfb4,param_1 + 0x54);
  if (0x5000 < uVar5) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080adfb8);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0xc);
  }
  return in_lr;
}


