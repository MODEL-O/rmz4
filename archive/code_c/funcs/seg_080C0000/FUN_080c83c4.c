// undefined FUN_080c83c4(void)
// entry 0x80c83c4


undefined8 FUN_080c83c4(undefined4 param_1,char param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = FUN_08005500(*DAT_080c841c);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 8;
    iVar1 = DAT_080c8420;
    *(undefined1 *)(iVar2 + 9) = 0x1e;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x78);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(char *)(iVar2 + 0x10) = param_2;
    *(undefined1 *)(iVar2 + 0x11) = param_3;
    if (param_2 == '\x01') {
      *(char *)(DAT_080c8424 + 0x26) = *(char *)(DAT_080c8424 + 0x26) + '\x01';
    }
  }
  return CONCAT44(in_lr,iVar2);
}


