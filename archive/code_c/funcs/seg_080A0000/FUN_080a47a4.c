// undefined FUN_080a47a4(void)
// entry 0x80a47a4


undefined8 FUN_080a47a4(undefined4 *param_1,undefined4 *param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080a4808);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x18;
    iVar1 = DAT_080a480c;
    *(undefined1 *)(iVar2 + 9) = 0x3c;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xf0);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    uVar3 = param_2[1];
    *(undefined4 *)(iVar2 + 0x5c) = *param_2;
    *(undefined4 *)(iVar2 + 0x60) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar2 + 0x11) = param_3;
  }
  return CONCAT44(in_lr,iVar2);
}


