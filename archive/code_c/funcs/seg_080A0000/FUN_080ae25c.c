// undefined FUN_080ae25c(void)
// entry 0x80ae25c


undefined4 FUN_080ae25c(int param_1)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    iVar5 = DAT_080ae320;
    iVar4 = DAT_080ae31c;
    puVar3 = DAT_080ae318;
    iVar2 = DAT_080ae314;
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) == DAT_080ae310) {
      iVar7 = param_1 + 0x54;
      uVar9 = *DAT_080ae318 * DAT_080ae31c + DAT_080ae320;
      *DAT_080ae318 = uVar9 & 0x7fffffff;
      FUN_080d4c8c(iVar7,iVar2,0,((uVar9 & 0x7fffffff) >> 0x10 & 1) << 4);
      uVar9 = *puVar3 * iVar4 + iVar5;
      *puVar3 = uVar9 & 0x7fffffff;
      FUN_080d4c8c(iVar7,iVar2 + 0x1c,0,((uVar9 & 0x7fffffff) >> 0x10 & 1) << 4);
      uVar9 = *puVar3 * iVar4 + iVar5;
      *puVar3 = uVar9 & 0x7fffffff;
      FUN_080d4c8c(iVar7,iVar2 + 0x38,0,((uVar9 & 0x7fffffff) >> 0x10 & 1) << 4);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      goto LAB_080ae37e;
    }
    FUN_0801cf00(param_1,DAT_080ae3a0);
    *(undefined1 *)(param_1 + 0x12) = 0;
    FUN_08002b10(DAT_080ae3a4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  uVar6 = DAT_080ae3a8;
  if ((bVar1 & 1) == 0) {
    uVar9 = DAT_080ae3b0 * *DAT_080ae3ac + DAT_080ae3b4;
    *DAT_080ae3ac = uVar9 & 0x7fffffff;
    FUN_080d4c8c(param_1 + 0x54,uVar6,0,((uVar9 & 0x7fffffff) >> 0x10 & 1) << 4);
  }
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
LAB_080ae37e:
  piVar8 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ae3b8);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar8 + 0x10);
  return in_lr;
}


