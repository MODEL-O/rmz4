// undefined FUN_0801cb30(void)
// entry 0x801cb30


undefined8 FUN_0801cb30(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = 0;
  uVar5 = 0xffffffff;
  if (*(short *)(param_1 + 8) == *(short *)(param_1 + 10)) {
    iVar6 = 0;
  }
  else {
    FUN_080054c4(param_1);
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
    *(int *)(param_1 + 0xc) = iVar1;
    while (iVar1 != param_1 + 0x14) {
      if (((((*(byte *)(iVar1 + 10) & 1) != 0) && ((*(byte *)(iVar1 + 10) & 4) != 0)) &&
          (iVar2 = FUN_0801fb14(DAT_0801cbcc,iVar1 + 0x54), iVar2 == 0)) &&
         (iVar4 = *(int *)(iVar1 + 0x54) - *param_2 >> 8,
         iVar2 = *(int *)(iVar1 + 0x58) - param_2[1] >> 8, uVar3 = iVar4 * iVar4 + iVar2 * iVar2,
         uVar3 < uVar5)) {
        uVar5 = uVar3;
        iVar6 = iVar1;
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
      *(int *)(param_1 + 0xc) = iVar1;
    }
  }
  return CONCAT44(in_lr,iVar6);
}


