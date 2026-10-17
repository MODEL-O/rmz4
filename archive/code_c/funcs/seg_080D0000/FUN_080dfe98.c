// undefined FUN_080dfe98(void)
// entry 0x80dfe98


undefined4 FUN_080dfe98(undefined4 *param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080dfee8);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080dfeec;
    *(undefined1 *)(iVar2 + 9) = 0x36;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xd8);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = param_2;
    *(undefined1 *)(iVar2 + 0x11) = param_3;
  }
  return in_lr;
}


