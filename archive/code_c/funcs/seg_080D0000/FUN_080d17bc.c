// undefined FUN_080d17bc(void)
// entry 0x80d17bc


undefined8 FUN_080d17bc(undefined1 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080d17fc);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080d1800;
    *(undefined1 *)(iVar2 + 9) = 3;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xc);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined1 *)(iVar2 + 0x10) = param_1;
  }
  return CONCAT44(in_lr,iVar2);
}


