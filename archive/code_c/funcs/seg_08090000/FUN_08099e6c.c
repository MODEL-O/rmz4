// undefined FUN_08099e6c(void)
// entry 0x8099e6c


undefined4 FUN_08099e6c(undefined4 *param_1,undefined1 param_2,undefined1 param_3,byte param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar3 = FUN_08005500(*DAT_08099ed0);
  if (iVar3 != 0) {
    *(undefined1 *)(iVar3 + 0x25) = 0x18;
    iVar1 = DAT_08099ed4;
    *(undefined1 *)(iVar3 + 9) = 0x24;
    *(undefined4 *)(iVar3 + 0x14) = **(undefined4 **)(iVar1 + 0x90);
    *(undefined2 *)(iVar3 + 0x20) = 0;
    *(undefined1 *)(iVar3 + 0x22) = 0;
    *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) | 0x10;
    *(undefined1 *)(iVar3 + 0x1d) = *(undefined1 *)(iVar3 + 0x1c);
    uVar4 = param_1[1];
    *(undefined4 *)(iVar3 + 0x54) = *param_1;
    *(undefined4 *)(iVar3 + 0x58) = uVar4;
    if (param_4 == 0) {
      bVar2 = *(byte *)(iVar3 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(iVar3 + 10) | 0x10;
    }
    *(byte *)(iVar3 + 10) = bVar2;
    *(byte *)(iVar3 + 0x4c) = param_4 & 1;
    *(byte *)(iVar3 + 0x4a) = *(byte *)(iVar3 + 0x4a) & 0xef | (param_4 & 1) << 4;
    *(undefined1 *)(iVar3 + 0x10) = param_2;
    *(undefined1 *)(iVar3 + 0x11) = param_3;
  }
  return in_lr;
}


