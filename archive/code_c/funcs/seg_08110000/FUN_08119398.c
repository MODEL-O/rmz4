// undefined FUN_08119398(void)
// entry 0x8119398


undefined4 FUN_08119398(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  ushort uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 in_lr;
  
  iVar10 = *(int *)(DAT_081193d8 + param_1);
  iVar7 = DAT_081193dc + param_1;
  pcVar6 = (char *)(DAT_081193e0 + param_1);
  if (*pcVar6 == '\0') {
    *(undefined1 *)(iVar7 + 1) = 0;
    *pcVar6 = *pcVar6 + '\x01';
  }
  bVar1 = *(byte *)(iVar7 + 1);
  if ((*(ushort *)(DAT_081193e4 + 6) & 0x10) == 0) {
    if (((*(ushort *)(DAT_081193e4 + 6) & 0x20) != 0) && ((bVar1 & 3) != 0)) {
      cVar2 = -1;
      goto LAB_081193fa;
    }
  }
  else if ((bVar1 & 3) != 3) {
    cVar2 = '\x01';
LAB_081193fa:
    *(byte *)(iVar7 + 1) = bVar1 + cVar2;
  }
  if ((*(ushort *)(DAT_08119418 + 6) & 0x80) == 0) {
    if ((*(ushort *)(DAT_08119418 + 6) & 0x40) != 0) {
      iVar7 = DAT_0811946c + param_1;
      if (3 < *(byte *)(iVar7 + 1)) {
        cVar2 = *(byte *)(iVar7 + 1) - 4;
        goto LAB_08119434;
      }
    }
  }
  else {
    iVar7 = DAT_0811941c + param_1;
    if (*(byte *)(iVar7 + 1) < 4) {
      cVar2 = *(byte *)(iVar7 + 1) + 4;
LAB_08119434:
      *(char *)(iVar7 + 1) = cVar2;
    }
  }
  iVar7 = DAT_0811946c + param_1;
  if (bVar1 != *(byte *)(iVar7 + 1)) {
    FUN_08002b10(1);
  }
  iVar8 = *(int *)(iVar7 + 0x20);
  *(uint *)(iVar8 + 0x74) = ((*(byte *)(iVar7 + 1) & 3) * 0x18 + 0x80) * 0x100;
  if ((*(byte *)(iVar7 + 1) & 1) == 0) {
    uVar4 = 0x3800;
  }
  else {
    uVar4 = 0x3000;
  }
  *(undefined4 *)(iVar8 + 0x78) = uVar4;
  iVar7 = DAT_081194d0 + param_1;
  if (3 < *(byte *)(iVar7 + 1)) {
    *(int *)(*(int *)(iVar7 + 0x20) + 0x78) = *(int *)(*(int *)(iVar7 + 0x20) + 0x78) + 0x1000;
  }
  uVar5 = *(ushort *)(DAT_081194d4 + 4);
  uVar9 = uVar5 & 1;
  if ((uVar5 & 1) == 0) {
    if ((uVar5 & 2) != 0) {
      FUN_08002b10(3);
      iVar7 = *(int *)(iVar7 + 0x20);
      *(uint *)(iVar7 + 0x74) = uVar9;
      *(uint *)(iVar7 + 0x78) = uVar9;
      *(char *)(param_1 + 3) = (char)uVar9;
      *(char *)(DAT_0811959c + param_1) = (char)uVar9;
    }
    goto LAB_0811956c;
  }
  if ((int)((uint)*(ushort *)(iVar10 + 0xca) & 1 << (uint)*(byte *)(iVar7 + 1)) >>
      (uint)*(byte *)(iVar7 + 1) == 0) {
    FUN_08002b10(4);
    goto LAB_0811956c;
  }
  FUN_08002b10(2);
  uVar5 = *(ushort *)(iVar10 + 200);
  uVar9 = (uint)*(byte *)(iVar7 + 1);
  if ((int)((uint)uVar5 & 1 << uVar9) >> uVar9 != 0) {
    *(ushort *)(iVar10 + 200) = uVar5 & ~(ushort)(1 << uVar9);
    goto LAB_0811956c;
  }
  if (uVar9 == 0) {
    uVar3 = (ushort)DAT_081194ec;
    uVar5 = uVar5 & uVar3 & uVar3 - 2;
    uVar3 = uVar3 - 6;
LAB_08119526:
    *(ushort *)(iVar10 + 200) = uVar5 & uVar3;
  }
  else {
    if (uVar9 == 1) {
      uVar3 = (ushort)DAT_08119500;
      uVar5 = uVar5 & uVar3 & uVar3 - 3;
      uVar3 = uVar3 - 7;
      goto LAB_08119526;
    }
    if (uVar9 == 2) {
      uVar3 = (ushort)DAT_08119514;
      uVar5 = uVar5 & uVar3 & uVar3 - 1;
      uVar3 = uVar3 - 7;
      goto LAB_08119526;
    }
    if (uVar9 == 3) {
      uVar3 = (ushort)DAT_0811953c;
      uVar5 = uVar5 & uVar3 & uVar3 - 1;
      uVar3 = uVar3 - 3;
      goto LAB_08119526;
    }
  }
  *(ushort *)(iVar10 + 200) =
       (ushort)(1 << *(sbyte *)(DAT_08119540 + param_1 + 1)) | *(ushort *)(iVar10 + 200);
LAB_0811956c:
  uVar9 = (uint)*(byte *)(DAT_081195a0 + param_1 + 1);
  if ((int)((uint)*(ushort *)(iVar10 + 0xca) & 1 << uVar9) >> uVar9 == 0) {
    FUN_0810d85c((uint)*(ushort *)(DAT_081195cc + 0x114) + DAT_081195d0,1,0x10);
  }
  else {
    FUN_0810d85c((uint)*(ushort *)((uVar9 + 0x82) * 2 + DAT_081195a4) + DAT_081195a8,1,0x10);
  }
  return in_lr;
}


