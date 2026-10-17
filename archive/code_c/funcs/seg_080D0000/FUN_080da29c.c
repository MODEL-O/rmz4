// undefined FUN_080da29c(void)
// entry 0x80da29c


undefined4 FUN_080da29c(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 in_lr;
  
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if ((cVar3 == '\0') ||
     (((uVar5 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
       iVar1 = DAT_080da408, iVar9 = DAT_080da36c, uVar5 != 0 && ((uVar5 & 0x8000) == 0)) &&
      (0 < *(int *)(param_1 + 0x60))))) {
    FUN_080d0c88(2,param_1 + 0x54);
    piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080da2f0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 8);
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\0') {
      if (*(char *)(param_1 + 0x10) == '\0') {
        uVar7 = *(uint *)(param_1 + 0x74);
        iVar8 = FUN_08129050(uVar7,3);
        iVar2 = DAT_080da414;
        iVar9 = DAT_080da410;
        piVar6 = (int *)(*(int *)(param_1 + 0x78) * 8 + *(int *)(iVar8 * 4 + iVar1));
        uVar10 = DAT_080da410 * *DAT_080da40c + DAT_080da414;
        uVar11 = uVar10 & 0x7fffffff;
        *DAT_080da40c = uVar11;
        *(uint *)(param_1 + 0x60) = piVar6[1] + ((uVar10 & 0x7fffffff) >> 0x10 & 0x1f);
        uVar10 = iVar9 * uVar11 + iVar2;
        *DAT_080da40c = uVar10 & 0x7fffffff;
        *(uint *)(param_1 + 0x5c) = *piVar6 - ((uVar10 & 0x7fffffff) >> 0x10 & 0x3f);
      }
      else {
        uVar7 = *(uint *)(param_1 + 0x74);
        iVar8 = FUN_08129050(uVar7,3);
        iVar2 = DAT_080da378;
        iVar1 = DAT_080da374;
        piVar6 = (int *)(*(int *)(param_1 + 0x78) * 8 + *(int *)(iVar8 * 4 + iVar9));
        uVar10 = *DAT_080da370 * DAT_080da374 + DAT_080da378;
        uVar11 = uVar10 & 0x7fffffff;
        *DAT_080da370 = uVar11;
        *(uint *)(param_1 + 0x60) = piVar6[1] + ((uVar10 & 0x7fffffff) >> 0x10 & 0x1f);
        iVar9 = *piVar6;
        uVar10 = uVar11 * iVar1 + iVar2;
        *DAT_080da370 = uVar10 & 0x7fffffff;
        uVar10 = (uVar10 & 0x7fffffff) >> 0x10 & 0x3f;
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          iVar9 = -uVar10 - iVar9;
        }
        else {
          iVar9 = iVar9 - uVar10;
        }
        *(int *)(param_1 + 0x5c) = iVar9;
      }
      FUN_0801cf00(param_1,uVar7 & 0xffff);
      *(undefined1 *)(param_1 + 0x13) = 0;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    bVar4 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar4;
    if ((bVar4 & 1) == 0) {
      bVar4 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar4 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar4;
    iVar9 = *(int *)(param_1 + 0x60) + 0x20;
    *(int *)(param_1 + 0x60) = iVar9;
    if (0x700 < iVar9) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    FUN_0801cff0(param_1);
  }
  return in_lr;
}


