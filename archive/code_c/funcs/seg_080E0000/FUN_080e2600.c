// undefined FUN_080e2600(void)
// entry 0x80e2600


undefined8
FUN_080e2600(undefined4 *param_1,undefined1 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080e2668);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080e266c;
    *(undefined1 *)(iVar2 + 9) = 0x41;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x104);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar2 + 0x11) = param_2;
    *(undefined4 *)(iVar2 + 0x74) = param_3;
    *(undefined1 *)(iVar2 + 0x78) = param_4;
  }
  return CONCAT44(in_lr,iVar2);
}


