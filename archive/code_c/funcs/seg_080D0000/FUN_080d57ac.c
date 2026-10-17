// undefined FUN_080d57ac(void)
// entry 0x80d57ac


undefined8 FUN_080d57ac(undefined1 param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  FUN_080d0c50(DAT_080d57fc);
  iVar2 = FUN_08005500(*DAT_080d5800);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080d5804;
    *(undefined1 *)(iVar2 + 9) = 0x12;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x48);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined1 *)(iVar2 + 0x10) = param_1;
    *(undefined1 *)(iVar2 + 0x11) = param_2;
    FUN_0810d568();
  }
  return CONCAT44(in_lr,iVar2);
}


