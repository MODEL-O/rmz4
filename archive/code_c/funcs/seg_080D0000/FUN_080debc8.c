// undefined FUN_080debc8(void)
// entry 0x80debc8


undefined8
FUN_080debc8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
            undefined1 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080dec28);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080dec2c;
    *(undefined1 *)(iVar2 + 9) = 0x33;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xcc);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined4 *)(iVar2 + 0x54) = param_2;
    *(undefined4 *)(iVar2 + 0x58) = param_3;
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar2 + 0x11) = param_4;
    *(undefined1 *)(iVar2 + 0x12) = param_5;
  }
  return CONCAT44(in_lr,iVar2);
}


