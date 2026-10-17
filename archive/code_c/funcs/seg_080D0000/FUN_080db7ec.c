// undefined FUN_080db7ec(void)
// entry 0x80db7ec


undefined8
FUN_080db7ec(undefined4 param_1,undefined4 *param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080db848);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080db84c;
    *(undefined1 *)(iVar2 + 9) = 0x29;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xa4);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    uVar3 = param_2[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_2;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = 2;
    *(undefined1 *)(iVar2 + 0x11) = param_3;
    *(undefined1 *)(iVar2 + 0x74) = param_4;
  }
  return CONCAT44(in_lr,iVar2);
}


