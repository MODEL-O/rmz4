// undefined FUN_080c08e0(void)
// entry 0x80c08e0


undefined4 FUN_080c08e0(int param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  bVar2 = *(byte *)(iVar7 + 10) >> 4;
  uVar8 = bVar2 & 1;
  uVar5 = (uint)*(byte *)(param_1 + 0xb4);
  if (*(byte *)(iVar7 + 0xc) < 2) {
    if (*(char *)(param_1 + 0xd) != *(char *)(iVar7 + 0xd)) {
      *(char *)(param_1 + 0xd) = *(char *)(iVar7 + 0xd);
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    if (*(char *)(param_1 + 0x11) == '\0') {
      if ((bVar2 & 1) == 0) {
        bVar1 = *(byte *)(iVar7 + 10);
        iVar6 = *(int *)(iVar7 + 0x54);
        iVar4 = DAT_080c095c;
        if ((bVar1 & 0x10) != 0) {
          iVar4 = DAT_080c0950;
        }
        iVar4 = iVar6 - (*(int *)(DAT_080c094c + 0x38) + iVar4);
      }
      else {
        bVar1 = *(byte *)(iVar7 + 10);
        iVar6 = *(int *)(iVar7 + 0x54);
        iVar4 = DAT_080c09a8;
        if ((bVar1 & 0x10) != 0) {
          iVar4 = DAT_080c097c;
        }
        iVar4 = (*(int *)(DAT_080c0978 + 0x38) + iVar4) - iVar6;
      }
      if (0 < iVar4) {
        uVar5 = uVar5 + (iVar4 >> 0xf);
      }
      iVar4 = DAT_080c09c0;
      if ((bVar1 & 0x10) != 0) {
        iVar4 = 0x1600;
      }
      *(uint *)(param_1 + 0x54) = iVar6 + uVar5 * 0x8000 * (uVar8 * 2 + -1) + iVar4;
      *(int *)(param_1 + 0x58) = *(int *)(iVar7 + 0x58) + DAT_080c09c4;
    }
    else {
      iVar4 = *(int *)(DAT_080c0a18 + 0x3c) - (*(int *)(iVar7 + 0x58) + 0x2800);
      if (0 < iVar4) {
        iVar4 = FUN_08128fb8(iVar4,0x3000);
        uVar5 = uVar5 + iVar4;
      }
      *(uint *)(param_1 + 0x54) = *(int *)(iVar7 + 0x54) + (uVar8 * 2 + -1) * 0x3000 * uVar5;
      *(uint *)(param_1 + 0x58) = *(int *)(iVar7 + 0x58) + uVar5 * 0x3000 + DAT_080c0a1c;
    }
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0x4c) = (char)uVar8;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar8 << 4);
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080c0a58));
  }
  else {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c0918);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080c0c74(param_1);
  }
  return in_lr;
}


