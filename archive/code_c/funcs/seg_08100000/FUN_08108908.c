// undefined FUN_08108908(void)
// entry 0x8108908


undefined8 FUN_08108908(undefined1 param_1,undefined4 *param_2,undefined1 param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  uVar6 = *param_2;
  iVar5 = param_2[1];
  iVar2 = FUN_08005500(*DAT_08108970);
  if (iVar2 == 0) goto LAB_081089b0;
  *(undefined1 *)(iVar2 + 0x25) = 1;
  iVar3 = DAT_08108974;
  *(undefined1 *)(iVar2 + 9) = 1;
  *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar3 + 4);
  *(undefined2 *)(iVar2 + 0x20) = 0;
  *(undefined1 *)(iVar2 + 0x22) = 0;
  *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
  *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
  if (*(byte *)(iVar2 + 0x11) < 2) {
    sVar1 = FUN_08108d14(uVar6,iVar5);
    if (sVar1 == 0) {
      *(undefined4 *)(iVar2 + 0x54) = uVar6;
      goto LAB_081089a6;
    }
    iVar3 = FUN_08108d54(uVar6,iVar5);
    *(int *)(iVar2 + 0x58) = iVar3;
    if (iVar5 < iVar3) {
      uVar4 = FUN_08108d84(uVar6,iVar5);
      *(undefined4 *)(iVar2 + 0x58) = uVar4;
    }
    *(undefined4 *)(iVar2 + 0x54) = uVar6;
  }
  else {
    *(undefined4 *)(iVar2 + 0x54) = uVar6;
    iVar5 = FUN_08108d54(uVar6,iVar5);
LAB_081089a6:
    *(int *)(iVar2 + 0x58) = iVar5;
  }
  *(undefined1 *)(iVar2 + 0x10) = param_1;
  *(undefined1 *)(iVar2 + 0x11) = param_3;
LAB_081089b0:
  return CONCAT44(in_lr,iVar2);
}


