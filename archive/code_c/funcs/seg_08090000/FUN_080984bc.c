// undefined FUN_080984bc(void)
// entry 0x80984bc


undefined4 FUN_080984bc(undefined4 *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_08098524);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x18;
    iVar1 = DAT_08098528;
    *(undefined1 *)(iVar2 + 9) = 0x21;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x84);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = 1;
    *(undefined1 *)(iVar2 + 0x11) = 0;
    if (param_2 == 0) {
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xef;
    }
    else {
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) | 0x10;
    }
    *(byte *)(iVar2 + 0x4c) = param_2 & 1;
    *(byte *)(iVar2 + 0x4a) = *(byte *)(iVar2 + 0x4a) & 0xef | (param_2 & 1) << 4;
  }
  return in_lr;
}


