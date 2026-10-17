// undefined FUN_080c9a1c(void)
// entry 0x80c9a1c


undefined8 FUN_080c9a1c(undefined4 *param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080c9a6c);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 8;
    iVar1 = DAT_080c9a70;
    *(undefined1 *)(iVar2 + 9) = 0x21;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x84);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined1 *)(iVar2 + 0xb4) = param_2;
  }
  return CONCAT44(in_lr,iVar2);
}


