// undefined FUN_080a1098(void)
// entry 0x80a1098


undefined8 FUN_080a1098(undefined4 param_1,undefined4 *param_2,char param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080a1108);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x18;
    iVar1 = DAT_080a110c;
    *(undefined1 *)(iVar2 + 9) = 0x34;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xd0);
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
      *(char *)(DAT_080a1110 + 0x26) = *(char *)(DAT_080a1110 + 0x26) + '\x01';
    }
  }
  return CONCAT44(in_lr,iVar2);
}


