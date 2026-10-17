// undefined FUN_0804b9a4(void)
// entry 0x804b9a4


undefined4 FUN_0804b9a4(int param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_0804ba00);
  iVar1 = DAT_0804ba04;
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 9) = 0x2a;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xa8);
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) & 0xbf;
    *(undefined1 *)(iVar2 + 0x25) = 0x10;
    *(undefined2 *)(iVar2 + 0x20) = *DAT_0804ba08;
    *(undefined1 *)(iVar2 + 0x22) = *DAT_0804ba0c;
    *(int *)(iVar2 + 0x28) = param_1;
    uVar3 = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = param_3;
    *(undefined1 *)(iVar2 + 0x11) = param_4;
  }
  return in_lr;
}


