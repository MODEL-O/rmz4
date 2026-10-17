// undefined FUN_080d31d0(void)
// entry 0x80d31d0


undefined4
FUN_080d31d0(undefined4 *param_1,undefined1 param_2,undefined1 param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080d3228);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080d322c;
    *(undefined1 *)(iVar2 + 9) = 8;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x20);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined1 *)(iVar2 + 0x11) = param_2;
    *(undefined1 *)(iVar2 + 0x74) = param_3;
    *(undefined2 *)(iVar2 + 0x78) = param_4;
  }
  return in_lr;
}


