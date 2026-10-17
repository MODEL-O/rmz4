// undefined FUN_080986d8(void)
// entry 0x80986d8


undefined4 FUN_080986d8(int param_1)

{
  short sVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN_08098a8c(param_1);
    return in_lr;
  }
  if (*(char *)(param_1 + 0x11) != '\0') {
    FUN_08001d30(DAT_08098754,
                 ((uint)*(ushort *)(DAT_08098758 + 0x174) -
                 (uint)(*(ushort *)(DAT_08098754 + 6) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(DAT_0809875c,
                 ((uint)*(ushort *)(DAT_08098760 + 0x174) - (uint)*(byte *)(DAT_0809875c + 7)) *
                 0x20 + 0x200);
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08098764);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 8);
    FUN_08098b20(param_1);
    return in_lr;
  }
  piVar5 = (int *)(param_1 + 0xc0);
  if (*piVar5 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_08098796:
      if (*piVar5 != 0) goto LAB_0809879c;
    }
    else {
      iVar6 = FUN_0802adac(0,param_1,DAT_080987d4);
      *piVar5 = iVar6;
      if (iVar6 != 0) {
        FUN_08005784(param_1 + 0x74,DAT_080987d8);
        goto LAB_08098796;
      }
    }
  }
  else {
LAB_0809879c:
    iVar6 = FUN_0802b3e4(*piVar5);
    if (iVar6 == 0) {
      sVar1 = CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70));
      FUN_0801cfc8(param_1,sVar1,(short)*(char *)(param_1 + 0x71),sVar1 + 1);
      FUN_0801cff0(param_1);
      return in_lr;
    }
    FUN_08005784(param_1 + 0x74,DAT_0809883c);
    *piVar5 = 0;
  }
  cVar2 = *(char *)(param_1 + 0xd);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      if (((*(int *)(*DAT_08098990 + 0x54) - *(int *)(param_1 + 0x54)) + 0x3000U < 0x6001) &&
         ((*(int *)(*DAT_08098990 + 0x58) - *(int *)(param_1 + 0x58)) + 0x6000U < 0xc001)) {
        local_14 = *(int *)(param_1 + 0x58) + 0xc00;
        local_18 = *(int *)(param_1 + 0x54);
        FUN_080984bc(&local_18,*(byte *)(param_1 + 10) >> 4 & 1);
        FUN_0801cf00(param_1,DAT_08098994);
        *(undefined1 *)(param_1 + 0xbe) = 4;
LAB_080989b6:
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
    else if ((cVar2 == '\x02') &&
            (cVar2 = *(char *)(param_1 + 0xbe) + -1, *(char *)(param_1 + 0xbe) = cVar2, cVar2 == -1)
            ) {
      FUN_0801cf00(param_1,DAT_08098a34);
      goto LAB_080989b6;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar9 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar9;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x68);
    iVar6 = DAT_08098a38;
    if (iVar9 < *(int *)(param_1 + 0xb8) +
                *(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + DAT_08098a38) * 0x10) {
      FUN_0801cf00(param_1,DAT_08098a3c);
      *(int *)(param_1 + 0x58) =
           *(int *)(param_1 + 0xb8) + *(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + iVar6) * 0x10
      ;
      *(int *)(param_1 + 0xb4) =
           *(int *)(param_1 + 0x54) +
           *(short *)((*(byte *)(param_1 + 0x12) + 0x40 & 0xff) * 2 + iVar6) * -0x10;
      bVar3 = *(byte *)(param_1 + 10);
      bVar8 = ~(bVar3 >> 4) & 1;
      if (bVar8 == 0) {
        bVar3 = bVar3 & 0xef;
      }
      else {
        bVar3 = bVar3 | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar3;
      *(byte *)(param_1 + 0x4c) = bVar8;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar8 << 4;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        uVar4 = 4;
      }
      else {
        uVar4 = 0xfc;
      }
      *(undefined1 *)(param_1 + 0x13) = uVar4;
      *(undefined1 *)(param_1 + 0xbe) = 0x40;
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    goto LAB_08098a7c;
  }
  uVar10 = (uint)*(byte *)(param_1 + 0x13) + (uint)*(byte *)(param_1 + 0x12);
  *(char *)(param_1 + 0x12) = (char)uVar10;
  iVar6 = DAT_08098840;
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0xb4) + *(short *)((uVar10 + 0x40 & 0xff) * 2 + DAT_08098840) * 0x10;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xb8) + *(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + iVar6) * 0x10;
  uVar7 = DAT_08098844;
  if (((uVar10 & 0x7f) - 0xc & 0xff) < 0x69) {
    uVar7 = DAT_08098888;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      if (-1 < (int)(uVar10 * 0x1000000)) {
        uVar7 = DAT_0809885c;
      }
      goto LAB_08098868;
    }
    if (-1 < (int)(uVar10 * 0x1000000)) goto LAB_08098868;
    FUN_0801cfc8(param_1,DAT_080988f4,(short)*(char *)(param_1 + 0x71),
                 (short)*(char *)(param_1 + 0x72));
  }
  else {
LAB_08098868:
    FUN_0801cfc8(param_1,uVar7,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
  }
  cVar2 = *(char *)(param_1 + 0xbe);
  if (cVar2 == '\0') {
    iVar9 = *(int *)(*DAT_080988f8 + 0x54);
    iVar6 = *(int *)(param_1 + 0x54);
    if (((iVar9 - iVar6) + 0x6800U < 0xd001) &&
       ((*(int *)(*DAT_080988f8 + 0x58) - *(int *)(param_1 + 0x58)) + 0x6000U < 0xc001)) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        if (iVar6 <= iVar9) goto LAB_08098a7c;
      }
      else if (iVar9 <= iVar6) goto LAB_08098a7c;
      uVar7 = DAT_08098930;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        uVar7 = 0x200;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar7;
      *(undefined4 *)(param_1 + 0x68) = 8;
      *(undefined4 *)(param_1 + 0x60) = 0x120;
      FUN_0801cf00(param_1,0xba00);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    *(char *)(param_1 + 0xbe) = cVar2 + -1;
  }
LAB_08098a7c:
  FUN_0801cff0(param_1);
  return in_lr;
}


