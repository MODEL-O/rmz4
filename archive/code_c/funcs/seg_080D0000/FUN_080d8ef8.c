// undefined FUN_080d8ef8(void)
// entry 0x80d8ef8


undefined8
FUN_080d8ef8(undefined4 *param_1,byte param_2,uint param_3,undefined4 param_4,undefined1 param_5)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = FUN_08005500(*DAT_080d8f64);
  if (iVar3 != 0) {
    *(undefined1 *)(iVar3 + 0x25) = 1;
    iVar1 = DAT_080d8f68;
    *(undefined1 *)(iVar3 + 9) = 0x1c;
    *(undefined4 *)(iVar3 + 0x14) = **(undefined4 **)(iVar1 + 0x70);
    *(undefined2 *)(iVar3 + 0x20) = 0;
    *(undefined1 *)(iVar3 + 0x22) = 0;
    *(undefined1 *)(iVar3 + 0x10) = param_5;
    *(undefined1 *)(iVar3 + 0x11) = 1;
    *(undefined4 *)(iVar3 + 0x54) = *param_1;
    *(undefined4 *)(iVar3 + 0x58) = param_1[1];
    *(uint *)(iVar3 + 0x74) = param_3 & 0xffff;
    *(undefined4 *)(iVar3 + 0x78) = param_4;
    if (param_2 == 0) {
      bVar2 = *(byte *)(iVar3 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(iVar3 + 10) | 0x10;
    }
    *(byte *)(iVar3 + 10) = bVar2;
    *(byte *)(iVar3 + 0x4c) = param_2 & 1;
    *(byte *)(iVar3 + 0x4a) = *(byte *)(iVar3 + 0x4a) & 0xef | (param_2 & 1) << 4;
  }
  return CONCAT44(in_lr,iVar3);
}


