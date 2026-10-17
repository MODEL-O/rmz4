// undefined FUN_080d016c(void)
// entry 0x80d016c


undefined8 FUN_080d016c(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080d01cc);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 8;
    iVar1 = DAT_080d01d0;
    *(undefined1 *)(iVar2 + 9) = 0x3f;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xfc);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(int *)(iVar2 + 0x28) = param_1;
    uVar3 = param_2[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_2;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    uVar3 = param_3[1];
    *(undefined4 *)(iVar2 + 0x5c) = *param_3;
    *(undefined4 *)(iVar2 + 0x60) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar2 + 0x11) = 0;
    *(short *)(param_1 + 0xcc) = *(short *)(param_1 + 0xcc) + 1;
  }
  return CONCAT44(in_lr,iVar2);
}


