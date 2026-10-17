// undefined FUN_080a88e8(void)
// entry 0x80a88e8


undefined8 FUN_080a88e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080a894c);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x18;
    iVar1 = DAT_080a8950;
    *(undefined1 *)(iVar2 + 9) = 0x43;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x10c);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined4 *)(iVar2 + 0x2c) = param_2;
    *(undefined4 *)(iVar2 + 0xc0) = param_3;
    *(undefined1 *)(iVar2 + 0x10) = 2;
    *(undefined1 *)(iVar2 + 0x11) = param_4;
  }
  return CONCAT44(in_lr,iVar2);
}


