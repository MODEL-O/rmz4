// undefined FUN_080d3330(void)
// entry 0x80d3330


undefined8 FUN_080d3330(undefined4 param_1,undefined4 *param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080d3384);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080d3388;
    *(undefined1 *)(iVar2 + 9) = 9;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x24);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined4 *)(iVar2 + 0x74) = *param_2;
    *(undefined4 *)(iVar2 + 0x78) = param_2[1];
    *(undefined1 *)(iVar2 + 0x12) = param_3;
    *(undefined1 *)(iVar2 + 0x7c) = param_3;
  }
  return CONCAT44(in_lr,iVar2);
}


