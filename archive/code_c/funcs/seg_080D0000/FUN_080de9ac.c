// undefined FUN_080de9ac(void)
// entry 0x80de9ac


undefined8 FUN_080de9ac(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080dea00);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080dea04;
    *(undefined1 *)(iVar2 + 9) = 0x32;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 200);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined4 *)(iVar2 + 0x74) = param_2;
    *(undefined1 *)(iVar2 + 0x78) = param_3;
    *(undefined1 *)(iVar2 + 0x79) = param_4;
  }
  return CONCAT44(in_lr,iVar2);
}


