// undefined FUN_0802ca64(void)
// entry 0x802ca64


undefined8 FUN_0802ca64(int param_1)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 in_lr;
  
  uVar7 = (uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70));
  iVar5 = DAT_0802caf8;
  iVar8 = DAT_0802caf4;
  if (uVar7 != DAT_0802ca98) {
    iVar5 = DAT_0802cae8;
    iVar8 = DAT_0802cae4;
    if ((int)DAT_0802ca98 < (int)uVar7) {
      if (uVar7 != DAT_0802cab4) {
        uVar3 = DAT_0802cab4;
        if ((int)uVar7 <= (int)DAT_0802cab4) goto LAB_0802caaa;
        iVar5 = DAT_0802cad8;
        iVar8 = DAT_0802cad4;
        if (uVar7 != DAT_0802cac8) {
          iVar5 = DAT_0802caf8;
          iVar8 = DAT_0802caf4;
          uVar4 = DAT_0802cac8 + 2;
          goto joined_r0x0802cac2;
        }
      }
    }
    else {
      uVar3 = DAT_0802ca98 - 4;
      if (uVar7 != uVar3) {
        iVar5 = DAT_0802cad8;
        iVar8 = DAT_0802cad4;
        uVar4 = DAT_0802ca9c;
        if ((int)uVar3 < (int)uVar7) {
joined_r0x0802cac2:
          if (uVar7 != uVar4) {
LAB_0802cafc:
            if (*(char *)(param_1 + 0xd) == '\x01') {
              *(undefined1 *)(param_1 + 0x156) = 3;
              goto LAB_0802cb0c;
            }
            iVar5 = 0;
            iVar8 = 0;
          }
        }
        else {
LAB_0802caaa:
          if (uVar7 != uVar3 - 2) goto LAB_0802cafc;
LAB_0802cb0c:
          iVar5 = DAT_0802cb14;
          iVar8 = 0;
        }
      }
    }
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar7 = *(int *)(param_1 + 0x54) + iVar8;
  }
  else {
    uVar7 = *(int *)(param_1 + 0x54) - iVar8;
  }
  uVar9 = *(int *)(param_1 + 0x58) + iVar5;
  uVar4 = FUN_08007020(uVar7,uVar9);
  uVar3 = DAT_0802cb88;
  if ((uVar4 & 0xf) == 0xf) {
    *(int *)(param_1 + 0x1c8) = (uVar9 & DAT_0802cb88) + 0x800;
    uVar1 = FUN_08007020(uVar7 + 0x900);
    if ((uVar1 == 0) || ((uVar1 & 0xf) == 0xf)) {
      uVar1 = FUN_08007020(uVar7 + DAT_0802cbb8,*(int *)(param_1 + 0x1c8));
      if ((uVar1 == 0) || ((uVar1 & 0xf) == 0xf)) {
        *(uint *)(param_1 + 0x1c4) = uVar7;
        goto LAB_0802cbde;
      }
      iVar5 = 0x900;
      uVar3 = DAT_0802cbbc;
    }
    else {
      iVar5 = 0x700;
    }
    *(uint *)(param_1 + 0x1c4) = (uVar7 & uVar3) + iVar5;
  }
  else {
    sVar2 = FUN_0802e370(param_1,uVar7,uVar9);
    if (sVar2 == 0) {
      uVar6 = 0;
      goto LAB_0802cbe0;
    }
  }
LAB_0802cbde:
  uVar6 = 1;
LAB_0802cbe0:
  return CONCAT44(in_lr,uVar6);
}


