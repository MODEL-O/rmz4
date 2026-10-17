// undefined FUN_08049300(void)
// entry 0x8049300


undefined4 FUN_08049300(undefined4 *param_1,undefined1 param_2,byte param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar3 = FUN_08005500(*DAT_08049360);
  iVar1 = DAT_08049364;
  if (iVar3 != 0) {
    *(undefined1 *)(iVar3 + 9) = 0x22;
    *(undefined4 *)(iVar3 + 0x14) = **(undefined4 **)(iVar1 + 0x88);
    *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) & 0xbf;
    *(undefined1 *)(iVar3 + 0x25) = 0x10;
    *(undefined2 *)(iVar3 + 0x20) = *DAT_08049368;
    *(undefined1 *)(iVar3 + 0x22) = *DAT_0804936c;
    *(undefined1 *)(iVar3 + 0x10) = 1;
    *(undefined1 *)(iVar3 + 0x11) = param_2;
    *(undefined4 *)(iVar3 + 0x2c) = *DAT_08049370;
    if (param_3 == 0) {
      bVar2 = *(byte *)(iVar3 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(iVar3 + 10) | 0x10;
    }
    *(byte *)(iVar3 + 10) = bVar2;
    *(byte *)(iVar3 + 0x4c) = param_3 & 1;
    *(byte *)(iVar3 + 0x4a) = *(byte *)(iVar3 + 0x4a) & 0xef | (param_3 & 1) << 4;
    uVar4 = param_1[1];
    *(undefined4 *)(iVar3 + 0x54) = *param_1;
    *(undefined4 *)(iVar3 + 0x58) = uVar4;
  }
  return in_lr;
}


