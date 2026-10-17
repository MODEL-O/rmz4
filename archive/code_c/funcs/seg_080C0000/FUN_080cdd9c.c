// undefined FUN_080cdd9c(void)
// entry 0x80cdd9c


undefined4
FUN_080cdd9c(undefined4 param_1,undefined4 *param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080cddf0);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 8;
    iVar1 = DAT_080cddf4;
    *(undefined1 *)(iVar2 + 9) = 0x34;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xd0);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    uVar3 = param_2[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_2;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = param_3;
    *(undefined1 *)(iVar2 + 0x11) = param_4;
  }
  return in_lr;
}


