// undefined FUN_081098d4(void)
// entry 0x81098d4


undefined8 FUN_081098d4(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_08109920);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x10;
    iVar1 = DAT_08109924;
    *(undefined1 *)(iVar2 + 9) = 1;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 4);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0xb4) = param_1;
    *(undefined4 *)(iVar2 + 0xb8) = param_2;
    *(undefined1 *)(iVar2 + 0x10) = param_3;
    *(undefined1 *)(iVar2 + 0x11) = 0;
  }
  return CONCAT44(in_lr,iVar2);
}


