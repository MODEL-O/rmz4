// undefined FUN_080c1f94(void)
// entry 0x80c1f94


undefined4 FUN_080c1f94(int param_1)

{
  ushort uVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  undefined4 in_lr;
  
  iVar10 = *DAT_080c1fac;
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 == 1) {
    uVar1 = *(ushort *)(DAT_080c20a4 + 8);
    if ((uVar1 & 8) != 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
      goto LAB_080c219c;
    }
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar10 + 0x54);
    *(int *)(param_1 + 0x58) = *(int *)(iVar10 + 0x58) + DAT_080c20fc;
    if (*(char *)(param_1 + 0x73) != '\x03') goto LAB_080c21d0;
    FUN_080c1ad4(param_1,0);
    FUN_080c1ad4(param_1,1);
    FUN_080c1ad4(param_1,2);
    FUN_080c1ad4(param_1,3);
    *(byte *)(param_1 + 0x12) = (byte)uVar1 & 8;
    *(undefined4 *)(param_1 + 0xc0) = 0x1e0;
    bVar2 = *(byte *)(param_1 + 10);
    bVar4 = 0xfe;
  }
  else {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        if ((*(ushort *)(DAT_080c2118 + 8) & 8) != 0) {
          bVar2 = *(byte *)(param_1 + 10) & 0xfe;
LAB_080c219c:
          *(byte *)(param_1 + 10) = bVar2 & 0xfd;
          *(undefined4 *)(param_1 + 0x8c) = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined1 *)(param_1 + 0x94) = 0;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
          piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c21cc);
          *(undefined4 *)(param_1 + 0xc) = 3;
          *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 0xc);
          return in_lr;
        }
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar10 + 0x54);
        *(int *)(param_1 + 0x58) = *(int *)(iVar10 + 0x58) + DAT_080c2164;
        cVar3 = FUN_0802b700(iVar10);
        *(char *)(param_1 + 0x12) = cVar3 + *(char *)(param_1 + 0x12);
        iVar10 = *(int *)(param_1 + 0xc0) + -1;
        *(int *)(param_1 + 0xc0) = iVar10;
        if ((iVar10 == -1) || (0x40 < *(byte *)(param_1 + 0x12))) {
          piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c2168);
          *(undefined4 *)(param_1 + 0xc) = 2;
          *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 8);
          FUN_080c1bd8(param_1);
          return in_lr;
        }
      }
      else if (bVar2 == 3) {
        bVar2 = *(byte *)(param_1 + 0x12);
        if ((bVar2 & 1) == 0) {
          bVar4 = *(byte *)(param_1 + 10) | 1;
        }
        else {
          bVar4 = *(byte *)(param_1 + 10) & 0xfe;
        }
        *(byte *)(param_1 + 10) = bVar4;
        *(byte *)(param_1 + 0x12) = bVar2 - 1;
        if (bVar2 == 0) {
          bVar2 = *(byte *)(param_1 + 10) & 0xfe;
          goto LAB_080c219c;
        }
      }
      goto LAB_080c21d0;
    }
    if (bVar2 != 0) goto LAB_080c21d0;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar7 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar7;
    iVar8 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar8;
    if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
      iVar7 = *(int *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_080c2054);
      if (iVar7 < iVar8) {
        *(int *)(param_1 + 0x60) = iVar7;
      }
    }
    else {
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      iVar8 = *(int *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_080c2004);
      if (iVar8 < iVar7) {
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          *(int *)(param_1 + 0x5c) = -iVar8;
        }
        else {
          *(int *)(param_1 + 0x5c) = iVar8;
        }
      }
    }
    puVar9 = (uint *)(param_1 + 0x8c);
    if ((*puVar9 & 4) == 0) {
      sVar5 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (sVar5 != 0) {
        *puVar9 = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined1 *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(undefined1 *)(param_1 + 0x12) = 0x20;
        *(undefined1 *)(param_1 + 0xe) = 3;
      }
      goto LAB_080c21d0;
    }
    FUN_0801cf00(param_1,DAT_080c2058);
    *(char *)(iVar10 + 0x278) = *(char *)(iVar10 + 0x278) + '\x01';
    *puVar9 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    bVar2 = *(byte *)(param_1 + 10);
    bVar4 = 0xfb;
  }
  *(byte *)(param_1 + 10) = bVar4 & bVar2;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080c21d0:
  FUN_0801cff0(param_1);
  return in_lr;
}


