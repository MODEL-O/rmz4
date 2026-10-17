// undefined FUN_080e1cc4(void)
// entry 0x80e1cc4


undefined4
FUN_080e1cc4(undefined4 *param_1,undefined1 param_2,byte param_3,char param_4,undefined1 param_5)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar3 = FUN_08005500(*DAT_080e1d28);
  if (iVar3 != 0) {
    *(undefined1 *)(iVar3 + 0x25) = 1;
    iVar1 = DAT_080e1d2c;
    *(undefined1 *)(iVar3 + 9) = 0x3e;
    *(undefined4 *)(iVar3 + 0x14) = **(undefined4 **)(iVar1 + 0xf8);
    *(undefined2 *)(iVar3 + 0x20) = 0;
    *(undefined1 *)(iVar3 + 0x22) = 0;
    uVar4 = param_1[1];
    *(undefined4 *)(iVar3 + 0x54) = *param_1;
    *(undefined4 *)(iVar3 + 0x58) = uVar4;
    if (param_3 == 0) {
      bVar2 = *(byte *)(iVar3 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(iVar3 + 10) | 0x10;
    }
    *(byte *)(iVar3 + 10) = bVar2;
    *(byte *)(iVar3 + 0x4c) = param_3 & 1;
    *(byte *)(iVar3 + 0x4a) = *(byte *)(iVar3 + 0x4a) & 0xef | (param_3 & 1) << 4;
    if (param_4 == '\0') {
      uVar4 = 0x10;
    }
    else {
      uVar4 = 0xfffffff0;
    }
    *(undefined4 *)(iVar3 + 100) = uVar4;
    *(undefined1 *)(iVar3 + 0x10) = 1;
    *(undefined1 *)(iVar3 + 0x11) = param_2;
    *(undefined1 *)(iVar3 + 0x12) = param_5;
  }
  return in_lr;
}


