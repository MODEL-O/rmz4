// undefined FUN_081083b4(void)
// entry 0x81083b4


undefined8 FUN_081083b4(undefined1 param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_lr;
  
  uVar7 = *param_2;
  iVar6 = param_2[1];
  if (*(short *)(*DAT_081083e4 + 10) < 3) {
    iVar3 = 0;
    goto LAB_0810846e;
  }
  iVar3 = FUN_08005500(*DAT_081083e4);
  if (iVar3 == 0) goto LAB_0810846e;
  *(undefined1 *)(iVar3 + 0x25) = 1;
  puVar1 = DAT_08108430;
  *(undefined1 *)(iVar3 + 9) = 0;
  *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)*puVar1;
  *(undefined2 *)(iVar3 + 0x20) = 0;
  *(undefined1 *)(iVar3 + 0x22) = 0;
  *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) | 0x10;
  *(undefined1 *)(iVar3 + 0x1d) = *(undefined1 *)(iVar3 + 0x1c);
  if (*(byte *)(iVar3 + 0x11) < 2) {
    sVar2 = FUN_081088f4(uVar7,iVar6);
    if (sVar2 == 0) {
      *(undefined4 *)(iVar3 + 0x54) = uVar7;
      goto LAB_08108462;
    }
    iVar4 = FUN_08008534(uVar7,iVar6);
    *(int *)(iVar3 + 0x58) = iVar4;
    if (iVar6 < iVar4) {
      uVar5 = FUN_08008748(uVar7,iVar6);
      *(undefined4 *)(iVar3 + 0x58) = uVar5;
    }
    *(undefined4 *)(iVar3 + 0x54) = uVar7;
  }
  else {
    *(undefined4 *)(iVar3 + 0x54) = uVar7;
    iVar6 = FUN_08008534(uVar7,iVar6);
LAB_08108462:
    *(int *)(iVar3 + 0x58) = iVar6;
  }
  *(undefined1 *)(iVar3 + 0x10) = param_1;
  *(undefined1 *)(iVar3 + 0x11) = param_3;
LAB_0810846e:
  return CONCAT44(in_lr,iVar3);
}


