// undefined FUN_080df2ec(void)
// entry 0x80df2ec


undefined4
FUN_080df2ec(undefined4 *param_1,undefined1 param_2,undefined1 param_3,byte param_4,
            undefined1 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080df354);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080df358;
    *(undefined1 *)(iVar2 + 9) = 0x34;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xd0);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    if (param_4 == 0) {
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xef;
    }
    else {
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) | 0x10;
    }
    *(byte *)(iVar2 + 0x4c) = param_4 & 1;
    *(byte *)(iVar2 + 0x4a) = *(byte *)(iVar2 + 0x4a) & 0xef | (param_4 & 1) << 4;
    *(undefined1 *)(iVar2 + 0x74) = param_5;
    *(undefined1 *)(iVar2 + 0x10) = param_2;
    *(undefined1 *)(iVar2 + 0x11) = param_3;
  }
  return in_lr;
}


