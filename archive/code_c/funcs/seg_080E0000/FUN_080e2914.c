// undefined FUN_080e2914(void)
// entry 0x80e2914


undefined4 FUN_080e2914(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080e2970);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080e2974;
    *(undefined1 *)(iVar2 + 9) = 0x43;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x10c);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(char *)(iVar2 + 0x10) = (char)((uint)param_2 >> 8);
    *(char *)(iVar2 + 0x11) = (char)param_2;
    *(undefined1 *)(iVar2 + 0x75) = param_3;
    *(undefined4 **)(iVar2 + 0x28) = param_1;
  }
  return in_lr;
}


