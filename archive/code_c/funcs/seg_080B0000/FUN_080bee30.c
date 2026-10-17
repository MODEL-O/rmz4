// undefined FUN_080bee30(void)
// entry 0x80bee30


undefined8 FUN_080bee30(undefined4 *param_1,undefined4 *param_2,byte param_3,undefined1 param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar3 = FUN_08005500(*DAT_080bee90);
  if (iVar3 != 0) {
    *(undefined1 *)(iVar3 + 0x25) = 8;
    iVar1 = DAT_080bee94;
    *(undefined1 *)(iVar3 + 9) = 6;
    *(undefined4 *)(iVar3 + 0x14) = **(undefined4 **)(iVar1 + 0x18);
    *(undefined2 *)(iVar3 + 0x20) = 0;
    *(undefined1 *)(iVar3 + 0x22) = 0;
    uVar4 = param_1[1];
    *(undefined4 *)(iVar3 + 0x54) = *param_1;
    *(undefined4 *)(iVar3 + 0x58) = uVar4;
    uVar4 = param_2[1];
    *(undefined4 *)(iVar3 + 100) = *param_2;
    *(undefined4 *)(iVar3 + 0x68) = uVar4;
    *(undefined1 *)(iVar3 + 0x10) = 1;
    *(undefined1 *)(iVar3 + 0x11) = param_4;
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
  return CONCAT44(in_lr,iVar3);
}


