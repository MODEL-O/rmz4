// undefined FUN_08066d68(void)
// entry 0x8066d68


undefined4 FUN_08066d68(int param_1)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  undefined1 uVar9;
  char cVar10;
  int iVar11;
  undefined4 in_lr;
  
  piVar2 = DAT_08066db8;
  iVar3 = *DAT_08066db8;
  FUN_0801cff0(param_1);
  uVar1 = *(ushort *)(DAT_08066dbc + 8);
  if ((uVar1 & 8) != 0) {
    return in_lr;
  }
  iVar11 = *(int *)(param_1 + 0x54);
  if ((bool)(*(byte *)(param_1 + 10) >> 4 & 1) != iVar11 < *(int *)(*piVar2 + 0x54)) {
    *(undefined1 *)(param_1 + 0xd) = 0x28;
    *(byte *)(param_1 + 0xe) = (byte)uVar1 & 8;
    return in_lr;
  }
  pcVar4 = (char *)(param_1 + 0xda);
  if (*pcVar4 != '\0') {
    *(char *)(param_1 + 0xd) = *pcVar4;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *pcVar4 = '\0';
    return in_lr;
  }
  pcVar5 = (char *)(param_1 + 0xd9);
  if (*pcVar5 != '\x04') {
    if ((*(int *)(*piVar2 + 0x54) < *(int *)(param_1 + 0xbc) + 0x3000) &&
       (iVar11 < *(int *)(param_1 + 0xbc) + 0x6000)) {
      *pcVar5 = '\x04';
      *(undefined1 *)(param_1 + 0xd) = 4;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if ((*(int *)(param_1 + 0xc0) + DAT_08066e34 < *(int *)(*DAT_08066e30 + 0x54)) &&
       (*(int *)(param_1 + 0xc0) + DAT_08066e38 < iVar11)) {
      *pcVar5 = '\x04';
      *(undefined1 *)(param_1 + 0xd) = 4;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
  iVar6 = iVar11 - *(int *)(*DAT_08066e9c + 0x54);
  if (iVar6 < 0) {
    iVar6 = *(int *)(*DAT_08066e9c + 0x54) - iVar11;
  }
  iVar6 = iVar6 >> 8;
  iVar11 = 2;
  if ((0xf < *(short *)(param_1 + 0xa4)) && (iVar11 = 0, *(short *)(param_1 + 0xa4) < 0x20)) {
    iVar11 = 1;
  }
  pcVar7 = (char *)(param_1 + 0xdb);
  if (*pcVar7 != '\0') {
    *pcVar7 = '\0';
    if (iVar11 == 0) {
      uVar8 = *DAT_08066ea0 * DAT_08066ea4 + DAT_08066ea8;
      *DAT_08066ea0 = uVar8 & 0x7fffffff;
      if (((uVar8 & 0x7fffffff) >> 0x10 & 0x1f) < 8) {
        *(undefined1 *)(param_1 + 0xd) = 0x1a;
        *(undefined1 *)(param_1 + 0xe) = 0;
        return in_lr;
      }
    }
    else if (iVar11 == 1) {
      uVar8 = *DAT_08066ed0 * DAT_08066ed4 + DAT_08066ed8;
      *DAT_08066ed0 = uVar8 & 0x7fffffff;
      if (((uVar8 & 0x7fffffff) >> 0x10 & 0x1f) < 10) {
        uVar9 = 0x1a;
        goto LAB_08067164;
      }
    }
    else {
      uVar8 = *DAT_08066f00 * DAT_08066f04 + DAT_08066f08;
      *DAT_08066f00 = uVar8 & 0x7fffffff;
      if (((uVar8 & 0x7fffffff) >> 0x10 & 0x1f) < 0xc) {
        uVar9 = 0x1a;
        goto LAB_08067164;
      }
    }
  }
  do {
    uVar8 = *DAT_08066f68 * DAT_08066f6c + DAT_08066f70;
    *DAT_08066f68 = uVar8 & 0x7fffffff;
    uVar8 = (uVar8 & 0x7fffffff) >> 0x10 & 0x1f;
    if (*(int *)(iVar3 + 0xec) == 0) {
      if (iVar6 < 100) {
        if (iVar11 == 0) {
          if (uVar8 < 5) goto LAB_080670f6;
          if (0xc < uVar8) {
            if (uVar8 < 0x18) goto LAB_080670c2;
            goto LAB_08067108;
          }
        }
        else if (iVar11 == 1) {
          if (uVar8 < 5) {
LAB_080670f6:
            *(undefined1 *)(param_1 + 0xd) = 4;
            goto LAB_08067110;
          }
          if (0xb < uVar8) {
            if (0x16 < uVar8) goto LAB_08066f92;
            uVar9 = 0xd;
            goto LAB_0806710e;
          }
        }
        else {
          if (uVar8 < 5) goto LAB_080670f6;
          if (0xb < uVar8) {
            if (uVar8 < 0x15) goto LAB_080670c2;
LAB_08067048:
            if (0x19 < uVar8) goto LAB_0806710c;
            goto LAB_08067108;
          }
        }
      }
      else {
        if (0xb3 < iVar6) {
          if (iVar11 == 0) {
            if (uVar8 < 10) goto LAB_080670f6;
            if (uVar8 < 0x18) goto LAB_080670fe;
          }
          else if (iVar11 == 1) {
            if (uVar8 < 8) goto LAB_080670f6;
            if (uVar8 < 0x14) goto LAB_080670fe;
            if (0x18 < uVar8) goto LAB_080670ec;
          }
          else {
            if (uVar8 < 7) goto LAB_080670f6;
            if (uVar8 < 0x12) goto LAB_080670fe;
            if (0x16 < uVar8) {
LAB_0806710c:
              uVar9 = 0x23;
              goto LAB_0806710e;
            }
          }
          goto LAB_08067108;
        }
        if (iVar11 == 0) {
          if (uVar8 < 8) goto LAB_080670f6;
          if (0x11 < uVar8) {
            if (uVar8 < 0x19) goto LAB_080670c2;
            goto LAB_08067108;
          }
        }
        else if (iVar11 == 1) {
          if (uVar8 < 7) goto LAB_080670f6;
          if (0xe < uVar8) {
            if (0x14 < uVar8) goto LAB_08066fae;
            uVar9 = 0xd;
            goto LAB_0806710e;
          }
        }
        else {
          if (uVar8 < 6) goto LAB_080670f6;
          if (0xd < uVar8) {
            if (uVar8 < 0x14) goto LAB_080670c2;
            if (0x17 < uVar8) goto LAB_0806710c;
            goto LAB_08067108;
          }
        }
      }
      goto LAB_080670fe;
    }
    if (iVar6 < 100) {
      if (iVar11 == 0) {
        if (uVar8 < 5) goto LAB_080670f6;
        if (uVar8 < 10) goto LAB_080670fe;
        if (uVar8 < 0xf) {
          uVar9 = 0xd;
          goto LAB_0806710e;
        }
        if (0x18 < uVar8) goto LAB_08067108;
LAB_08066fda:
        *(undefined1 *)(param_1 + 0xd) = 0x14;
      }
      else {
        if (iVar11 == 1) {
          if (uVar8 < 6) {
LAB_080670fe:
            *(undefined1 *)(param_1 + 0xd) = 6;
            goto LAB_08067110;
          }
          if (uVar8 < 0xb) {
LAB_080670c2:
            *(undefined1 *)(param_1 + 0xd) = 0xd;
            goto LAB_08067110;
          }
          if (uVar8 < 0x15) {
            uVar9 = 0x14;
            goto LAB_0806710e;
          }
LAB_08066f92:
          if (0x1b < uVar8) {
LAB_080670ec:
            *(undefined1 *)(param_1 + 0xd) = 0x23;
            goto LAB_08067110;
          }
        }
        else {
          if (uVar8 < 4) goto LAB_080670fe;
          if (uVar8 < 8) goto LAB_080670c2;
          if (uVar8 < 0x12) {
            uVar9 = 0x14;
            goto LAB_0806710e;
          }
LAB_08066fae:
          if (0x19 < uVar8) goto LAB_080670ec;
        }
LAB_08067108:
        *(undefined1 *)(param_1 + 0xd) = 0x17;
      }
    }
    else {
      if (0xb3 < iVar6) {
        if (iVar11 == 0) {
          if (uVar8 < 8) goto LAB_080670f6;
          if (0x11 < uVar8) {
            if (0x15 < uVar8) goto LAB_08067108;
LAB_08067042:
            *(undefined1 *)(param_1 + 0xd) = 0x14;
            goto LAB_08067110;
          }
        }
        else if (iVar11 == 1) {
          if (uVar8 < 5) goto LAB_080670f6;
          if (0xd < uVar8) {
            if (0x11 < uVar8) goto LAB_08066f92;
            uVar9 = 0x14;
            goto LAB_0806710e;
          }
        }
        else {
          if (uVar8 < 5) goto LAB_080670f6;
          if (0xc < uVar8) {
            if (0x10 < uVar8) goto LAB_08067048;
            goto LAB_08067042;
          }
        }
        goto LAB_080670fe;
      }
      if (iVar11 == 0) {
        if (uVar8 < 5) goto LAB_080670f6;
        if (uVar8 < 0xb) goto LAB_080670fe;
        if (0xf < uVar8) {
          if (uVar8 < 0x16) goto LAB_08066fda;
          goto LAB_08067108;
        }
        uVar9 = 0xd;
      }
      else if (iVar11 == 1) {
        if (uVar8 < 4) goto LAB_080670f6;
        if (uVar8 < 9) goto LAB_080670fe;
        if (uVar8 < 0xd) goto LAB_080670c2;
        if (0x11 < uVar8) goto LAB_08066f92;
        uVar9 = 0x14;
      }
      else {
        if (uVar8 < 4) goto LAB_080670f6;
        if (uVar8 < 8) goto LAB_080670fe;
        if (uVar8 < 0xb) goto LAB_080670c2;
        if (0xf < uVar8) goto LAB_08066fae;
        uVar9 = 0x14;
      }
LAB_0806710e:
      *(undefined1 *)(param_1 + 0xd) = uVar9;
    }
LAB_08067110:
  } while (((((*(byte *)(DAT_08067178 + DAT_0806717c) & 0x10) == 0) ||
            (cVar10 = *(char *)(param_1 + 0xd), (*(byte *)(DAT_08067180 + 4) & 4) != 0)) &&
           (cVar10 = *(char *)(param_1 + 0xd), cVar10 == '#')) || (cVar10 == *pcVar5));
  *pcVar5 = cVar10;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *pcVar7 = *pcVar7 + '\x01';
  cVar10 = *(char *)(param_1 + 0xd);
  if ((cVar10 != '\x06') && (cVar10 != '#')) {
    return in_lr;
  }
  *pcVar4 = cVar10;
  uVar9 = 4;
LAB_08067164:
  *(undefined1 *)(param_1 + 0xd) = uVar9;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


