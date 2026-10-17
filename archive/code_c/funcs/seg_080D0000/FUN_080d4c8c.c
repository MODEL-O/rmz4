// undefined FUN_080d4c8c(void)
// entry 0x80d4c8c


undefined8 FUN_080d4c8c(undefined4 *param_1,undefined4 param_2,undefined1 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080d4d18);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080d4d1c;
    *(undefined1 *)(iVar2 + 9) = 0x10;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x40);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = param_3;
    *(undefined1 *)(iVar2 + 0x11) = 0;
    *(byte *)(iVar2 + 0x78) = (byte)((param_4 & 0xff) >> 4) & 1;
    *(byte *)(iVar2 + 0x79) = (byte)param_4 & 1;
    *(byte *)(iVar2 + 0x7a) = (byte)((param_4 & 0xff) >> 5) & 1;
    *(undefined4 *)(iVar2 + 0x7c) = param_2;
  }
  return CONCAT44(in_lr,iVar2);
}


