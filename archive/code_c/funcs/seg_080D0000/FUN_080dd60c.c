// undefined FUN_080dd60c(void)
// entry 0x80dd60c


undefined4
FUN_080dd60c(undefined4 param_1,undefined4 *param_2,undefined1 param_3,undefined1 param_4,
            byte param_5)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar3 = FUN_08005500(*DAT_080dd670);
  if (iVar3 != 0) {
    *(undefined1 *)(iVar3 + 0x25) = 1;
    iVar1 = DAT_080dd674;
    *(undefined1 *)(iVar3 + 9) = 0x2d;
    *(undefined4 *)(iVar3 + 0x14) = **(undefined4 **)(iVar1 + 0xb4);
    *(undefined2 *)(iVar3 + 0x20) = 0;
    *(undefined1 *)(iVar3 + 0x22) = 0;
    *(undefined4 *)(iVar3 + 0x28) = param_1;
    uVar4 = param_2[1];
    *(undefined4 *)(iVar3 + 0x54) = *param_2;
    *(undefined4 *)(iVar3 + 0x58) = uVar4;
    if (param_5 == 0) {
      bVar2 = *(byte *)(iVar3 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(iVar3 + 10) | 0x10;
    }
    *(byte *)(iVar3 + 10) = bVar2;
    *(byte *)(iVar3 + 0x4c) = param_5 & 1;
    *(byte *)(iVar3 + 0x4a) = *(byte *)(iVar3 + 0x4a) & 0xef | (param_5 & 1) << 4;
    *(undefined1 *)(iVar3 + 0x10) = param_3;
    *(undefined1 *)(iVar3 + 0x11) = param_4;
  }
  return in_lr;
}


