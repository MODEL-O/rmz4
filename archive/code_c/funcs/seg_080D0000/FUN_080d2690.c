// undefined FUN_080d2690(void)
// entry 0x80d2690


undefined8 FUN_080d2690(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  puVar1 = DAT_080d273c;
  iVar3 = FUN_08005500(*DAT_080d273c);
  if (iVar3 != 0) {
    *(undefined1 *)(iVar3 + 0x25) = 1;
    iVar4 = DAT_080d2740;
    *(undefined1 *)(iVar3 + 9) = 6;
    *(undefined4 *)(iVar3 + 0x14) = **(undefined4 **)(iVar4 + 0x18);
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
    iVar5 = DAT_080d2740;
    *(undefined1 *)(iVar4 + 9) = 6;
    *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar5 + 0x18);
    *(undefined2 *)(iVar4 + 0x20) = 0;
    *(undefined1 *)(iVar4 + 0x22) = 0;
    *(undefined1 *)(iVar4 + 0x10) = 1;
    *(undefined1 *)(iVar4 + 0x11) = 0;
    *(int *)(iVar4 + 0x28) = iVar3;
    *(undefined4 *)(iVar4 + 0x2c) = param_1;
  }
  iVar5 = FUN_08005500(*puVar1);
  if (iVar5 != 0) {
    *(undefined1 *)(iVar5 + 0x25) = 1;
    iVar2 = DAT_080d2740;
    *(undefined1 *)(iVar5 + 9) = 6;
    *(undefined4 *)(iVar5 + 0x14) = **(undefined4 **)(iVar2 + 0x18);
    *(undefined2 *)(iVar5 + 0x20) = 0;
    *(undefined1 *)(iVar5 + 0x22) = 0;
    *(undefined1 *)(iVar5 + 0x10) = 2;
    *(undefined1 *)(iVar5 + 0x11) = 0;
    *(int *)(iVar5 + 0x28) = iVar4;
    *(undefined4 *)(iVar5 + 0x2c) = param_1;
  }
  return CONCAT44(in_lr,iVar3);
}


