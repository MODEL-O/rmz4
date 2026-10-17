// undefined FUN_0801f998(void)
// entry 0x801f998


undefined4 FUN_0801f998(int param_1,byte param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (param_2 == 1) {
    iVar5 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x38);
    if (iVar5 < 1) {
      iVar5 = -(0x1f - iVar5 >> 5);
    }
    else {
      iVar5 = iVar5 + 0x1f >> 5;
    }
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar5;
    iVar2 = *(int *)(param_1 + 0x3c);
    iVar5 = *(int *)(param_1 + 0x34) - iVar2;
    if (0 < iVar5) {
      *(int *)(param_1 + 0x3c) = iVar2 + (iVar5 + 0x1f >> 5);
      return in_lr;
    }
    *(int *)(param_1 + 0x3c) = iVar2 - (0x1f - iVar5 >> 5);
    return in_lr;
  }
  if (param_2 < 2) {
    if (param_2 == 0) goto LAB_0801fa76;
  }
  else {
    if (param_2 == 2) {
      if (*(short *)(param_1 + 0x22) <= DAT_0801fa68) {
        sVar1 = *(short *)(param_1 + 0x22) + 1;
        *(short *)(param_1 + 0x22) = sVar1;
        iVar2 = (int)sVar1;
        iVar4 = *(int *)(param_1 + 0x30);
        iVar5 = (0x400 - iVar2) * (*(int *)(param_1 + 0x38) >> 2) + iVar2 * (iVar4 >> 2);
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0xff;
        }
        *(int *)(param_1 + 0x38) = iVar5 >> 8;
        iVar3 = *(int *)(param_1 + 0x34);
        iVar2 = (*(int *)(param_1 + 0x3c) >> 2) * (0x400 - iVar2) + iVar2 * (iVar3 >> 2);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0xff;
        }
        *(int *)(param_1 + 0x3c) = iVar2 >> 8;
        if (((iVar5 >> 8) - iVar4) + 0x80U < 0x101) {
          *(int *)(param_1 + 0x38) = iVar4;
        }
        iVar5 = *(int *)(param_1 + 0x3c) - iVar3;
joined_r0x0801fa64:
        if (0x100 < iVar5 + 0x80U) {
          return in_lr;
        }
        *(int *)(param_1 + 0x3c) = iVar3;
        return in_lr;
      }
      goto LAB_0801fa76;
    }
    if (param_2 == 4) {
      if (*(short *)(param_1 + 0x22) < 0xff) {
        sVar1 = *(short *)(param_1 + 0x22) + 1;
        *(short *)(param_1 + 0x22) = sVar1;
        iVar5 = (int)sVar1;
        if ((*(ushort *)(DAT_0801fab4 + 0x1d0) & 0x7f) == 4) {
          iVar4 = *(int *)(param_1 + 0x30);
          *(int *)(param_1 + 0x38) =
               (0x100 - iVar5) * (*(int *)(param_1 + 0x38) >> 8) + iVar5 * (iVar4 >> 8);
        }
        else {
          iVar4 = *(int *)(param_1 + 0x30);
          iVar2 = (0x100 - iVar5) * *(int *)(param_1 + 0x38) + iVar5 * iVar4;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 0xff;
          }
          *(int *)(param_1 + 0x38) = iVar2 >> 8;
        }
        iVar3 = *(int *)(param_1 + 0x34);
        iVar5 = (0x100 - iVar5) * *(int *)(param_1 + 0x3c) + iVar5 * iVar3;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0xff;
        }
        *(int *)(param_1 + 0x3c) = iVar5 >> 8;
        if ((*(int *)(param_1 + 0x38) - iVar4) + 0x80U < 0x101) {
          *(int *)(param_1 + 0x38) = iVar4;
        }
        iVar5 = *(int *)(param_1 + 0x3c) - iVar3;
        goto joined_r0x0801fa64;
      }
      goto LAB_0801fa76;
    }
  }
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0xf7;
LAB_0801fa76:
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x34);
  return in_lr;
}


