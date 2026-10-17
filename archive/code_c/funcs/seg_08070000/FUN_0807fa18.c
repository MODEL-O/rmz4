// undefined FUN_0807fa18(void)
// entry 0x807fa18


undefined8 FUN_0807fa18(int *param_1,char param_2,char param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar6 = *DAT_0807fa50;
  iVar8 = 0;
  if (*(short *)(iVar6 + 8) == *(short *)(iVar6 + 10)) {
    iVar8 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(iVar6 + 0xc);
    FUN_080054c4(iVar6);
    uVar7 = 0xffffffff;
    iVar2 = *(int *)(*(int *)(iVar6 + 0xc) + 4);
    *(int *)(iVar6 + 0xc) = iVar2;
    while (iVar2 != iVar6 + 0x14) {
      if (((((*(byte *)(iVar2 + 10) & 1) != 0) && (*(char *)(iVar2 + 9) == param_2)) &&
          (*(char *)(iVar2 + 0x10) == param_3)) &&
         ((*(char *)(iVar2 + 0x11) == param_4 &&
          (iVar5 = *(int *)(iVar2 + 0x54) - *param_1 >> 8,
          iVar3 = *(int *)(iVar2 + 0x58) - param_1[1] >> 8, uVar4 = iVar5 * iVar5 + iVar3 * iVar3,
          uVar4 < uVar7)))) {
        uVar7 = uVar4;
        iVar8 = iVar2;
      }
      iVar2 = *(int *)(*(int *)(iVar6 + 0xc) + 4);
      *(int *)(iVar6 + 0xc) = iVar2;
    }
    *(undefined4 *)(iVar6 + 0xc) = uVar1;
  }
  return CONCAT44(in_lr,iVar8);
}


