// undefined FUN_080c6480(void)
// entry 0x80c6480


undefined4 FUN_080c6480(undefined4 param_1,undefined4 param_2,byte param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = FUN_08005500(*DAT_080c64d0);
  if (iVar3 != 0) {
    *(undefined1 *)(iVar3 + 0x25) = 8;
    iVar1 = DAT_080c64d4;
    *(undefined1 *)(iVar3 + 9) = 0x1a;
    *(undefined4 *)(iVar3 + 0x14) = **(undefined4 **)(iVar1 + 0x68);
    *(undefined2 *)(iVar3 + 0x20) = 0;
    *(undefined1 *)(iVar3 + 0x22) = 0;
    *(undefined4 *)(iVar3 + 0x54) = param_1;
    *(undefined4 *)(iVar3 + 0x58) = param_2;
    *(undefined1 *)(iVar3 + 0x10) = 6;
    *(byte *)(iVar3 + 0x11) = param_3;
    if (param_3 == 0) {
      bVar2 = *(byte *)(iVar3 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(iVar3 + 10) | 0x10;
    }
    *(byte *)(iVar3 + 10) = bVar2;
    *(byte *)(iVar3 + 0x4c) = param_3 & 1;
    *(byte *)(iVar3 + 0x4a) = *(byte *)(iVar3 + 0x4a) & 0xef | (param_3 & 1) << 4;
  }
  return in_lr;
}


