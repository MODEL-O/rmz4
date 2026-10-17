// undefined FUN_080d296c(void)
// entry 0x80d296c


undefined8 FUN_080d296c(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080d29b8);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080d29bc;
    *(undefined1 *)(iVar2 + 9) = 7;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x1c);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    uVar3 = param_2[1];
    *(undefined4 *)(iVar2 + 0x5c) = *param_2;
    *(undefined4 *)(iVar2 + 0x60) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar2 + 0x11) = 0;
  }
  return CONCAT44(in_lr,iVar2);
}


