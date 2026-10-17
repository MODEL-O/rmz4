// undefined FUN_080d9cc8(void)
// entry 0x80d9cc8


undefined8
FUN_080d9cc8(undefined4 *param_1,undefined4 *param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080d9d24);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080d9d28;
    *(undefined1 *)(iVar2 + 9) = 0x20;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x80);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    uVar3 = param_2[1];
    *(undefined4 *)(iVar2 + 0x5c) = *param_2;
    *(undefined4 *)(iVar2 + 0x60) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = param_3;
    *(undefined1 *)(iVar2 + 0x11) = param_4;
  }
  return CONCAT44(in_lr,iVar2);
}


