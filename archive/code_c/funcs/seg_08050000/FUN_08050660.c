// undefined FUN_08050660(void)
// entry 0x8050660


undefined4 FUN_08050660(int param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *DAT_080506ac;
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     ((*(ushort *)(DAT_080506b0 + 8) & 8) == 0)) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080506b4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_08050a04(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    uVar3 = FUN_0802adac(7,param_1,DAT_08050748);
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
  }
  if ((*(int *)(param_1 + 0x2c) != 0) && (iVar4 = FUN_0802b3e4(), iVar4 != 0)) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(short *)(param_1 + 0xd2) != 0) {
    *(short *)(param_1 + 0xd2) = *(short *)(param_1 + 0xd2) + -1;
  }
  puVar1 = DAT_08050750;
  if (*(short *)(param_1 + 0xd0) != 0) {
    *(short *)(param_1 + 0xd0) = *(short *)(param_1 + 0xd0) + -1;
    goto LAB_080509ac;
  }
  if ((*(char *)(iVar6 + 0x278) == '\0') || ((*(ushort *)(DAT_0805074c + 8) & 8) != 0))
  goto LAB_080509ac;
  uVar5 = *DAT_08050750 * DAT_08050754 + DAT_08050758;
  *DAT_08050750 = uVar5 & 0x7fffffff;
  uVar5 = (uVar5 & 0x7fffffff) >> 0x10 & 0x1f;
  if (*(short *)(param_1 + 0xa4) < 0x21) {
    iVar6 = 2;
    if ((5 < uVar5) && (iVar6 = 4, uVar5 < 0x16)) {
      iVar6 = 3;
    }
  }
  else {
    iVar6 = 3;
    if (uVar5 < 0x16) {
      iVar6 = 2;
    }
  }
  if (iVar6 == 2) {
    uVar5 = *DAT_080507a4 * DAT_080507a8 + DAT_080507ac;
    *DAT_080507a4 = uVar5 & 0x7fffffff;
    if (((uVar5 & 0x7fffffff) >> 0x10 & 1) == 0) {
      FUN_080920fc(*(int *)(param_1 + 0xc4) + 0x8800,*(int *)(param_1 + 200) + DAT_080507f0,0);
    }
    else {
      FUN_080920fc(*(int *)(param_1 + 0xc4) + 0x8800,*(int *)(param_1 + 200) + 0x2000,0);
    }
    uVar5 = *DAT_080507f4 * DAT_080507f8 + DAT_080507fc;
    *DAT_080507f4 = uVar5 & 0x7fffffff;
    if (((uVar5 & 0x7fffffff) >> 0x10 & 1) == 0) {
      iVar6 = *(int *)(param_1 + 0xc4) + DAT_08050814;
      iVar4 = *(int *)(param_1 + 200) + DAT_08050818;
    }
    else {
      iVar6 = *(int *)(param_1 + 0xc4) + DAT_08050800;
      iVar4 = *(int *)(param_1 + 200) + 0x2000;
    }
LAB_08050938:
    FUN_080920fc(iVar6,iVar4,1);
  }
  else {
    if (iVar6 == 3) {
      uVar5 = *puVar1 * DAT_08050848 + DAT_0805084c;
      *puVar1 = uVar5 & 0x7fffffff;
      uVar5 = (uVar5 & 0x7fffffff) >> 0x10 & 3;
      if (uVar5 == 1) {
        FUN_080920fc(*(int *)(param_1 + 0xc4) + 0x8800,*(int *)(param_1 + 200) + 0x2000,0);
        FUN_080920fc(*(int *)(param_1 + 0xc4) + DAT_080508c4,*(int *)(param_1 + 200) + 0x2000,1);
        iVar6 = *(int *)(param_1 + 0xc4) + DAT_080508c4;
        iVar4 = *(int *)(param_1 + 200) + DAT_080508c8;
      }
      else if (uVar5 == 0) {
        FUN_080920fc(*(int *)(param_1 + 0xc4) + 0x8800,*(int *)(param_1 + 200) + DAT_08050888,0);
        FUN_080920fc(*(int *)(param_1 + 0xc4) + DAT_0805088c,*(int *)(param_1 + 200) + 0x2000,1);
        iVar6 = *(int *)(param_1 + 0xc4) + DAT_0805088c;
        iVar4 = *(int *)(param_1 + 200) + DAT_08050888;
      }
      else if (uVar5 == 2) {
        FUN_080920fc(*(int *)(param_1 + 0xc4) + 0x8800,*(int *)(param_1 + 200) + 0x2000,0);
        FUN_080920fc(*(int *)(param_1 + 0xc4) + 0x8800,*(int *)(param_1 + 200) + DAT_08050900,0);
        iVar6 = *(int *)(param_1 + 0xc4) + DAT_08050904;
        iVar4 = *(int *)(param_1 + 200) + DAT_08050900;
      }
      else {
        if (uVar5 != 3) goto LAB_08050990;
        FUN_080920fc(*(int *)(param_1 + 0xc4) + 0x8800,*(int *)(param_1 + 200) + 0x2000,0);
        FUN_080920fc(*(int *)(param_1 + 0xc4) + 0x8800,*(int *)(param_1 + 200) + DAT_08050940,0);
        iVar6 = *(int *)(param_1 + 0xc4) + DAT_08050944;
        iVar4 = *(int *)(param_1 + 200) + 0x2000;
      }
      goto LAB_08050938;
    }
    FUN_080920fc(*(int *)(param_1 + 0xc4) + 0x8800,*(int *)(param_1 + 200) + 0x2000,0);
    FUN_080920fc(*(int *)(param_1 + 0xc4) + 0x8800,*(int *)(param_1 + 200) + DAT_080509a0,0);
    FUN_080920fc(*(int *)(param_1 + 0xc4) + DAT_080509a4,*(int *)(param_1 + 200) + 0x2000,1);
    FUN_080920fc(*(int *)(param_1 + 0xc4) + DAT_080509a4,*(int *)(param_1 + 200) + DAT_080509a0,1);
  }
LAB_08050990:
  FUN_08002b10(0xee);
  *(undefined2 *)(param_1 + 0xd0) = 600;
LAB_080509ac:
  if ((*(char *)(param_1 + 0xd9) == '\0') || (6 < (byte)(*(char *)(param_1 + 0xd) - 0x12U))) {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08050a00));
    *(char *)(param_1 + 0xd9) = '\0';
    uVar5 = 0;
    do {
      *(undefined1 *)(param_1 + 0xda + uVar5) = 0;
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < 8);
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 0x1a;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


