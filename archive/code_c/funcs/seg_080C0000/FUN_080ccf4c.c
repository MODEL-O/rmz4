// undefined FUN_080ccf4c(void)
// entry 0x80ccf4c


undefined4 FUN_080ccf4c(undefined4 *param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080ccf94);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 8;
    iVar1 = DAT_080ccf98;
    *(undefined1 *)(iVar2 + 9) = 0x2d;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xb4);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = param_2;
  }
  return in_lr;
}


