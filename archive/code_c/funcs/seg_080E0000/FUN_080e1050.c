// undefined FUN_080e1050(void)
// entry 0x80e1050


undefined8 FUN_080e1050(undefined4 *param_1,char param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080e10b0);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 1;
    iVar1 = DAT_080e10b4;
    *(undefined1 *)(iVar2 + 9) = 0x3b;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xec);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(char *)(iVar2 + 0x10) = param_2;
    *(undefined1 *)(iVar2 + 0x11) = param_3;
    if (param_2 == '\x01') {
      *(char *)(DAT_080e10b8 + 0x26) = *(char *)(DAT_080e10b8 + 0x26) + '\x01';
    }
  }
  return CONCAT44(in_lr,iVar2);
}


