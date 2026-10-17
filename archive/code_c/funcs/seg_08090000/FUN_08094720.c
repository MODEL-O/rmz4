// undefined FUN_08094720(void)
// entry 0x8094720


undefined8 FUN_08094720(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x58) + DAT_0809479c;
  iVar2 = *(int *)(param_1 + 0x54) + DAT_080947a0;
  iVar6 = 0;
  iVar5 = iVar2;
  do {
    uVar1 = FUN_08007c7c(iVar5,iVar4);
    if (((uVar1 != 0) && ((uVar1 & 0x8000) == 0)) && ((uVar1 & 0xf) != 0xf)) goto LAB_08094796;
    iVar5 = iVar5 + 0x1000;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 1);
  uVar1 = FUN_08007c7c(iVar2 + 0xe00,iVar4);
  if (((uVar1 == 0) || ((uVar1 & 0x8000) != 0)) || ((uVar1 & 0xf) == 0xf)) {
    uVar3 = 0;
  }
  else {
LAB_08094796:
    uVar3 = 1;
  }
  return CONCAT44(in_lr,uVar3);
}


