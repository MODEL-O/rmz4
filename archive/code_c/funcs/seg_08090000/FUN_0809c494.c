// undefined FUN_0809c494(void)
// entry 0x809c494


undefined8 FUN_0809c494(undefined4 param_1,undefined1 param_2,undefined1 param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_0809c4f8);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x18;
    iVar1 = DAT_0809c4fc;
    *(undefined1 *)(iVar2 + 9) = 0x29;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xa4);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined1 *)(iVar2 + 0x10) = param_2;
    *(undefined1 *)(iVar2 + 0x11) = param_3;
    if (param_4 == 0) {
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xef;
    }
    else {
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) | 0x10;
    }
    *(byte *)(iVar2 + 0x4c) = param_4 & 1;
    *(byte *)(iVar2 + 0x4a) = *(byte *)(iVar2 + 0x4a) & 0xef | (param_4 & 1) << 4;
  }
  return CONCAT44(in_lr,iVar2);
}


