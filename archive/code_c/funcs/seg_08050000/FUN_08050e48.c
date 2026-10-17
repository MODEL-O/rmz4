// undefined FUN_08050e48(void)
// entry 0x8050e48


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_08050e48(int param_1)

{
  short sVar1;
  undefined1 uVar2;
  uint uVar3;
  short *psVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  uVar3 = *DAT_08050e9c * DAT_08050ea0 + DAT_08050ea4;
  *DAT_08050e9c = uVar3 & 0x7fffffff;
  uVar3 = (uVar3 & 0x7fffffff) >> 0x10 & 0x1f;
  FUN_0801cff0(param_1);
  if ((*(ushort *)(DAT_08050ea8 + 8) & 8) != 0) {
    return in_lr;
  }
  psVar4 = (short *)(param_1 + 0xa4);
  if (0x20 < *psVar4) {
    iVar7 = *(int *)(param_1 + 0x54);
    iVar6 = iVar7 - *(int *)(*DAT_08050eac + 0x54);
    if (iVar6 < 0) {
      iVar6 = *(int *)(*DAT_08050eac + 0x54) - iVar7;
    }
    if (iVar6 < 0x40) {
      bVar5 = 2;
      if ((uVar3 < 0xb) || (bVar5 = 3, 0x15 < uVar3)) goto LAB_0805104a;
    }
    else {
      iVar6 = iVar7 - *(int *)(*DAT_08050eac + 0x54);
      if (iVar6 < 0) {
        iVar6 = *(int *)(*DAT_08050eac + 0x54) - iVar7;
      }
      if (iVar6 < 0x80) {
        bVar5 = 2;
        if ((uVar3 < 0xc) || (bVar5 = 3, 0x17 < uVar3)) goto LAB_0805104a;
      }
      else {
        bVar5 = 2;
        if (uVar3 < 0xc) goto LAB_0805104a;
        bVar5 = 3;
joined_r0x08051000:
        if (0x13 < uVar3) goto LAB_0805104a;
      }
    }
    goto LAB_08050ec6;
  }
  iVar7 = *(int *)(param_1 + 0x54);
  iVar6 = iVar7 - *(int *)(*DAT_08050f1c + 0x54);
  if (iVar6 < 0) {
    if (*(int *)(*DAT_08050f1c + 0x54) - iVar7 < 0x40) goto LAB_08050f26;
LAB_08050f64:
    iVar6 = iVar7 - *(int *)(*DAT_08050f1c + 0x54);
    if (iVar6 < 0) {
      iVar6 = *(int *)(*DAT_08050f1c + 0x54) - iVar7;
    }
    if (iVar6 < 0x80) {
      if (uVar3 < 0xc) goto LAB_08050fb4;
      if (0x15 < uVar3) {
LAB_08051048:
        bVar5 = 3;
        goto LAB_0805104a;
      }
      if (((*(byte *)(DAT_08050fa4 + DAT_08050fa8) & 0x10) != 0) &&
         ((*(byte *)(DAT_08050fac + 4) & 4) == 0)) {
        sVar1 = *psVar4;
joined_r0x08050fe2:
        if (0x10 < sVar1) {
          uVar3 = *DAT_08051010 * DAT_08051014 + DAT_08051018;
          *DAT_08051010 = uVar3 & 0x7fffffff;
          uVar3 = (uVar3 & 0x7fffffff) >> 0x10 & 0x1f;
          bVar5 = 1;
          goto joined_r0x08051000;
        }
        uVar3 = *DAT_0805103c * DAT_08051040 + DAT_08051044;
        *DAT_0805103c = uVar3 & 0x7fffffff;
        bVar5 = 1;
        if (0xf < ((uVar3 & 0x7fffffff) >> 0x10 & 0x1f)) goto LAB_0805104a;
      }
    }
    else {
      if (uVar3 < 0xb) goto LAB_08050fb4;
      if (0x15 < uVar3) goto LAB_08051048;
      if (((*(byte *)(DAT_08051004 + DAT_08051008) & 0x10) != 0) &&
         ((*(byte *)(DAT_0805100c + 4) & 4) == 0)) {
        sVar1 = *psVar4;
        goto joined_r0x08050fe2;
      }
    }
LAB_08050ec6:
    bVar5 = 0;
  }
  else {
    if (0x3f < iVar6) goto LAB_08050f64;
LAB_08050f26:
    if (7 < uVar3) {
      if (uVar3 < 0x12) {
        if (((*(byte *)(DAT_08050f58 + DAT_08050f5c) & 0x10) == 0) ||
           ((*(byte *)(DAT_08050f60 + 4) & 4) != 0)) goto LAB_08050ec6;
        sVar1 = *psVar4;
        goto joined_r0x08050fe2;
      }
      goto LAB_08051048;
    }
LAB_08050fb4:
    bVar5 = 2;
  }
LAB_0805104a:
  if (bVar5 == 1) {
    uVar2 = 8;
  }
  else if (bVar5 < 2) {
    if (bVar5 != 0) {
      return in_lr;
    }
    uVar2 = 5;
  }
  else if (bVar5 == 2) {
    if (5 < *(byte *)(param_1 + 0xd5)) {
      return in_lr;
    }
    uVar2 = 0xd;
  }
  else {
    if (bVar5 != 3) {
      return in_lr;
    }
    uVar2 = 0x10;
  }
  *(undefined1 *)(param_1 + 0xd) = uVar2;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


