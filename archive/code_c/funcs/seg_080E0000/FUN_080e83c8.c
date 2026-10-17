// undefined FUN_080e83c8(void)
// entry 0x80e83c8


undefined8 FUN_080e83c8(int param_1,undefined4 *param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080e842c);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080e8430;
    *(undefined1 *)(iVar2 + 9) = 0x57;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x15c);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(int *)(iVar2 + 0x28) = param_1;
    uVar3 = param_2[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_2;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = param_3;
    *(undefined1 *)(iVar2 + 0x11) = param_4;
    *(short *)(param_1 + 0xcc) = *(short *)(param_1 + 0xcc) + 1;
  }
  return CONCAT44(in_lr,iVar2);
}


