// undefined FUN_080e0dc0(void)
// entry 0x80e0dc0


undefined8 FUN_080e0dc0(undefined4 *param_1,char param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080e0e20);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080e0e24;
    *(undefined1 *)(iVar2 + 9) = 0x3a;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xe8);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(char *)(iVar2 + 0x10) = param_2;
    *(undefined1 *)(iVar2 + 0x11) = param_3;
    if (param_2 == '\x01') {
      *(char *)(DAT_080e0e28 + 0x26) = *(char *)(DAT_080e0e28 + 0x26) + '\x01';
    }
  }
  return CONCAT44(in_lr,iVar2);
}


