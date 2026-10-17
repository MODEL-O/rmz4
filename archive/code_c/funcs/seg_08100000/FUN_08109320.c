// undefined FUN_08109320(void)
// entry 0x8109320


undefined8 FUN_08109320(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((uint)*(byte *)(param_1 + 0xf1) + (uint)*(byte *)(param_1 + 0xf2) +
      (uint)*(byte *)(param_1 + 0xf3) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_08005500(*DAT_08109380);
    if (iVar2 != 0) {
      *(undefined1 *)(iVar2 + 0x25) = 0x10;
      puVar1 = DAT_08109384;
      *(undefined1 *)(iVar2 + 9) = 0;
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)*puVar1;
      *(undefined2 *)(iVar2 + 0x20) = 0;
      *(undefined1 *)(iVar2 + 0x22) = 0;
      *(int *)(iVar2 + 0x28) = param_1;
      *(undefined1 *)(iVar2 + 0x10) = 0;
      *(undefined1 *)(iVar2 + 0x11) = 0;
      *(undefined1 *)(iVar2 + 0xbe) = 0;
    }
  }
  return CONCAT44(in_lr,iVar2);
}


