// undefined FUN_080e4210(void)
// entry 0x80e4210


undefined4 FUN_080e4210(int param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080e4264);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080e4268;
    *(undefined1 *)(iVar2 + 9) = 0x49;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x124);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(int *)(iVar2 + 0x28) = param_1;
    uVar3 = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = param_2;
    *(undefined1 *)(iVar2 + 0x11) = param_3;
  }
  return in_lr;
}


