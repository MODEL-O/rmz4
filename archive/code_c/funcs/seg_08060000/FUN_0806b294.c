// undefined FUN_0806b294(void)
// entry 0x806b294


undefined4 FUN_0806b294(int param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_0806b2f4) {
    FUN_0801cf00(param_1);
  }
  FUN_0801cff0(param_1);
  puVar5 = DAT_0806b3b0;
  iVar4 = DAT_0806b3ac;
  iVar3 = DAT_0806b3a8;
  uVar2 = *(ushort *)(DAT_0806b2f8 + 8);
  if ((uVar2 & 8) != 0) {
    return in_lr;
  }
  iVar6 = *(int *)(*DAT_0806b2fc + 0x54);
  iVar9 = *(int *)(param_1 + 0x54);
  if ((bool)(*(byte *)(param_1 + 10) >> 4 & 1) != iVar9 < iVar6) {
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(byte *)(param_1 + 0xe) = (byte)uVar2 & 8;
    return in_lr;
  }
  if (iVar9 - iVar6 < 0) {
    if (DAT_0806b320 < iVar6 - iVar9) goto LAB_0806b324;
  }
  else if (DAT_0806b310 < iVar9 - iVar6) {
LAB_0806b324:
    iVar6 = iVar9 - *(int *)(*DAT_0806b2fc + 0x54);
    if (iVar6 < 0) {
      if (DAT_0806b348 < *(int *)(*DAT_0806b2fc + 0x54) - iVar9) goto LAB_0806b34c;
    }
    else if (DAT_0806b338 < iVar6) {
LAB_0806b34c:
      iVar6 = 2;
      goto LAB_0806b34e;
    }
    iVar6 = 1;
    goto LAB_0806b34e;
  }
  iVar6 = 0;
LAB_0806b34e:
  iVar9 = 2;
  if ((0xf < *(short *)(param_1 + 0xa4)) && (iVar9 = 0, *(short *)(param_1 + 0xa4) < 0x20)) {
    iVar9 = 1;
  }
  do {
    uVar7 = *puVar5 * DAT_0806b3b4 + DAT_0806b3b8;
    *puVar5 = uVar7 & 0x7fffffff;
    uVar7 = (uVar7 & 0x7fffffff) >> 0x10 & 0x1f;
    iVar8 = 0;
    if (iVar6 == 0) {
      if (iVar9 == 0) {
        if ((7 < uVar7) && (iVar8 = 1, 0x11 < uVar7)) {
LAB_0806b40e:
          iVar8 = 2;
          if ((0x17 < uVar7) && (iVar8 = 4, uVar7 < 0x1c)) {
            iVar8 = 3;
          }
        }
      }
      else if (iVar9 == 1) {
        if ((((5 < uVar7) && ((iVar8 = 1, 0xd < uVar7 && (iVar8 = 2, 0x13 < uVar7)))) &&
            (iVar8 = 3, 0x16 < uVar7)) && (iVar8 = 5, uVar7 < 0x1b)) {
LAB_0806b4a8:
          iVar8 = 4;
        }
      }
      else if ((((4 < uVar7) && (iVar8 = 1, 0xc < uVar7)) && (iVar8 = 2, 0x11 < uVar7)) &&
              ((iVar8 = 3, 0x15 < uVar7 && (iVar8 = 5, uVar7 < 0x19)))) goto LAB_0806b4a8;
    }
    else if (iVar6 == 1) {
      if (iVar9 == 0) {
        if ((9 < uVar7) && (iVar8 = 1, 0xf < uVar7)) goto LAB_0806b40e;
      }
      else if (iVar9 == 1) {
        if (((5 < uVar7) && (iVar8 = 1, 10 < uVar7)) &&
           ((iVar8 = 2, 0x11 < uVar7 && (iVar8 = 3, 0x15 < uVar7)))) {
joined_r0x0806b48e:
          iVar8 = 5;
          if (uVar7 < 0x1a) goto LAB_0806b4a8;
        }
      }
      else if ((((4 < uVar7) && (iVar8 = 1, 9 < uVar7)) && (iVar8 = 2, 0xf < uVar7)) &&
              (iVar8 = 3, 0x13 < uVar7)) {
joined_r0x0806b4a6:
        iVar8 = 5;
        if (uVar7 < 0x18) goto LAB_0806b4a8;
      }
    }
    else if (iVar9 == 0) {
      if (((0xb < uVar7) && (iVar8 = 2, 0x15 < uVar7)) && (iVar8 = 4, uVar7 < 0x1b)) {
        iVar8 = 3;
      }
    }
    else if (iVar9 == 1) {
      if (((6 < uVar7) && (iVar8 = 2, 0xf < uVar7)) && (iVar8 = 3, 0x14 < uVar7))
      goto joined_r0x0806b48e;
    }
    else if (((5 < uVar7) && (iVar8 = 2, 0xd < uVar7)) && (iVar8 = 3, 0x12 < uVar7))
    goto joined_r0x0806b4a6;
    if ((((*(byte *)(DAT_0806b4e4 + iVar3) & 0x10) != 0) && ((*(byte *)(DAT_0806b4e8 + 4) & 4) == 0)
        ) || (iVar8 != 5)) {
      cVar1 = *(char *)(iVar8 + iVar4);
      *(char *)(param_1 + 0xd) = cVar1;
      if (cVar1 != *(char *)(param_1 + 0xde)) {
        *(char *)(param_1 + 0xde) = cVar1;
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  } while( true );
}


