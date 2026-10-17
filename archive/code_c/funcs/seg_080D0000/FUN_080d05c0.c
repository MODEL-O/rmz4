// undefined FUN_080d05c0(void)
// entry 0x80d05c0


undefined4 FUN_080d05c0(undefined4 *param_1,byte param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080d0620);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 8;
    iVar1 = DAT_080d0624;
    *(undefined1 *)(iVar2 + 9) = 0x41;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x104);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(byte *)(iVar2 + 0x10) = param_2;
    *(undefined4 *)(iVar2 + 0x28) = param_3;
    if (param_2 < 8) {
      FUN_080d05c0(param_1,param_2 + 1,param_3);
    }
  }
  return in_lr;
}


