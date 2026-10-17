// undefined FUN_0807f7cc(void)
// entry 0x807f7cc


undefined4 FUN_0807f7cc(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xbc + (param_2 & 0xff) * 4);
  if (iVar4 != 0) {
    iVar1 = (param_3 & 0xff) * 4;
    piVar5 = (int *)(param_1 + 0xbc + iVar1);
    iVar3 = *piVar5;
    if (iVar3 != 0) {
      if (((*(int *)(iVar3 + 0x54) - *(int *)(iVar4 + 0x54)) + 0x1000U < 0x2001) &&
         ((*(int *)(iVar3 + 0x58) - *(int *)(iVar4 + 0x58)) + 0x1000U < 0x2001)) {
        if (*(int *)(iVar3 + 0x54) < *(int *)(iVar4 + 0x54)) {
          *(undefined1 *)(iVar4 + 0xb8) = 2;
          iVar4 = *piVar5;
          uVar2 = 1;
        }
        else {
          *(undefined1 *)(iVar4 + 0xb8) = 1;
          iVar4 = *piVar5;
          uVar2 = 2;
        }
        *(undefined1 *)(iVar4 + 0xb8) = uVar2;
        piVar6 = (int *)(param_1 + 0xbc + (param_2 & 0xff) * 4);
        iVar3 = *piVar6;
        piVar5 = (int *)(param_1 + 0xbc + iVar1);
        iVar1 = *piVar5;
        iVar4 = *(int *)(iVar3 + 0x54) + (*(int *)(iVar1 + 0x54) - *(int *)(iVar3 + 0x54) >> 1);
        *(int *)(iVar3 + 0x54) = iVar4;
        *(int *)(iVar3 + 0x58) =
             *(int *)(iVar3 + 0x58) + (*(int *)(iVar1 + 0x58) - *(int *)(iVar3 + 0x58) >> 1);
        *(int *)(iVar1 + 0x54) = iVar4;
        *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(iVar3 + 0x58);
        *piVar6 = 0;
        *piVar5 = 0;
      }
    }
  }
  return in_lr;
}


