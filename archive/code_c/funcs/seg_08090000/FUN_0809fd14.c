// undefined FUN_0809fd14(void)
// entry 0x809fd14


undefined8 FUN_0809fd14(undefined4 param_1,undefined4 *param_2,char param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_0809fd84);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x18;
    iVar1 = DAT_0809fd88;
    *(undefined1 *)(iVar2 + 9) = 0x32;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 200);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    uVar3 = param_2[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_2;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(char *)(iVar2 + 0x10) = param_3;
    *(undefined1 *)(iVar2 + 0x11) = param_4;
    if (param_3 == '\x01') {
      *(char *)(DAT_0809fd8c + 0x26) = *(char *)(DAT_0809fd8c + 0x26) + '\x01';
    }
  }
  return CONCAT44(in_lr,iVar2);
}


