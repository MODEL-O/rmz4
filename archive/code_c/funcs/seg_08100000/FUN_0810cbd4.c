// undefined FUN_0810cbd4(void)
// entry 0x810cbd4


undefined8
FUN_0810cbd4(undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined2 param_4,
            undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_0810cc48);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x10;
    iVar1 = DAT_0810cc4c;
    *(undefined1 *)(iVar2 + 9) = 0xd;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x34);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined1 *)(iVar2 + 0x10) = param_2;
    *(undefined1 *)(iVar2 + 0x11) = param_3;
    *(undefined4 *)(iVar2 + 0x54) = param_5;
    *(undefined4 *)(iVar2 + 0x58) = param_6;
    *(undefined2 *)(iVar2 + 0x78) = param_4;
    *(undefined1 *)(iVar2 + 0x7d) = param_7;
    *(undefined1 *)(iVar2 + 0x7f) = 0;
  }
  return CONCAT44(in_lr,iVar2);
}


