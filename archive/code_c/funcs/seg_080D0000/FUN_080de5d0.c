// undefined FUN_080de5d0(void)
// entry 0x80de5d0


undefined8 FUN_080de5d0(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  puVar1 = DAT_080de648;
  iVar3 = FUN_08005500(*DAT_080de648);
  if (iVar3 != 0) {
    *(undefined1 *)(iVar3 + 0x25) = 1;
    iVar4 = DAT_080de64c;
    *(undefined1 *)(iVar3 + 9) = 0x30;
    *(undefined4 *)(iVar3 + 0x14) = **(undefined4 **)(iVar4 + 0xc0);
    *(undefined2 *)(iVar3 + 0x20) = 0;
    *(undefined1 *)(iVar3 + 0x22) = 0;
    *(undefined1 *)(iVar3 + 0x10) = 0;
    *(undefined1 *)(iVar3 + 0x11) = 0;
    *(undefined4 *)(iVar3 + 0x28) = param_1;
    *(undefined4 *)(iVar3 + 0x2c) = param_1;
  }
  iVar4 = FUN_08005500(*puVar1);
  if (iVar4 != 0) {
    *(undefined1 *)(iVar4 + 0x25) = 1;
    iVar2 = DAT_080de64c;
    *(undefined1 *)(iVar4 + 9) = 0x30;
    *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar2 + 0xc0);
    *(undefined2 *)(iVar4 + 0x20) = 0;
    *(undefined1 *)(iVar4 + 0x22) = 0;
    *(undefined1 *)(iVar4 + 0x10) = 1;
    *(undefined1 *)(iVar4 + 0x11) = 0;
    *(int *)(iVar4 + 0x28) = iVar3;
    *(undefined4 *)(iVar4 + 0x2c) = param_1;
  }
  return CONCAT44(in_lr,iVar3);
}


