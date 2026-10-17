// undefined FUN_080c62a0(void)
// entry 0x80c62a0


undefined4
FUN_080c62a0(undefined4 *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080c62f4);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 8;
    iVar1 = DAT_080c62f8;
    *(undefined1 *)(iVar2 + 9) = 0x1a;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x68);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = param_2;
    *(undefined1 *)(iVar2 + 0x11) = param_3;
    *(undefined1 *)(iVar2 + 0x12) = param_4;
  }
  return in_lr;
}


