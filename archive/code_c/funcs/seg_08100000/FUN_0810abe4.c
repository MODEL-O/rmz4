// undefined FUN_0810abe4(void)
// entry 0x810abe4


undefined8 FUN_0810abe4(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_0810ac30);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x10;
    iVar1 = DAT_0810ac34;
    *(undefined1 *)(iVar2 + 9) = 3;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xc);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined1 *)(iVar2 + 0x10) = param_2;
    *(undefined1 *)(iVar2 + 0x11) = 0;
    *(undefined4 *)(iVar2 + 0x74) = 0;
    *(undefined4 *)(iVar2 + 0x78) = 0;
    *(undefined1 *)(iVar2 + 0x7c) = 0;
  }
  return CONCAT44(in_lr,iVar2);
}


