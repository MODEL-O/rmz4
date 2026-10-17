// undefined FUN_080fc5cc(void)
// entry 0x80fc5cc


undefined4 FUN_080fc5cc(int param_1)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  short sVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  short *psVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  if ((*(char *)(param_1 + 0x11) == '\x01') && (2 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc))) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fc620);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 0xc);
  }
  else {
    if (((*(char *)(param_1 + 0xd) == '\0') &&
        (((iVar6 = *(int *)(param_1 + 0xc0), iVar6 != 0 && (*(char *)(iVar6 + 0xd) == '\x02')) &&
         (*(char *)(iVar6 + 0xe) != '\0')))) && (sVar4 = FUN_08038640(iVar6), sVar4 != 0)) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x30;
        psVar8 = (short *)(DAT_080fc6a4 + DAT_080fc6a8);
      }
      else {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x30;
        psVar8 = (short *)(DAT_080fc674 + DAT_080fc678);
      }
      *psVar8 = *psVar8 + 0x30;
      iVar10 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54);
      uVar9 = DAT_080fc6ac;
      if (iVar10 < 0) {
        iVar10 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xb4);
        uVar9 = DAT_080fc6ec;
      }
      uVar7 = FUN_08128fb8(iVar10,uVar9);
      if (uVar7 < 3) {
        FUN_0801cf00(param_1,uVar7 + 0x9800 & 0xffff);
      }
      else {
        FUN_0801cf00(param_1,DAT_080fc6f0);
        *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined1 *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
      bVar1 = *(byte *)(param_1 + 0x12);
      *(byte *)(param_1 + 0x12) = bVar1 + 1;
      iVar3 = DAT_080fc79c;
      iVar10 = DAT_080fc798;
      puVar2 = DAT_080fc794;
      if ((bVar1 & 3) == 0) {
        bVar1 = *(byte *)(param_1 + 10);
        if ((bVar1 & 0x10) == 0) {
          local_28 = *(int *)(param_1 + 0x54) + 0x900;
        }
        else {
          local_28 = *(int *)(param_1 + 0x54) + DAT_080fc728;
        }
        local_24 = *(int *)(iVar6 + 0x58) + DAT_080fc790;
        uVar7 = *DAT_080fc794 * DAT_080fc798 + DAT_080fc79c;
        uVar11 = uVar7 & 0x7fffffff;
        *DAT_080fc794 = uVar11;
        iVar6 = FUN_08129198((uVar7 & 0x7fffffff) >> 0x10,3);
        iVar6 = iVar6 * 0x1c + DAT_080fc7a0;
        uVar7 = uVar11 * iVar10 + iVar3;
        *puVar2 = uVar7 & 0x7fffffff;
        uVar7 = (uVar7 & 0x7fffffff) >> 0x10 & 1;
        if ((bVar1 & 0x10) == 0) {
          uVar7 = uVar7 << 4;
        }
        else {
          uVar7 = uVar7 << 4 | 1;
        }
        FUN_080d4c8c(&local_28,iVar6,0,uVar7);
      }
    }
    FUN_0801cff0(param_1);
    *(int *)(param_1 + 0xc0) = 0;
  }
  return in_lr;
}


