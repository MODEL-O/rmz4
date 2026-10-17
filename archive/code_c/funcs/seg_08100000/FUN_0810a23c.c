// undefined FUN_0810a23c(void)
// entry 0x810a23c


undefined8 FUN_0810a23c(undefined4 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_0810a284);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x10;
    puVar1 = DAT_0810a288;
    *(undefined1 *)(iVar2 + 9) = 0;
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)*puVar1;
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined1 *)(iVar2 + 0x10) = param_2;
    *(undefined1 *)(iVar2 + 0x11) = param_3;
  }
  return CONCAT44(in_lr,iVar2);
}


