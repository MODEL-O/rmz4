// undefined FUN_080a4320(void)
// entry 0x80a4320


undefined4 FUN_080a4320(int param_1)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_080a4360);
    sVar3 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_080a4364);
    if (sVar3 == 0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined1 *)(param_1 + 0xf) = 2;
    }
    else {
      if (*(char *)(param_1 + 0xbc) == '\0') {
        uVar4 = 0xfffffff0;
      }
      else {
        uVar4 = 0x10;
      }
      *(undefined4 *)(param_1 + 100) = uVar4;
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) << 4;
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
    FUN_080e1cc4(param_1 + 0x54,*(char *)(param_1 + 0xf) + -1,*(byte *)(param_1 + 10) >> 4 & 1,
                 *(undefined1 *)(param_1 + 0xbc),*(undefined1 *)(param_1 + 0x25));
    *(undefined1 *)(param_1 + 0x12) = 0x10;
  }
  FUN_0801cff0(param_1);
  bVar1 = false;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) goto LAB_080a43fa;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar8;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    sVar3 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),iVar8 + 0xd00);
    if (sVar3 != 0) {
      bVar1 = true;
    }
  }
  if (!bVar1) {
    return in_lr;
  }
LAB_080a43fa:
  iVar8 = param_1 + 0x54;
  FUN_0802ab88(0,0xf,iVar8);
  bVar7 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar7 = bVar7 | 0x10;
  }
  FUN_080d4c8c(iVar8,DAT_080a4424,0,bVar7);
  uVar6 = DAT_080a44c0 * *DAT_080a44bc + DAT_080a44c4;
  local_24 = *(int *)(param_1 + 0x54) + (8 - ((uVar6 & 0x7fffffff) >> 0x10 & 0xf)) * 0x100;
  uVar6 = DAT_080a44c0 * (uVar6 & 0x7fffffff) + DAT_080a44c4;
  *DAT_080a44bc = uVar6 & 0x7fffffff;
  local_20 = *(int *)(param_1 + 0x58) + (8 - ((uVar6 & 0x7fffffff) >> 0x10 & 0xf)) * 0x100;
  FUN_080d0c88(1,&local_24);
  FUN_08002b10(0x2a);
  if (*(ushort *)(DAT_080a44c8 + 0xc) <= DAT_080a44cc) {
    *(ushort *)(DAT_080a44c8 + 0xc) = *(ushort *)(DAT_080a44c8 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,iVar8);
  piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a44d0);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 0x10);
  return in_lr;
}


